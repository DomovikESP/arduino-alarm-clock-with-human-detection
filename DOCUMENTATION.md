# Human Interface Alarm Clock

## Description
This is an Arduino project based on an alarm clock tha can detect if somebody is on bed or not, this it's possible by
a resistive sensor placed under the mattres that can detect if somebody is over the mattres or not by the difference of pressure
applied to sensor.

## Assembly
*This is the breadboard montage:*

![montage](http://i.imgur.com/ZOWIJvt.png)


*This is the schematic diagram of the HIAC:*

![schem](http://i.imgur.com/qiYQ4VD.png)



<h2>Assembly List</h2>
<table>

  <thead>
   <tr>
    <th>Label</th>
    <th>Part Type</th>
    <th>Properties</th>
    </tr>
  </thead>
  <tbody>
  <tr>
    <td>LED1</td>
    <td>Blue (470nm) LED <strong>(any visible color is good)</strong></td>
    <td class="props">color Blue (470nm); package 3 mm [THT]; leg yes</td>
</tr><tr>
    <td>Part1</td>
    <td>Arduino Uno (Rev3)</td>
    <td class="props">type Arduino UNO (Rev3)</td>
</tr><tr>
    <td>Part2</td>
    <td>Real Time Clock Module - DS1307 RTC Breakout Board</td>
    <td class="props">variant variant 1</td>
</tr><tr>
    <td>R1</td>
    <td>10kΩ Resistor</td>
    <td class="props">package THT; bands 4; resistance 10kΩ; pin spacing 400 mil; tolerance ±5%</td>
</tr><tr>
    <td>R2</td>
    <td>220Ω Resistor</td>
    <td class="props">package THT; bands 4; resistance 220Ω; pin spacing 400 mil; tolerance ±5% <strong>shock resistance</strong></td>
</tr><tr>
    <td>RESISTIVE SENSOR</td>
    <td>Basic Force Sensing Resistor (FSR)</td>
    <td class="props">sensing area diameter .5 "; package THT<strong>(You should buy the bigger area sensor that you can find).</strong></td>
</tr><tr>
    <td>SPKR1</td>
    <td>(recycled)Loudspeaker</td>
    <td class="props"></td>
</tr>
  </tbody>
</table>

## DIY Tutorial

First of all you must set up tour RTC module for configure date and time. For this task we need download a library created by my friend [Giltesa](http://giltesa.com/) from [here](http://giltesa.com/wp-content/uploads/2012/09/DS1307_DS3231_v1.4.2.zip) (check this [link](http://giltesa.com/2012/09/02/libreria-gds1307-para-rtc/) if you want download other version of the library). After you need open 'ex1_clock_configuration.ino'
