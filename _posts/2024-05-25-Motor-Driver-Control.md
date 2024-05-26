---
layout: post
title: Motor Control 
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to Motor Driver ICs, and Motor Control, PWM signals.

---
## Lithium-ion Battery
**1P = 3.7V, 2P = 7.4V, 3P = 11.1V** <br>

### 18650 cell
3.7V x 11000mAh<br>
![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT7DtHjhAJtyeQuSswh852Sccrlg0V6jWecMg&s)

### LiPO battery cell
![](https://www.ufinebattery.com/images/upload/blog-lipo-battery-cell.webp)
![](https://i0.wp.com/dronebotworkshop.com/wp-content/uploads/2022/02/lipo-batteries.jpg)

---
## 5V regulator (穩壓IC)

### L7805CV (STMicro)
**Pin Out**<br>
![](https://components101.com/sites/default/files/component_pin/7805-Voltage-Regulator-Pinout.png)

---
## Motor Driver

### H-bridge Motor driving circuit (橋式直流馬達驅動電路)
![](https://qph.cf2.quoracdn.net/main-qimg-8037a6e7ae95016e9fa3cc8e8bdcdb46-pjlq)

<iframe width="614" height="346" src="https://www.youtube.com/embed/wgIVZ--Jew4" title="Interfacing DC Motors with 8051" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

---
### L298
**Pin Out** <br>
![](https://www.researchgate.net/publication/350053379/figure/fig3/AS:1083535511302150@1635346405547/4-motor-drive-L298-dual-H-Bridge-IC.ppm)

**Connections**: 4 GPIOs<br>

**Example Code** [RoboCar_L298.ino](https://github.com/rkuo2000/Arduino/blob/master/examples/AMB82-MINI/RoboCar_L298)<br>
```
#define IN1_PIN     5 // IN1 pin 
#define IN2_PIN     6 // IN2 pin 
#define IN3_PIN     7 // IN3 pin 
#define IN4_PIN     8 // IN4 pin 

void setup()
{
    Serial.begin(115200);
    // set 4 GPIOs to OUTPUT mode
    pinMode(IN1_PIN, OUTPUT);
    pinMode(IN2_PIN, OUTPUT);
    pinMode(IN3_PIN, OUTPUT);
    pinMode(IN4_PIN, OUTPUT);
```

---
### DRV8833
**Pin Out** <br>
![](https://simple-circuit.com/wp-content/uploads/2023/04/drv8833-module-driver.webp)

**Connections** <br>
![](https://lastminuteengineers.com/wp-content/uploads/arduino/Wiring-DRV8833-Motor-Driver-Module-to-Arduino.png)

**Example Code** <br>
[RoboCar_DRV8833_GPIO.ino](https://github.com/rkuo2000/Arduino/blob/master/examples/AMB82-MINI/RoboCar_DRV8833_GPIO)<br>

[RoboCar_DRV8833_PWM.ino](https://github.com/rkuo2000/Arduino/blob/master/examples/AMB82-MINI/RoboCar_DRV8833_PWM)<br>

---
### [TB6612FNG](https://dronebotworkshop.com/tb6612fng-h-bridge/)
**Pin Out**<br>
![](https://content.instructables.com/FCN/O9VG/JHATTMWR/FCNO9VGJHATTMWR.png?auto=webp&fit=bounds&frame=1&width=512)

**Connecitons**<br>
![](https://a.pololu-files.com/picture/0J12386.1200.png?9d691fb1f78beb48f47e618655d5905a)
![](https://i0.wp.com/dronebotworkshop.com/wp-content/uploads/2019/12/TB6612FNG-Arduino-Hookup.jpeg?w=768&ssl=1)

**Example Code**<br>
[RoboCar_TB6612_PWM.ino](https://github.com/rkuo2000/Arduino/blob/master/examples/AMB82-MINI/RoboCar_TB6612_PWM)<br>

---
## Pulse Width Modulation (PWM) signals
![](https://i0.wp.com/dronebotworkshop.com/wp-content/uploads/2017/02/PWM-Diagram-1-e1504972178711.jpg)

---
## BLDC Motor Control

### [BLDC三相直流無刷有霍爾 電機控制器](https://www.ruten.com.tw/item/show?22418465348108)
![](https://a.rimg.com.tw/c1/0f4/1c6/mcm090/6/0c/22418465348108_774.jpg)

### [5~36V 350W BLDC三相直流無感無刷電機控制器 ](https://www.ruten.com.tw/item/show?21729733858230)
![](https://gcs.rimg.com.tw/g2/e/e3/b6/21729733858230_245.jpg)

### [12-60V 300W BLDC三相直流（無刷、有霍爾）馬達控制器](https://www.ruten.com.tw/item/show?22009311965592)
![](https://gcs.rimg.com.tw/g2/9/51/98/22009311965592_214.jpg)

---

<iframe width="1111" height="625" src="https://www.youtube.com/embed/gK_iLqVLAn4" title="Simple BLDC motor controller ESC circuit" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*
