---
layout: post
title: Edge AI MCU Introduction
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to Edge AI MCU ~ AMB82-MINI

---
## Edge AI MCU

### [RTL8735B](https://www.amebaiot.com/en/ameba-arduino-summary/)
ARMv8M up to 500MHz, 768KB ROM, 512KB RAM, 16MB Flash, 128MB DDR2/DDR3L, WiFi 2.4G/5G, BLE 5.1, 0.4 TOPS NN engine<br>
![](https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png)

---
### RTL8720DN
ARMv8 CPU, WiFi dual band (2.4GHz & 5GHz), WLAN 802.11a/b/g/n, Bluetooth BL E5.0<br>
Embedded AES/DES/SHA hardware<br>
![](https://www.amebaiot.com/wp-content/uploads/2022/07/bw16_typec/P1.png)
### [Pin-out](https://www.amebaiot.com/cn/amebad-bw16-typec-arduino-getting-started/)
![](https://www.amebaiot.com/wp-content/uploads/2022/07/bw16_typec/P2.png)

---
## MCU Interfaces 

### GPIO (General Purpose I/O)
![](https://github.com/rkuo2000/MCU-course/blob/main/images/GPIO_circuit_diagram.png?raw=true)

Each IO pad drive/sink **~25mA**, Entire Chip drive/sink **~200mA**<br>
![](https://github.com/rkuo2000/MCU-course/blob/main/images/GPIO_LED_circuit.png?raw=true)

---
### ADC (Analog Digital Converter)
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

---
### DAC (Digital to Analog Converter)
[Introduction to Digital-Analog Conversion](https://www.allaboutcircuits.com/textbook/digital/chpt-13/digital-analog-conversion/)

### Binary-Weighted Resistor DAC
![](https://www.allaboutcircuits.com/uploads/articles/inverting-summing-circuit-diagram.jpg)
![](https://www.allaboutcircuits.com/uploads/articles/6-bit-binary-weighted-DAC.jpg)

---
### PWM (Pulse Width Modulation)
![](https://github.com/rkuo2000/MCU-course/blob/main/images/PWM_functional_diagram.png?raw=true)
CMR >= CNR: PWM output high <br>
CMR <  CNR: PWM output low <br>

**PWM Frequency** = PWM_Clock/(prescale)*(clock divider)/ CNR <br>

**Duty ratio** = CMR /CNR<br>

![](https://microcontrollerslab.com/wp-content/uploads/2019/04/Servo-motor-pinout-esp32.png)

--- 
##% I2C (Inter-Integrated Circuit bus)
[I2C bus 簡介 ](https://magicjackting.pixnet.net/blog/post/173061691-i2c-bus-%E7%B0%A1%E4%BB%8B-(inter-integrated-circuit-bus)-)
<table>
<tr>
<td><img src="https://pic.pimg.tw/magicjackting/1447382351-2909185260.png"></td>
<td><img src="https://pic.pimg.tw/magicjackting/1447739085-239160220.png"></td>
</tr>
</table>
![](https://pic.pimg.tw/magicjackting/1450787341-3597609114_n.png?v=1461809344)
![](https://pic.pimg.tw/magicjackting/1461659401-258467416.png)

---
### SPI (Serial peripheral interface)
[Introduction to SPI Interface](https://www.analog.com/en/analog-dialogue/articles/introduction-to-spi-interface.html)<br>
4-wire SPI devices have four signals:<br>
* **CS**  : Chip select
* **SCLK**: SPI Clock
* **MOSI**: Master out, slave in
* **MISO**: Master in, slave out

![](https://www.analog.com/-/media/images/analog-dialogue/en/volume-52/number-3/articles/introduction-to-spi-interface/205973_fig_01.png?la=en&imgver=2)

---
## I2S (Inter-IC Sound bus)
[Introduction to the I2S Interface](https://www.allaboutcircuits.com/technical-articles/introduction-to-the-i2s-interface/)
![](https://www.allaboutcircuits.com/uploads/articles/introduction-to-the-i2s-interface_rk_aac_image1.jpg)
![](https://www.allaboutcircuits.com/uploads/articles/introduction-to-the-i2s-interface_rk_aac_image2.jpg)

---
## UART（Universal Asynchronous Receiver/Transmitter）序列埠
[BASICS OF UART COMMUNICATION](https://www.circuitbasics.com/basics-uart-communication/)
<img width="50%" height="50%" src="https://www.circuitbasics.com/wp-content/uploads/2016/01/Introduction-to-UART-Data-Transmission-Diagram.png">
![](https://makerpro.cc/wp-content/uploads/2019/08/2.png)

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

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


