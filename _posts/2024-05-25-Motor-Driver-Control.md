---
layout: post
title: Motor Control 
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to Motor Driver ICs, and Motor Control, PWM signals.

---
## Li-Battery

### 18650 Battery
3.7V x 11000mAh

### Li-Battery

### Battery Charger （鋰電池充電器）

---
## 5V regulator (穩壓IC)

### L7805CV (STMicro)
**Pin Out:**<br>
![](https://components101.com/sites/default/files/component_pin/7805-Voltage-Regulator-Pinout.png)

---
## Motor Driver

### H-bridge Motor driving circuit (橋式直流馬達驅動電路)
![](https://qph.cf2.quoracdn.net/main-qimg-8037a6e7ae95016e9fa3cc8e8bdcdb46-pjlq)

<iframe width="614" height="346" src="https://www.youtube.com/embed/wgIVZ--Jew4" title="Interfacing DC Motors with 8051" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

---
### L298
**Pin Out:** <br>
![](https://www.researchgate.net/publication/350053379/figure/fig3/AS:1083535511302150@1635346405547/4-motor-drive-L298-dual-H-Bridge-IC.ppm)

**Connections:** 4 GPIOs<br>
**Example Code:** [RoboCar_L298.ino](https://github.com/rkuo2000/Arduino/blob/master/examples/AMB82-MINI/RoboCar_L298/RoboCar_L298.ino)<br>
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
**Pin Out:** <br>
![](https://simple-circuit.com/wp-content/uploads/2023/04/drv8833-module-driver.webp)
**Connections:** <br>
![](https://lastminuteengineers.com/wp-content/uploads/arduino/Wiring-DRV8833-Motor-Driver-Module-to-Arduino.png)
**Example Code:** <br>

---
### [TB6612FNG](https://dronebotworkshop.com/tb6612fng-h-bridge/)

**Arduino conneciton**<br>
![](https://i0.wp.com/dronebotworkshop.com/wp-content/uploads/2019/12/TB6612FNG-Arduino-Hookup.jpeg?w=768&ssl=1)

```
/*
  TB6612FNG H-Bridge Demo
  TB6612-Demo.ino
  Demonstrates use of TB6612FNG H-Bridge Motor Controller
  Drives two DC Motors
 
  DroneBot Workshop 2019
  https://dronebotworkshop.com
*/
 
// Motor A
 
int pwmA = 5;
int in1A = 3;
int in2A = 4;
 
// Motor B
 
int pwmB = 6;
int in1B = 7;
int in2B = 8;
 
// Speed control potentiometers
 
int SpeedControl1 = A0;  
int SpeedControl2 = A1;
 
 
// Motor Speed Values - Start at zero
 
int MotorSpeed1 = 0;
int MotorSpeed2 = 0;
 
void setup()
 
{
 
  // Set all the motor control pins to outputs
 
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);
   
}
 
void loop() {
  
  // Set Motor A forward
 
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
 
 // Set Motor B forward
 
  digitalWrite(in1B, HIGH);
  digitalWrite(in2B, LOW);
  
  
  // Read potentiometers and convert to range of 0-255
  
  MotorSpeed1 = map(analogRead(SpeedControl1), 0, 1023, 0, 255);
  MotorSpeed2 = map(analogRead(SpeedControl2), 0, 1023, 0, 255);  
     
  
  // Set the motor speeds
  
  analogWrite(pwmA, MotorSpeed1);
  analogWrite(pwmB, MotorSpeed2);
  
}
```
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
