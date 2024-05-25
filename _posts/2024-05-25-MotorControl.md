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
![](https://components101.com/sites/default/files/component_pin/7805-Voltage-Regulator-Pinout.png)

### LM7805

---
## Motor Driver IC

### H-bridge Motor driving circuit (橋式直流馬達驅動電路)
![](https://qph.cf2.quoracdn.net/main-qimg-8037a6e7ae95016e9fa3cc8e8bdcdb46-pjlq)

<iframe width="614" height="346" src="https://www.youtube.com/embed/wgIVZ--Jew4" title="Interfacing DC Motors with 8051" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

---
### DRV8833
**Pin Out**
![](https://simple-circuit.com/wp-content/uploads/2023/04/drv8833-module-driver-768x787.webp)
![](https://a.pololu-files.com/picture/0J3867.600.png?e95f72106f0a07ceaea36a6337a52201)
![](https://a.pololu-files.com/picture/0J3872.600.png?be24819cfda62db228f849eec1f49b16)
**Circuit Diagram**<br>
![](https://simple-circuit.com/wp-content/uploads/2023/04/drv8833-module-circuit-schematic-altium-1024x406.png)
**Arduino connections**<br>
https://simple-circuit.com/wp-content/uploads/2023/04/arduino-drv8833-dual-motor-control-circuit-1024x454.webp

**Sample Code:**<br>
```
/**************************************************************************************
 
 * Two DC motor control using Arduino and DRV8833 dual H-bridge motor driver.
 * There are 2 potentiometers connected to the Arduino, each one control speed and
 *   direction of rotation of 1 motor.
 * This is a free software with NO WARRANTY.
 * http://simple-circuit.com/
 
/**************************************************************************************/
 
#define POT1   A0
#define POT2   A1
#define IN1    11
#define IN2    10
#define IN3    9
#define IN4    3
 
// the setup function runs once when you press reset or power the board
void setup() {
  // make all motor control pins low
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  // configure all motor control pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}
 
// main loop function
void loop() {
 
  int16_t mot1 = analogRead(POT1) / 2;   // read analog voltage from POT 1
  int16_t mot2 = analogRead(POT2) / 2;   // read analog voltage from POT 2
  
  // motor 1 control
  if( mot1 > 255) {
    mot1 = mot1 - 256;
    analogWrite(IN1, mot1);
    digitalWrite(IN2, LOW);
  }
  else {
    mot1 = 255 - mot1;
    analogWrite(IN2, mot1);
    digitalWrite(IN1, LOW);
  }
  // motor 2 control
  if( mot2 > 255) {
    mot2 = mot2 - 256;
    analogWrite(IN3, mot2);
    digitalWrite(IN4, LOW);
  }
  else {
    mot2 = 255 - mot2;
    analogWrite(IN4, mot2);
    digitalWrite(IN3, LOW);
  }
 
  delay(500);    // wait half a second
 
}
```

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


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*
