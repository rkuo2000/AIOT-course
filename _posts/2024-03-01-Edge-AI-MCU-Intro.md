---
layout: post
title: Edge-AI MCU Introduction
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to Edge-AI MCUs, MCU interfaces.

---
## Edge-AI MCU

### Realtek AMB82-mini
<p><img width="50%" height="50%" src="https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png"></p>

**[RTL8735B](https://www.amebaiot.com/en/amebapro2/)**: 
32-bit Arm v8M, up to 500MHz, 768KB ROM, 512KB RAM, 16MB Flash (MCM embedded DDR2/DDR3L up to 128MB)<br>
802.11 a/b/g/n WiFi 2.4GHz/5GHz, BLE 5.1, *NN Engine 0.4 TOPS*, Crypto Engine, Audo Codec, ...<br>

**[Ameba Arduino](https://www.amebaiot.com/en/ameba-arduino-summary/)**<br>

**[Amebapro2 AMB82-mini Arduino Example Guides](https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-peripherals-examples)**<br>

**[Amebapro2 AMB82-mini Arduino getting started](https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-getting-started/)**<br>

Preferences = `https://raw.githubusercontent.com/ambiot/ambpro2_arduino/dev/Arduino_package/package_realtek_amebapro2_early_index.json`<br>

---
### Nvidia Jetson
<table>
<tr>
<th>Jetson Orin NX</th><th>Jetson Nano</th>
</tr>
<tr>
<td><img src="https://gcs.rimg.com.tw/g4/265/d35/playrobot-inc/d/4b/6e/22325013064558_792.png"></td>
<td><img src="https://www.ximea.com/support/attachments/download/13045/jetson-nano_nvidia_module.jpg"></td>
</tr>
</table>

[Jetson module comparison](https://connecttech.com/jetson/jetson-module-comparison/)<br>
* Jetson Nano 4G =   0.472 TOPs
* Xavier NX 8GB  =  21 TOPs
* AGX Xavier     =  32 TOPs
* Orin NX 8GB    =  70 TOPs
* Orin NX 16GB   = 100 TOPs
* AGX Orin 32GB  = 200 TOPs
* AGX Orin 64GB  = 275 TOPs

---
### Kneron KL520
![](https://image.kneroncloud.com/product/HW2021031800000018/hardware-preview-image-1.png)
* support Framework: ONNX, Tensorflow, Keras, Caffe
* support Model: VGG16, GoogleNet, YOLO, Tiny YOLO, Lenet, MobileNet, DenseNet<br>
* memory type: LPDDR2
* NPU power efficiency : 0.55TOPS/W
* Overall power consumption : 0.5W
* Camera: EUA1200: 1080p progressive scan CMOS sensor

---
### [ESP32-S3-BOX-3](https://www.espressif.com/en/news/ESP32-S3-BOX-3)
[Unboxing ESP32-S3-BOX-3](https://youtu.be/4W3w93GQk7E?si=raFVYcfp9yoHq9GG)<br>
[Hardware Overview](https://github.com/espressif/esp-box/blob/master/docs/hardware_overview/esp32_s3_box_3/hardware_overview_for_box_3.md)<br>
<p><img width="50%" height="50%" src="https://github.com/espressif/esp-box/raw/master/docs/_static/box_3_hardware_overview/esp32_s3_box_3.png"></p>

---
## MCU Interfaces introduction

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
### I2C (Inter-Integrated Circuit bus)
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


