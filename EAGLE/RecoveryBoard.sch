<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="9.4.2">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="2" name="Route2" color="16" fill="1" visible="no" active="no"/>
<layer number="3" name="Route3" color="17" fill="1" visible="no" active="no"/>
<layer number="4" name="Route4" color="18" fill="1" visible="no" active="no"/>
<layer number="5" name="Route5" color="19" fill="1" visible="no" active="no"/>
<layer number="6" name="Route6" color="25" fill="1" visible="no" active="no"/>
<layer number="7" name="Route7" color="26" fill="1" visible="no" active="no"/>
<layer number="8" name="Route8" color="27" fill="1" visible="no" active="no"/>
<layer number="9" name="Route9" color="28" fill="1" visible="no" active="no"/>
<layer number="10" name="Route10" color="29" fill="1" visible="no" active="no"/>
<layer number="11" name="Route11" color="30" fill="1" visible="no" active="no"/>
<layer number="12" name="Route12" color="20" fill="1" visible="no" active="no"/>
<layer number="13" name="Route13" color="21" fill="1" visible="no" active="no"/>
<layer number="14" name="Route14" color="22" fill="1" visible="no" active="no"/>
<layer number="15" name="Route15" color="23" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
<layer number="99" name="SpiceOrder" color="7" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="STM32F0">
<packages>
<package name="UFQFPN32-5X5MM">
<smd name="1" x="-2.35" y="1.750440625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="2" x="-2.35" y="1.250315625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="3" x="-2.35" y="0.7501875" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="4" x="-2.35" y="0.2500625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="5" x="-2.35" y="-0.2500625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="6" x="-2.35" y="-0.7501875" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="7" x="-2.35" y="-1.250315625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="8" x="-2.35" y="-1.750440625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="9" x="-1.750440625" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="10" x="-1.250315625" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="11" x="-0.7501875" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="12" x="-0.2500625" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="13" x="0.2500625" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="14" x="0.7501875" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="15" x="1.250315625" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="16" x="1.750440625" y="-2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="17" x="2.35" y="-1.750440625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="18" x="2.35" y="-1.250315625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="19" x="2.35" y="-0.7501875" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="20" x="2.35" y="-0.2500625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="21" x="2.35" y="0.2500625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="22" x="2.35" y="0.7501875" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="23" x="2.35" y="1.250315625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="24" x="2.35" y="1.750440625" dx="0.3048" dy="0.6096" layer="1" rot="R270" cream="no"/>
<smd name="25" x="1.750440625" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="26" x="1.250315625" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="27" x="0.7501875" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="28" x="0.2500625" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="29" x="-0.2500625" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="30" x="-0.7501875" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="31" x="-1.250315625" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="32" x="-1.750440625" y="2.35" dx="0.3048" dy="0.6096" layer="1" rot="R180" cream="no"/>
<smd name="33" x="0" y="0" dx="3.4544" dy="3.4544" layer="1" cream="no"/>
<wire x1="-2.9464" y1="-2.9464" x2="-2.0828" y2="-2.9464" width="0.1524" layer="21"/>
<wire x1="2.9464" y1="-2.9464" x2="2.9464" y2="-2.0828" width="0.1524" layer="21"/>
<wire x1="2.9464" y1="2.9464" x2="2.0828" y2="2.9464" width="0.1524" layer="21"/>
<wire x1="-2.9464" y1="2.9464" x2="-2.9464" y2="2.0828" width="0.1524" layer="21"/>
<wire x1="-2.9464" y1="-2.0828" x2="-2.9464" y2="-2.9464" width="0.1524" layer="21"/>
<wire x1="2.0828" y1="-2.9464" x2="2.9464" y2="-2.9464" width="0.1524" layer="21"/>
<wire x1="2.9464" y1="2.0828" x2="2.9464" y2="2.9464" width="0.1524" layer="21"/>
<wire x1="-2.0828" y1="2.9464" x2="-2.9464" y2="2.9464" width="0.1524" layer="21"/>
<polygon width="0.0254" layer="21">
<vertex x="-1.440815625" y="-2.9088"/>
<vertex x="-1.440815625" y="-3.1628"/>
<vertex x="-1.059815625" y="-3.1628"/>
<vertex x="-1.059815625" y="-2.9088"/>
</polygon>
<polygon width="0.0254" layer="21">
<vertex x="3.1628" y="-0.0595625"/>
<vertex x="3.1628" y="-0.4405625"/>
<vertex x="2.9088" y="-0.4405625"/>
<vertex x="2.9088" y="-0.0595625"/>
</polygon>
<polygon width="0.0254" layer="21">
<vertex x="-0.9406875" y="2.9088"/>
<vertex x="-0.9406875" y="3.1628"/>
<vertex x="-0.5596875" y="3.1628"/>
<vertex x="-0.5596875" y="2.9088"/>
</polygon>
<text x="-3.8608" y="1.7526" size="1.27" layer="21" ratio="6" rot="SR0">*</text>
<text x="-1.7272" y="-0.635" size="1.27" layer="21" ratio="6" rot="SR0">&gt;Value</text>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="1.902840625"/>
<vertex x="-2.6548" y="1.598040625"/>
<vertex x="-2.0452" y="1.598040625"/>
<vertex x="-2.0452" y="1.902840625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="1.402715625"/>
<vertex x="-2.6548" y="1.097915625"/>
<vertex x="-2.0452" y="1.097915625"/>
<vertex x="-2.0452" y="1.402715625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="0.9025875"/>
<vertex x="-2.6548" y="0.5977875"/>
<vertex x="-2.0452" y="0.5977875"/>
<vertex x="-2.0452" y="0.9025875"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="0.4024625"/>
<vertex x="-2.6548" y="0.0976625"/>
<vertex x="-2.0452" y="0.0976625"/>
<vertex x="-2.0452" y="0.4024625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="-0.0976625"/>
<vertex x="-2.6548" y="-0.4024625"/>
<vertex x="-2.0452" y="-0.4024625"/>
<vertex x="-2.0452" y="-0.0976625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="-0.5977875"/>
<vertex x="-2.6548" y="-0.9025875"/>
<vertex x="-2.0452" y="-0.9025875"/>
<vertex x="-2.0452" y="-0.5977875"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="-1.097915625"/>
<vertex x="-2.6548" y="-1.402715625"/>
<vertex x="-2.0452" y="-1.402715625"/>
<vertex x="-2.0452" y="-1.097915625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-2.6548" y="-1.598040625"/>
<vertex x="-2.6548" y="-1.902840625"/>
<vertex x="-2.0452" y="-1.902840625"/>
<vertex x="-2.0452" y="-1.598040625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-1.902840625" y="-2.0452"/>
<vertex x="-1.902840625" y="-2.6548"/>
<vertex x="-1.598040625" y="-2.6548"/>
<vertex x="-1.598040625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-1.402715625" y="-2.0452"/>
<vertex x="-1.402715625" y="-2.6548"/>
<vertex x="-1.097915625" y="-2.6548"/>
<vertex x="-1.097915625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-0.9025875" y="-2.0452"/>
<vertex x="-0.9025875" y="-2.6548"/>
<vertex x="-0.5977875" y="-2.6548"/>
<vertex x="-0.5977875" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-0.4024625" y="-2.0452"/>
<vertex x="-0.4024625" y="-2.6548"/>
<vertex x="-0.0976625" y="-2.6548"/>
<vertex x="-0.0976625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="0.0976625" y="-2.0452"/>
<vertex x="0.0976625" y="-2.6548"/>
<vertex x="0.4024625" y="-2.6548"/>
<vertex x="0.4024625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="0.5977875" y="-2.0452"/>
<vertex x="0.5977875" y="-2.6548"/>
<vertex x="0.9025875" y="-2.6548"/>
<vertex x="0.9025875" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="1.097915625" y="-2.0452"/>
<vertex x="1.097915625" y="-2.6548"/>
<vertex x="1.402715625" y="-2.6548"/>
<vertex x="1.402715625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="1.598040625" y="-2.0452"/>
<vertex x="1.598040625" y="-2.6548"/>
<vertex x="1.902840625" y="-2.6548"/>
<vertex x="1.902840625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="-1.598040625"/>
<vertex x="2.0452" y="-1.902840625"/>
<vertex x="2.6548" y="-1.902840625"/>
<vertex x="2.6548" y="-1.598040625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="-1.097915625"/>
<vertex x="2.0452" y="-1.402715625"/>
<vertex x="2.6548" y="-1.402715625"/>
<vertex x="2.6548" y="-1.097915625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="-0.5977875"/>
<vertex x="2.0452" y="-0.9025875"/>
<vertex x="2.6548" y="-0.9025875"/>
<vertex x="2.6548" y="-0.5977875"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="-0.0976625"/>
<vertex x="2.0452" y="-0.4024625"/>
<vertex x="2.6548" y="-0.4024625"/>
<vertex x="2.6548" y="-0.0976625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="0.4024625"/>
<vertex x="2.0452" y="0.0976625"/>
<vertex x="2.6548" y="0.0976625"/>
<vertex x="2.6548" y="0.4024625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="0.9025875"/>
<vertex x="2.0452" y="0.5977875"/>
<vertex x="2.6548" y="0.5977875"/>
<vertex x="2.6548" y="0.9025875"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="1.402715625"/>
<vertex x="2.0452" y="1.097915625"/>
<vertex x="2.6548" y="1.097915625"/>
<vertex x="2.6548" y="1.402715625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="2.0452" y="1.902840625"/>
<vertex x="2.0452" y="1.598040625"/>
<vertex x="2.6548" y="1.598040625"/>
<vertex x="2.6548" y="1.902840625"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="1.598040625" y="2.6548"/>
<vertex x="1.598040625" y="2.0452"/>
<vertex x="1.902840625" y="2.0452"/>
<vertex x="1.902840625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="1.097915625" y="2.6548"/>
<vertex x="1.097915625" y="2.0452"/>
<vertex x="1.402715625" y="2.0452"/>
<vertex x="1.402715625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="0.5977875" y="2.6548"/>
<vertex x="0.5977875" y="2.0452"/>
<vertex x="0.9025875" y="2.0452"/>
<vertex x="0.9025875" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="0.0976625" y="2.6548"/>
<vertex x="0.0976625" y="2.0452"/>
<vertex x="0.4024625" y="2.0452"/>
<vertex x="0.4024625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-0.4024625" y="2.6548"/>
<vertex x="-0.4024625" y="2.0452"/>
<vertex x="-0.0976625" y="2.0452"/>
<vertex x="-0.0976625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-0.9025875" y="2.6548"/>
<vertex x="-0.9025875" y="2.0452"/>
<vertex x="-0.5977875" y="2.0452"/>
<vertex x="-0.5977875" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-1.402715625" y="2.6548"/>
<vertex x="-1.402715625" y="2.0452"/>
<vertex x="-1.097915625" y="2.0452"/>
<vertex x="-1.097915625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-1.902840625" y="2.6548"/>
<vertex x="-1.902840625" y="2.0452"/>
<vertex x="-1.598040625" y="2.0452"/>
<vertex x="-1.598040625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-1.6272" y="1.6272"/>
<vertex x="-1.6272" y="0.1"/>
<vertex x="-0.1" y="0.1"/>
<vertex x="-0.1" y="1.6272"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="-1.6272" y="-0.1"/>
<vertex x="-1.6272" y="-1.6272"/>
<vertex x="-0.1" y="-1.6272"/>
<vertex x="-0.1" y="-0.1"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="0.1" y="1.6272"/>
<vertex x="0.1" y="0.1"/>
<vertex x="1.6272" y="0.1"/>
<vertex x="1.6272" y="1.6272"/>
</polygon>
<polygon width="0.0254" layer="31">
<vertex x="0.1" y="-0.1"/>
<vertex x="0.1" y="-1.6272"/>
<vertex x="1.6272" y="-1.6272"/>
<vertex x="1.6272" y="-0.1"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="1.902840625"/>
<vertex x="-2.6548" y="1.598040625"/>
<vertex x="-2.0452" y="1.598040625"/>
<vertex x="-2.0452" y="1.902840625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="1.402715625"/>
<vertex x="-2.6548" y="1.097915625"/>
<vertex x="-2.0452" y="1.097915625"/>
<vertex x="-2.0452" y="1.402715625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="0.9025875"/>
<vertex x="-2.6548" y="0.5977875"/>
<vertex x="-2.0452" y="0.5977875"/>
<vertex x="-2.0452" y="0.9025875"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="0.4024625"/>
<vertex x="-2.6548" y="0.0976625"/>
<vertex x="-2.0452" y="0.0976625"/>
<vertex x="-2.0452" y="0.4024625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="-0.0976625"/>
<vertex x="-2.6548" y="-0.4024625"/>
<vertex x="-2.0452" y="-0.4024625"/>
<vertex x="-2.0452" y="-0.0976625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="-0.5977875"/>
<vertex x="-2.6548" y="-0.9025875"/>
<vertex x="-2.0452" y="-0.9025875"/>
<vertex x="-2.0452" y="-0.5977875"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="-1.097915625"/>
<vertex x="-2.6548" y="-1.402715625"/>
<vertex x="-2.0452" y="-1.402715625"/>
<vertex x="-2.0452" y="-1.097915625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-2.6548" y="-1.598040625"/>
<vertex x="-2.6548" y="-1.902840625"/>
<vertex x="-2.0452" y="-1.902840625"/>
<vertex x="-2.0452" y="-1.598040625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-1.902840625" y="-2.0452"/>
<vertex x="-1.902840625" y="-2.6548"/>
<vertex x="-1.598040625" y="-2.6548"/>
<vertex x="-1.598040625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-1.402715625" y="-2.0452"/>
<vertex x="-1.402715625" y="-2.6548"/>
<vertex x="-1.097915625" y="-2.6548"/>
<vertex x="-1.097915625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-0.9025875" y="-2.0452"/>
<vertex x="-0.9025875" y="-2.6548"/>
<vertex x="-0.5977875" y="-2.6548"/>
<vertex x="-0.5977875" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-0.4024625" y="-2.0452"/>
<vertex x="-0.4024625" y="-2.6548"/>
<vertex x="-0.0976625" y="-2.6548"/>
<vertex x="-0.0976625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="0.0976625" y="-2.0452"/>
<vertex x="0.0976625" y="-2.6548"/>
<vertex x="0.4024625" y="-2.6548"/>
<vertex x="0.4024625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="0.5977875" y="-2.0452"/>
<vertex x="0.5977875" y="-2.6548"/>
<vertex x="0.9025875" y="-2.6548"/>
<vertex x="0.9025875" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="1.097915625" y="-2.0452"/>
<vertex x="1.097915625" y="-2.6548"/>
<vertex x="1.402715625" y="-2.6548"/>
<vertex x="1.402715625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="1.598040625" y="-2.0452"/>
<vertex x="1.598040625" y="-2.6548"/>
<vertex x="1.902840625" y="-2.6548"/>
<vertex x="1.902840625" y="-2.0452"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="-1.598040625"/>
<vertex x="2.0452" y="-1.902840625"/>
<vertex x="2.6548" y="-1.902840625"/>
<vertex x="2.6548" y="-1.598040625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="-1.097915625"/>
<vertex x="2.0452" y="-1.402715625"/>
<vertex x="2.6548" y="-1.402715625"/>
<vertex x="2.6548" y="-1.097915625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="-0.5977875"/>
<vertex x="2.0452" y="-0.9025875"/>
<vertex x="2.6548" y="-0.9025875"/>
<vertex x="2.6548" y="-0.5977875"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="-0.0976625"/>
<vertex x="2.0452" y="-0.4024625"/>
<vertex x="2.6548" y="-0.4024625"/>
<vertex x="2.6548" y="-0.0976625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="0.4024625"/>
<vertex x="2.0452" y="0.0976625"/>
<vertex x="2.6548" y="0.0976625"/>
<vertex x="2.6548" y="0.4024625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="0.9025875"/>
<vertex x="2.0452" y="0.5977875"/>
<vertex x="2.6548" y="0.5977875"/>
<vertex x="2.6548" y="0.9025875"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="1.402715625"/>
<vertex x="2.0452" y="1.097915625"/>
<vertex x="2.6548" y="1.097915625"/>
<vertex x="2.6548" y="1.402715625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="2.0452" y="1.902840625"/>
<vertex x="2.0452" y="1.598040625"/>
<vertex x="2.6548" y="1.598040625"/>
<vertex x="2.6548" y="1.902840625"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="1.598040625" y="2.6548"/>
<vertex x="1.598040625" y="2.0452"/>
<vertex x="1.902840625" y="2.0452"/>
<vertex x="1.902840625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="1.097915625" y="2.6548"/>
<vertex x="1.097915625" y="2.0452"/>
<vertex x="1.402715625" y="2.0452"/>
<vertex x="1.402715625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="0.5977875" y="2.6548"/>
<vertex x="0.5977875" y="2.0452"/>
<vertex x="0.9025875" y="2.0452"/>
<vertex x="0.9025875" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="0.0976625" y="2.6548"/>
<vertex x="0.0976625" y="2.0452"/>
<vertex x="0.4024625" y="2.0452"/>
<vertex x="0.4024625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-0.4024625" y="2.6548"/>
<vertex x="-0.4024625" y="2.0452"/>
<vertex x="-0.0976625" y="2.0452"/>
<vertex x="-0.0976625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-0.9025875" y="2.6548"/>
<vertex x="-0.9025875" y="2.0452"/>
<vertex x="-0.5977875" y="2.0452"/>
<vertex x="-0.5977875" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-1.402715625" y="2.6548"/>
<vertex x="-1.402715625" y="2.0452"/>
<vertex x="-1.097915625" y="2.0452"/>
<vertex x="-1.097915625" y="2.6548"/>
</polygon>
<polygon width="0.0254" layer="29">
<vertex x="-1.902840625" y="2.6548"/>
<vertex x="-1.902840625" y="2.0452"/>
<vertex x="-1.598040625" y="2.0452"/>
<vertex x="-1.598040625" y="2.6548"/>
</polygon>
<wire x1="-2.54" y1="1.27" x2="-1.27" y2="2.54" width="0.1524" layer="51"/>
<wire x1="-2.54" y1="-2.54" x2="2.54" y2="-2.54" width="0.1524" layer="51"/>
<wire x1="2.54" y1="-2.54" x2="2.54" y2="2.54" width="0.1524" layer="51"/>
<wire x1="2.54" y1="2.54" x2="-2.54" y2="2.54" width="0.1524" layer="51"/>
<wire x1="-2.54" y1="2.54" x2="-2.54" y2="-2.54" width="0.1524" layer="51"/>
<text x="-2.3622" y="1.3716" size="1.27" layer="51" ratio="6" rot="SR0">*</text>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
</package>
</packages>
<symbols>
<symbol name="STM32F042KXU_1">
<pin name="PA0" x="2.54" y="0" length="middle"/>
<pin name="PA1" x="2.54" y="-2.54" length="middle"/>
<pin name="PA2" x="2.54" y="-5.08" length="middle"/>
<pin name="PA3" x="2.54" y="-7.62" length="middle"/>
<pin name="PA4" x="2.54" y="-10.16" length="middle"/>
<pin name="PA5" x="2.54" y="-12.7" length="middle"/>
<pin name="PA6" x="2.54" y="-15.24" length="middle"/>
<pin name="PA7" x="2.54" y="-17.78" length="middle"/>
<pin name="PA8" x="2.54" y="-20.32" length="middle"/>
<pin name="PA9" x="2.54" y="-22.86" length="middle"/>
<pin name="PA10" x="2.54" y="-25.4" length="middle"/>
<pin name="PA11" x="2.54" y="-27.94" length="middle"/>
<pin name="PA12" x="2.54" y="-30.48" length="middle"/>
<pin name="PA13" x="2.54" y="-33.02" length="middle"/>
<pin name="PA14" x="2.54" y="-35.56" length="middle"/>
<pin name="PA15" x="2.54" y="-38.1" length="middle"/>
<pin name="PB0" x="63.5" y="0" length="middle" rot="R180"/>
<pin name="PB1" x="63.5" y="-2.54" length="middle" rot="R180"/>
<pin name="PB2" x="63.5" y="-5.08" length="middle" rot="R180"/>
<pin name="PB3" x="63.5" y="-7.62" length="middle" rot="R180"/>
<pin name="PB4" x="63.5" y="-10.16" length="middle" rot="R180"/>
<pin name="PB5" x="63.5" y="-12.7" length="middle" rot="R180"/>
<pin name="PB6" x="63.5" y="-15.24" length="middle" rot="R180"/>
<pin name="PB7" x="63.5" y="-17.78" length="middle" rot="R180"/>
<pin name="PB8" x="63.5" y="-20.32" length="middle" rot="R180"/>
<pin name="PF0-OSC_IN" x="63.5" y="-25.4" length="middle" rot="R180"/>
<pin name="PF1-OSC_OUT" x="63.5" y="-27.94" length="middle" rot="R180"/>
<pin name="PF11-BOOT0" x="63.5" y="-30.48" length="middle" rot="R180"/>
<pin name="NRST" x="63.5" y="-35.56" length="middle" rot="R180"/>
<wire x1="7.112" y1="0" x2="6.0452" y2="0.508" width="0.1524" layer="94"/>
<wire x1="7.112" y1="0" x2="6.0452" y2="-0.508" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="0.508" x2="4.4958" y2="0" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-0.508" x2="4.4958" y2="0" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-2.54" x2="6.0452" y2="-2.032" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-2.54" x2="6.0452" y2="-3.048" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-2.032" x2="4.4958" y2="-2.54" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-3.048" x2="4.4958" y2="-2.54" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-5.08" x2="6.0452" y2="-4.572" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-5.08" x2="6.0452" y2="-5.588" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-4.572" x2="4.4958" y2="-5.08" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-5.588" x2="4.4958" y2="-5.08" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-7.62" x2="6.0452" y2="-7.112" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-7.62" x2="6.0452" y2="-8.128" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-7.112" x2="4.4958" y2="-7.62" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-8.128" x2="4.4958" y2="-7.62" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-10.16" x2="6.0452" y2="-9.652" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-10.16" x2="6.0452" y2="-10.668" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-9.652" x2="4.4958" y2="-10.16" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-10.668" x2="4.4958" y2="-10.16" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-12.7" x2="6.0452" y2="-12.192" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-12.7" x2="6.0452" y2="-13.208" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-12.192" x2="4.4958" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-13.208" x2="4.4958" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-15.24" x2="6.0452" y2="-14.732" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-15.24" x2="6.0452" y2="-15.748" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-14.732" x2="4.4958" y2="-15.24" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-15.748" x2="4.4958" y2="-15.24" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-17.78" x2="6.0452" y2="-17.272" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-17.78" x2="6.0452" y2="-18.288" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-17.272" x2="4.4958" y2="-17.78" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-18.288" x2="4.4958" y2="-17.78" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-20.32" x2="6.0452" y2="-19.812" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-20.32" x2="6.0452" y2="-20.828" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-19.812" x2="4.4958" y2="-20.32" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-20.828" x2="4.4958" y2="-20.32" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-22.86" x2="6.0452" y2="-22.352" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-22.86" x2="6.0452" y2="-23.368" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-22.352" x2="4.4958" y2="-22.86" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-23.368" x2="4.4958" y2="-22.86" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-25.4" x2="6.0452" y2="-24.892" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-25.4" x2="6.0452" y2="-25.908" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-24.892" x2="4.4958" y2="-25.4" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-25.908" x2="4.4958" y2="-25.4" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-27.94" x2="6.0452" y2="-27.432" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-27.94" x2="6.0452" y2="-28.448" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-27.432" x2="4.4958" y2="-27.94" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-28.448" x2="4.4958" y2="-27.94" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-30.48" x2="6.0452" y2="-29.972" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-30.48" x2="6.0452" y2="-30.988" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-29.972" x2="4.4958" y2="-30.48" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-30.988" x2="4.4958" y2="-30.48" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-33.02" x2="6.0452" y2="-32.512" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-33.02" x2="6.0452" y2="-33.528" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-32.512" x2="4.4958" y2="-33.02" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-33.528" x2="4.4958" y2="-33.02" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-35.56" x2="6.0452" y2="-35.052" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-35.56" x2="6.0452" y2="-36.068" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-35.052" x2="4.4958" y2="-35.56" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-36.068" x2="4.4958" y2="-35.56" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-38.1" x2="6.0452" y2="-37.592" width="0.1524" layer="94"/>
<wire x1="7.112" y1="-38.1" x2="6.0452" y2="-38.608" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-37.592" x2="4.4958" y2="-38.1" width="0.1524" layer="94"/>
<wire x1="5.5372" y1="-38.608" x2="4.4958" y2="-38.1" width="0.1524" layer="94"/>
<wire x1="58.928" y1="0" x2="59.9948" y2="0.508" width="0.1524" layer="94"/>
<wire x1="58.928" y1="0" x2="59.9948" y2="-0.508" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="0.508" x2="61.5442" y2="0" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-0.508" x2="61.5442" y2="0" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-2.54" x2="59.9948" y2="-2.032" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-2.54" x2="59.9948" y2="-3.048" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-2.032" x2="61.5442" y2="-2.54" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-3.048" x2="61.5442" y2="-2.54" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-5.08" x2="59.9948" y2="-4.572" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-5.08" x2="59.9948" y2="-5.588" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-4.572" x2="61.5442" y2="-5.08" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-5.588" x2="61.5442" y2="-5.08" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-7.62" x2="59.9948" y2="-7.112" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-7.62" x2="59.9948" y2="-8.128" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-7.112" x2="61.5442" y2="-7.62" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-8.128" x2="61.5442" y2="-7.62" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-10.16" x2="59.9948" y2="-9.652" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-10.16" x2="59.9948" y2="-10.668" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-9.652" x2="61.5442" y2="-10.16" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-10.668" x2="61.5442" y2="-10.16" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-12.7" x2="59.9948" y2="-12.192" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-12.7" x2="59.9948" y2="-13.208" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-12.192" x2="61.5442" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-13.208" x2="61.5442" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-15.24" x2="59.9948" y2="-14.732" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-15.24" x2="59.9948" y2="-15.748" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-14.732" x2="61.5442" y2="-15.24" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-15.748" x2="61.5442" y2="-15.24" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-17.78" x2="59.9948" y2="-17.272" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-17.78" x2="59.9948" y2="-18.288" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-17.272" x2="61.5442" y2="-17.78" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-18.288" x2="61.5442" y2="-17.78" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-20.32" x2="59.9948" y2="-19.812" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-20.32" x2="59.9948" y2="-20.828" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-19.812" x2="61.5442" y2="-20.32" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-20.828" x2="61.5442" y2="-20.32" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-25.4" x2="59.9948" y2="-24.892" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-25.4" x2="59.9948" y2="-25.908" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-24.892" x2="61.5442" y2="-25.4" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-25.908" x2="61.5442" y2="-25.4" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-27.94" x2="59.9948" y2="-27.432" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-27.94" x2="59.9948" y2="-28.448" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-27.432" x2="61.5442" y2="-27.94" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-28.448" x2="61.5442" y2="-27.94" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-30.48" x2="59.9948" y2="-29.972" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-30.48" x2="59.9948" y2="-30.988" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-29.972" x2="61.5442" y2="-30.48" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-30.988" x2="61.5442" y2="-30.48" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-35.56" x2="59.9948" y2="-35.052" width="0.1524" layer="94"/>
<wire x1="58.928" y1="-35.56" x2="59.9948" y2="-36.068" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-35.052" x2="61.5442" y2="-35.56" width="0.1524" layer="94"/>
<wire x1="60.5028" y1="-36.068" x2="61.5442" y2="-35.56" width="0.1524" layer="94"/>
<wire x1="7.62" y1="5.08" x2="7.62" y2="-43.18" width="0.1524" layer="94"/>
<wire x1="7.62" y1="-43.18" x2="58.42" y2="-43.18" width="0.1524" layer="94"/>
<wire x1="58.42" y1="-43.18" x2="58.42" y2="5.08" width="0.1524" layer="94"/>
<wire x1="58.42" y1="5.08" x2="7.62" y2="5.08" width="0.1524" layer="94"/>
<text x="28.2956" y="9.1186" size="2.0828" layer="95" ratio="6" rot="SR0">&gt;Name</text>
<text x="27.6606" y="6.5786" size="2.0828" layer="96" ratio="6" rot="SR0">&gt;Value</text>
</symbol>
<symbol name="STM32F042KXU">
<pin name="EPAD" x="2.54" y="0" length="middle" direction="pas"/>
<pin name="VDD" x="43.18" y="0" length="middle" direction="pwr" rot="R180"/>
<pin name="VDDA" x="43.18" y="-5.08" length="middle" direction="pwr" rot="R180"/>
<pin name="VDDIO2" x="43.18" y="-10.16" length="middle" direction="pwr" rot="R180"/>
<wire x1="7.62" y1="5.08" x2="7.62" y2="-15.24" width="0.1524" layer="94"/>
<wire x1="7.62" y1="-15.24" x2="38.1" y2="-15.24" width="0.1524" layer="94"/>
<wire x1="38.1" y1="-15.24" x2="38.1" y2="5.08" width="0.1524" layer="94"/>
<wire x1="38.1" y1="5.08" x2="7.62" y2="5.08" width="0.1524" layer="94"/>
<text x="18.1356" y="9.1186" size="2.0828" layer="95" ratio="6" rot="SR0">&gt;Name</text>
<text x="17.5006" y="6.5786" size="2.0828" layer="96" ratio="6" rot="SR0">&gt;Value</text>
</symbol>
</symbols>
<devicesets>
<deviceset name="STM32F042KXU" prefix="U">
<gates>
<gate name="A" symbol="STM32F042KXU_1" x="0" y="0"/>
<gate name="B" symbol="STM32F042KXU" x="79.756" y="0"/>
</gates>
<devices>
<device name="" package="UFQFPN32-5X5MM">
<connects>
<connect gate="A" pin="NRST" pad="4"/>
<connect gate="A" pin="PA0" pad="6"/>
<connect gate="A" pin="PA1" pad="7"/>
<connect gate="A" pin="PA10" pad="20"/>
<connect gate="A" pin="PA11" pad="21"/>
<connect gate="A" pin="PA12" pad="22"/>
<connect gate="A" pin="PA13" pad="23"/>
<connect gate="A" pin="PA14" pad="24"/>
<connect gate="A" pin="PA15" pad="25"/>
<connect gate="A" pin="PA2" pad="8"/>
<connect gate="A" pin="PA3" pad="9"/>
<connect gate="A" pin="PA4" pad="10"/>
<connect gate="A" pin="PA5" pad="11"/>
<connect gate="A" pin="PA6" pad="12"/>
<connect gate="A" pin="PA7" pad="13"/>
<connect gate="A" pin="PA8" pad="18"/>
<connect gate="A" pin="PA9" pad="19"/>
<connect gate="A" pin="PB0" pad="14"/>
<connect gate="A" pin="PB1" pad="15"/>
<connect gate="A" pin="PB2" pad="16"/>
<connect gate="A" pin="PB3" pad="26"/>
<connect gate="A" pin="PB4" pad="27"/>
<connect gate="A" pin="PB5" pad="28"/>
<connect gate="A" pin="PB6" pad="29"/>
<connect gate="A" pin="PB7" pad="30"/>
<connect gate="A" pin="PB8" pad="32"/>
<connect gate="A" pin="PF0-OSC_IN" pad="2"/>
<connect gate="A" pin="PF1-OSC_OUT" pad="3"/>
<connect gate="A" pin="PF11-BOOT0" pad="31"/>
<connect gate="B" pin="EPAD" pad="33"/>
<connect gate="B" pin="VDD" pad="1"/>
<connect gate="B" pin="VDDA" pad="5"/>
<connect gate="B" pin="VDDIO2" pad="17"/>
</connects>
<technologies>
<technology name="">
<attribute name="COPYRIGHT" value="Copyright (C) 2016 Accelerated Designs. All rights reserved" constant="no"/>
<attribute name="MANUFACTURER_PART_NUMBER" value="STM32F042KXU" constant="no"/>
<attribute name="VENDOR" value="STMicroelectronics" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="U1" library="STM32F0" deviceset="STM32F042KXU" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U1" gate="A" x="0" y="0" smashed="yes">
<attribute name="NAME" x="28.2956" y="9.1186" size="2.0828" layer="95" ratio="6" rot="SR0"/>
<attribute name="VALUE" x="27.6606" y="6.5786" size="2.0828" layer="96" ratio="6" rot="SR0"/>
</instance>
<instance part="U1" gate="B" x="91.44" y="0" smashed="yes">
<attribute name="NAME" x="109.5756" y="9.1186" size="2.0828" layer="95" ratio="6" rot="SR0"/>
<attribute name="VALUE" x="108.9406" y="6.5786" size="2.0828" layer="96" ratio="6" rot="SR0"/>
</instance>
</instances>
<busses>
</busses>
<nets>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
