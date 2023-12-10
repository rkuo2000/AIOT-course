---
layout: post
title: MCU Interfaces Introduction
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduce MCU interfaces including GPIO, ADC, PWM, I2C, SPI, I2S, UART.

---
## AIoT MCU
**AIoT :** Artificial Intelligence of Things<br>
**MCU  :** Micro Control Unit (Microcontroller)<br>
**AIoT MCU** : MCU with built-in NN engine and WiFi & BT/BLE<br>

---
### ESP32
Xtensa dual-core LX6, up to 600MHz, 448KB ROM, 520KB SRAM<br>

#### NodeMCU-32S
![](https://github.com/rkuo2000/AIoT-course/blob/main/images/NodeMCU-32S_pinout.jpg?raw=true)

#### ESP32-S
<p><img src="https://mm.digikey.com/Volume0/opasdata/d220001/medias/images/774/MFG_ESP32-WROOM-32U.jpg" width="50%" height="50%"></p>

--- 
### RTL8720DN
ARMv8 CPU, WiFi dual band (2.4GHz & 5GHz), WLAN 802.11a/b/g/n, Bluetooth BL E5.0<br>
Embedded AES/DES/SHA hardware<br>
![](https://www.amebaiot.com/wp-content/uploads/2022/07/bw16_typec/P1.png)
### [Pin-out](https://www.amebaiot.com/cn/amebad-bw16-typec-arduino-getting-started/)
![](https://www.amebaiot.com/wp-content/uploads/2022/07/bw16_typec/P2.png)

---
### [RTL8735B](https://www.amebaiot.com/en/ameba-arduino-summary/)
ARMv8M up to 500MHz, 768KB ROM, 512KB RAM, 16MB Flash, 128MB DDR2/DDR3L, WiFi 2.4G/5G, BLE 5.1, 0.4 TOPS NN engine<br>
![](https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png)

---
### RPi4 (AIoT MPU)
running on Raspiberry OS, or Ubuntu 22.04, ...<br>
BCM2711 Quad-core CortexA72 @1.5GHz, 8GB LPDDR2,  2.4G/5GHz WLAN, GbitE, USB3.0x2, USB2.0x2, 2x microHDMI<br>
![](https://tw.element14.com/productimages/standard/en_GB/3051885-40.jpg)

---
## GPIO (General Purpose I/O)
![](https://github.com/rkuo2000/MCU-course/blob/main/images/GPIO_circuit_diagram.png?raw=true)

Each IO pad drive/sink **~25mA**, Entire Chip drive/sink **~200mA**<br>
![](https://github.com/rkuo2000/MCU-course/blob/main/images/GPIO_LED_circuit.png?raw=true)

![](https://i1.wp.com/randomnerdtutorials.com/wp-content/uploads/2018/10/LED_PWM_Example.jpg?w=700&quality=100&strip=all&ssl=1)

---
## ADC (Analog Digital Converter)
![](https://rockuapps.com/wp-content/uploads/2020/11/c-1-791x613.jpg)

**Vin** is input voltage for ADC to sample<br>

**Vref** is reference voltage for ADC to compare with Vin<br>

**2-bit ADC**
<table>
<tr>
<td><img src="https://www.electronics-tutorials.ws/wp-content/uploads/2020/09/comb74.gif"></td>
<td><img src="https://qph.fs.quoracdn.net/main-qimg-fa7473dd759a220592359c69ca8408a2"></td>
</tr>
</table>

**12-bit ADC** : output is a 12-bit binary code, so its value = 0 ~ 4095<br>
![](https://github.com/rkuo2000/MCU-course/blob/main/images/ADC_12bit_table.png?raw=true)

### Direct-Conversion ADC
![](https://www.maximintegrated.com/content/dam/images/design/tech-docs/634/E33Fig01.gif)

### Successive-Approximation ADC
![](https://github.com/rkuo2000/MCU-course/blob/main/images/SA_ADC_block_diagram.png?raw=true)

### Sigma-Delta ADC
![](https://github.com/rkuo2000/MCU-course/blob/main/images/Sigma-Delta_ADC_block_diagram.png?raw=true)

<img width="50%" height="50%" src="https://www.electronicwings.com/public/images/user_images/images/NodeMCU/NodeMCU%20Interfaces/NodeMCU%20Thermistor/NodeMCU_Thermistor_Interfacing_Diagram.png">
![](https://www.rfwireless-world.com/images/ESP32-Interfacing-with-Gas-Sensor.jpg)

---
## DAC (Digital to Analog Converter)
[Introduction to Digital-Analog Conversion](https://www.allaboutcircuits.com/textbook/digital/chpt-13/digital-analog-conversion/)

### Binary-Weighted Resistor DAC
![](https://www.allaboutcircuits.com/uploads/articles/inverting-summing-circuit-diagram.jpg)
![](https://www.allaboutcircuits.com/uploads/articles/6-bit-binary-weighted-DAC.jpg)

### [Sigma-Delta Digital Audio Converters (DAC)](https://www.audiosciencereview.com/forum/index.php?threads/sigma-delta-digital-audio-converters-dac.1928/)
![](https://www.audiosciencereview.com/forum/index.php?attachments/upload_2017-9-13_19-3-41-png.8688/)

Ref. [淺談 Delta-Sigma 之工作原理](https://picture.iczhiku.com/resource/eetop/WhiGYWWUksgpUBVn.pdf)

---
## PWM (Pulse Width Modulation)
![](https://github.com/rkuo2000/MCU-course/blob/main/images/PWM_functional_diagram.png?raw=true)
CMRx+1 >= CNR: PWM output high <br>
CMRx+1 <  CNR: PWM output low <br>

**PWM Frequency** = PWM_Clock/(prescale+1)*(clock divider)/(CNR+1) <br>

**Duty ratio** = (CMR+1)/(CNR+1)<br>

![](https://microcontrollerslab.com/wp-content/uploads/2019/04/Servo-motor-pinout-esp32.png)

--- 
## I2C (Inter-Integrated Circuit bus)
[I2C bus 簡介 ](https://magicjackting.pixnet.net/blog/post/173061691-i2c-bus-%E7%B0%A1%E4%BB%8B-(inter-integrated-circuit-bus)-)
<table>
<tr>
<td><img src="https://pic.pimg.tw/magicjackting/1447382351-2909185260.png"></td>
<td><img src="https://pic.pimg.tw/magicjackting/1447739085-239160220.png"></td>
</tr>
</table>
![](https://pic.pimg.tw/magicjackting/1450787341-3597609114_n.png?v=1461809344)
![](https://pic.pimg.tw/magicjackting/1461659401-258467416.png)

![](https://i1.wp.com/randomnerdtutorials.com/wp-content/uploads/2020/12/ESP32-MPU6050-Module-Accelerometer-Gyroscope-Temperature-Sensor-Arduino.jpg?resize=1024%2C576&quality=100&strip=all&ssl=1)

---
## SPI (Serial peripheral interface)
[Introduction to SPI Interface](https://www.analog.com/en/analog-dialogue/articles/introduction-to-spi-interface.html)<br>
4-wire SPI devices have four signals:<br>
* **CS**  : Chip select
* **SCLK**: SPI Clock
* **MOSI**: Master out, slave in
* **MISO**: Master in, slave out

![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_01.png?la=en&imgver=2)

**SPI Mode 0**, CPOL = 0, CPHA = 0: CLK idle state = low, data sampled on rising edge and shifted on falling edge.
![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_02.png?la=en&imgver=1)

**SPI Mode 1**, CPOL = 0, CPHA = 1: CLK idle state = low, data sampled on the falling edge and shifted on the rising edge.
![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_03.png?la=en&imgver=1)

**SPI Mode 2**, CPOL = 1, CPHA = 1: CLK idle state = high, data sampled on the falling edge and shifted on the rising edge.
![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_04.png?la=en&imgver=1)

**SPI Mode 3**, CPOL = 1, CPHA = 0: CLK idle state = high, data sampled on the rising edge and shifted on the falling edge.
![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_05.png?la=en&imgver=1)

**Multislave Configuration**
![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_06.png?la=en&imgver=2)

**Daisy-Chain Configuration**
![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_07.png?la=en&imgver=2)

![](https://alexlubbock.com/images/esp32-sd-card-wiring.jpg)
![](https://blog.jmaker.com.tw/content/images/2020/03/rfid-4.jpg)

---
## I2S (Inter-IC Sound bus)
[Introduction to the I2S Interface](https://www.allaboutcircuits.com/technical-articles/introduction-to-the-i2s-interface/)
![](https://www.allaboutcircuits.com/uploads/articles/introduction-to-the-i2s-interface_rk_aac_image1.jpg)
![](https://www.allaboutcircuits.com/uploads/articles/introduction-to-the-i2s-interface_rk_aac_image2.jpg)
![](https://diyi0t.com/wp-content/uploads/2020/08/I2S-ESP32-Play-from-Memory_Steckplatine.png)

---
## UART（Universal Asynchronous Receiver/Transmitter）序列埠
[BASICS OF UART COMMUNICATION](https://www.circuitbasics.com/basics-uart-communication/)
<img width="50%" height="50%" src="https://www.circuitbasics.com/wp-content/uploads/2016/01/Introduction-to-UART-Data-Transmission-Diagram.png">
![](https://makerpro.cc/wp-content/uploads/2019/08/2.png)

**DB9 Connector**<br>
<table>
<tr>
<td><img src="https://github.com/rkuo2000/MCU-course/blob/main/images/UART-DB9-pinout.png?raw=true"></td>
<td><img src="https://github.com/rkuo2000/MCU-course/blob/main/images/UART-DB9-signal_names.png?raw=true"></td>
</tr>
</table>

**Protocol 通訊協定**<br>
![](https://www.circuitbasics.com/wp-content/uploads/2016/01/Introduction-to-UART-Packet-Frame-and-Bits-2.png)
* Standard Packet : 8 data bits, even parity, 1 stop bit
  - If the parity bit is a 0 (even parity), the 1 bits in the data frame should total to an even number. 
  - If the parity bit is a 1 (odd parity), the 1 bits in the data frame should total to an odd number.
![](https://makerpro.cc/wp-content/uploads/2019/08/4.png)
RS232 的Vpp電壓較高，有 6V~30V；UART 則是較低的 3.3V 或 5V<br>
RS232 為負邏輯， UART 為正邏輯，因此兩者波形是反相的<br>
**Baud Rate**<br>
![](https://github.com/rkuo2000/MCU-course/blob/main/images/UART-baudrates.png?raw=true)

[The main differences between RS-232, RS-422 and RS-485](https://ipc2u.com/articles/knowledge-base/the-main-differences-between-rs-232-rs-422-and-rs-485/)
![](https://github.com/rkuo2000/MCU-course/blob/main/images/UART-RS232_RS422_RS485.png?raw=true)
![](https://ipc2u.com/upload/medialibrary/341/34187d2b0bb31eeb5b3fdfdb17745526.jpg)

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


