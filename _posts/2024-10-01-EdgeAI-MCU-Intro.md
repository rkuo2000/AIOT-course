---
layout: post
title: Edge-AI MCU Introduction
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to Edge-AI MCUs.

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

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


