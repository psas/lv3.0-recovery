/*=======================================================================
PROGRAM: 	eNSR V2.0 clamp controller
PROGRAMER:	Eric Ruhl
DATE:		12/29/2016

Purpose:	
	Opporate the recovery system of LV4, namely the eNSR

Design:
	

=======================================================================*/


////////////////////////////// I/O pin assignment //////////////////////////////

mHigh[]={1,2,3};			//Used to set coils to +1V

mLow[]={4,5,6};				//Used to set coils to -1V

LED[]={7,8,9};				//7-Red indicator
							//8-Blue indicator
							//9-Green indicator

dataIn[]={10,11,12,13,14};	//10-Apogee signal from Telemetry
							//11-Input signal from unknown source 
							//12-Full Clamp Confirmation Sensor [Active LOW]
							//13-Full Release Confirmation Sensor [Active LOW]
							//14-Rotation Confirmation sensor

dataOut[]={15,16}			//Error data- 15 set to HIGH: Failure to fully close
							//			  16 set to HIGH: Failure to fully open
							//		 15 & 16 set to High: Seporation Successful (because sometimes two wrongs do make a right)


uint8_t red=LED[0];				//
uint8_t blue=LED[1];			//assign LED color variables
uint8_t green=LED[2];			//


//////////////////////////////Function Prototyping//////////////////////////////
void standby(uint8_t check);
void clamp(uint16_t speed, uint8_t coilAlt);
void deploy(uint16_t speed, uint8_t coilAlt);




//////////////////////////////Function Mainline//////////////////////////////

void setup()
{
	
	//Set mode for all pins
	for(uint8_t i=0;i<5;i++)
	{
		pinMode(dataIn[i],INPUT);
		if(i<3)
		{
			pinMode(mHigh[i],OUTPUT);
			pinMode(mLow[i],OUTPUT);
			pinMode(LED[i],OUTPUT);
			if(i<2)
			{
				pinMode(dataOut[i],OUTPUT);
			}
		}
	}
	
	//Run standby loop and wait for interupt
	standby(dataIn[1]);
}






/*===================================================================
Function: 		standby(...)
Purpose: 		Waiting cycle to poll for inputs

data I/O:
INPUT:
	uint8_t check-			Pin to check for when to exit standby
	uint8_t flightReady-	Set to run status checks when on launch tower and in flight
	
description:

Runs a loop that turns the blue LED off and on. 
If the Clamp is not fully closed, the Red LED is
solid on and error 1 is sent to the flight computer
===================================================================*/
void standby(uint8_t check, uint8_t flightReady)
{
	const uint16_t STANDBY_BLINK = 200;									
	uint16_t flash=STANDBY_BLINK*4;	
	
	if(flightReady)
	{
		digitalWrite(green,HIGH);
	}
	while(digitalRead(check)==LOW)
	{
		if(flightReady)
		{
			if(dataIn[2])
			{
				digitalWrite(red,HIGH);
				digitalWrite(green,LOW);
				digitalWrite(dataOut[0],HIGH);
			}
		}
		if(flash==STANDBY_BLINK)
		{
			digitalWrite(blue,HIGH);
		}
		else if(flash==0)
		{
			flash=STANDBY_BLINK*4;
			digitalWrite(blue,LOW);
		}
		else if(digitalRead(dataIn[2])==HIGH)
		{
			digitalWrite(dataOut[1],HIGH);
		}
		flash--;
	}
	digitalWrite(blue,LOW);
	for(uint8_t i=0; i <3; i++)
	{
		flash=STANDBY_BLINK*4;
		while(STANDBY_BLINK)
	}
}

/*===================================================================
Function: 		clamp()
Purpose: 		Clamps the seporation ring into flight position

data I/O:
Inputs:
	uint8_t speed			controles the rate at which the motor turns
	uint8_t coilAlt			Set to the first coil that will be energized when the prgram starts

description:
Coil levels (V)
A:[ 0][-1][-1][ 0][+1][+1]
B:[-1][ 0][+1][+1][ 0][-1]
C:[+1][+1][ 0][-1][-1][ 0]
Rotates motor to latch nose cone at a slow speed

control principle: 
The focus of control is on which state needs to be turned off.
When a coil number is set to activeHigh, the next coil in the
(x+1)%3 rotation is set to zero.

example:
coilAlt=1
coilAlt is set to activeHigh
coilAlt is rotated by 1 (coilAlt=2)
A:[-1]->activeLow is unchanged    ->[-1]
B:[ 0]->activeHigh is set to HIGH ->[+1]
C:[+1]->coilAlt is set to LOW     ->[ 0]

coilAlt is set to activeLow
coilAlt is rotated by 1 (coilAlt=0)
A:[-1]->coilAlt is set to LOW   ->[ 0]
B:[+1]->activeHigh is unchanged ->[+1]
C:[ 0]->activeLow is set to HIGH->[-1]


===================================================================*/

void clamp(uint8_t speed, uint8_t coilAlt)
{
	uint8_t activeHigh;
	uint8_t activeLow;
	
	digitalWrite(red,HIGH);
	
	//Set initial condition to clean up the motor position for loop
	digitalWrite(mLow[coilAlt],HIGH);
	activeLow=coilAlt;
	coilAlt=(coilAlt+1)%3;
	
	for(uint8_t i=0; i<revCyc; i++)
	{
		//Turn off current state and set up for PMW to next motor possition
		if(i%2==0)
		{
			activeHigh=coilAlt;
			coilAlt=(coilAlt+1)%3;
			digitalWrite(mHIGH[coilAlt],LOW);
		}
		else
		{
			activeLow=coilAlt;
			coilAlt=(coilAlt+1)%3;
			digitalWrite(mLow[coilAlt],LOW);
		}
		
		//Run PMW to turn motor to next possition.
		for(uint16_t wait=speed; wait>=0;wait--)
		{
			if(wait%10=0)
			{
				digitalWrite(mHigh[activeHigh],HIGH);
				digitalWrite(mLow[activeLow],HIGH);
			}
			else
			{
				digitalWrite(mHigh[activeHigh],LOW);
				digitalWrite(mLow[activeLow],LOW);
			}
		}
	}
	digitalWrite(red,LOW);
}

/*===================================================================
Function: 		deploy()
Purpose: 		Releases clamp at apogy signal from telemetry

data I/O:
Inputs:
	uint8_t speed			controles the rate at which the motor turns
	uint8_t coilAlt			Set to the first coil that will be energized when the prgram starts

description:

Coil levels (V)
A:[ 0][+1][+1][ 0][-1][-1]
B:[-1][-1][ 0][+1][+1][ 0]
C:[+1][ 0][-1][-1][ 0][+1]
Releases clamp as quickly as possible

control principle:
See control principle for clamp()
the difference is coilAlt's rotation is set to (coilAlt+2)%3
===================================================================*/

void deploy(uint8_t speed, uint8_t coilAlt)
{	
	uint8_t activeHigh;
	uint8_t activeLow;
	
	digitalWrite(red,HIGH);
	
	digitalWrite(mHigh[coilAlt],HIGH);
	activeHigh=coilAlt;
	coilAlt=(coilAlt+2)%3;
	
	for(uint8_t i=0; i<revCyc; i++)
	{
		if(i%2==0)
		{
			activeHigh=coilAlt;
			coilAlt=(coilAlt+2)%3;
			digitalWrite(mHIGH[coilAlt],LOW);
		}
		else
		{
			activeLow=coilAlt;
			coilAlt=(coilAlt+2)%3;
			digitalWrite(mLow[coilAlt],LOW);
		}
		for(uint16_t wait=speed; wait>=0;wait--)
		{
			digitalWrite(mHigh[activeHigh],HIGH);
			digitalWrite(mLow[activeLow],HIGH);
		}
	}
}