---
layout: post
title: Edge Computing & AIoT MCU Capstone Projects
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Edge Computing & AIoT MCU 專題實作

---
## Edge-Computing & AIoT MCU : AMB82-MINI
![](https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png)
AMB82 MINI is equipped with various peripheral interfaces, including WiFi, BLE, GPIO INT, I2C, UART, SPI, PWM, ADC. <br>
AMB82 MINI has 3 key features, Audio codec, Video codec and NN (build in NPU for AIoT)<br>

**[Amebapro2 AMB82-MINI Arduino getting started](https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-getting-started/)**<br>

**[Specs](https://www.amebaiot.com/en/amebapro2/):**<br>
#### RTL8735B MCU
* 32-bit Arm v8M, up to 500MHz
#### Memory
* 768KB ROM
* 512KB RAM
* Supports MCM embedded DDR2/DDR3L memory up to 128MB
* External Flash up to 64MB
#### key features
* Integrated 802.11 a/b/g/n Wi-Fi, 2.4GHz/5GHz
* Bluetooth Low Energy (BLE) 4.2
* Integrated Intelligent Engine @ 0.4 TOPS
* Ethernet Interface
* USB Host/Device
* SD Host
* ISP
* Audio Codec
* H.264/H.265
* Secure Boot
* Crypto Engine
#### other features
* 2 SPI interfaces
* 3 I2C interfaces
* 12 PWM interfaces
* 4 UART interfaces
* 8 ADC interfaces
* 2 GDMA interfaces
* Max 59 GPIO

---
## AIoT Capstone Projects

<table>
<tr><th>Type      </th><th>Platforms         </th><th>Peripherals            </th><th>Features               </th><th>NN model      </th><th>required API</th></tr>
<tr><td>掌紋辨識  </td><td>身分識別          </td><td>palm image             </td><td>Image Classification   </td><td>CNN/MobileNet </td><td>API for CNN model</td></tr>
<tr><td>聲音互動  </td><td>4WD Stunt Car     </td><td>microphone             </td><td>Audio Classification   </td><td>Audio NN model</td><td>API for Audio Classifier</td></tr>
<tr><td>自動駕駛  </td><td>4WD Stunt Car     </td><td>Camera+MPU9250         </td><td>Object Detection       </td><td>CNN+LSTM      </td><td>API for Object (x,y)</td></tr>
<tr><td>自動駕駛  </td><td>4WD Stunt Car     </td><td>Camera+MPU9250         </td><td>Reinforcement Learning </td><td>CNN+LSTM      </td><td>RL-DQN sample code</td></tr>
<tr><td>動作偵測  </td><td>穿戴式體感偵測器  </td><td>MPU9250</td><td>Gesture/Hand-Movement Detection</td><td>CNN+LSTM</td><td>API to CNN+LSTM model</td></tr>
<tr><td>生成式AI  </td><td>穿戴式chatGPT     </td><td>mic + 1.14" colorTFT</td><td>Speech-to-Text</td><td> Text-to-Speech model  </td><td>TBD</td></tr>
<tr><td>生成式AI  </td><td>Text-to-MCU       </td><td>combined MCU outputs</td><td>Text-to-MCU   </td><td>running one of above   </td><td>TBD</td></tr>
<tr><td>

* 穿戴式chatGPT : Output Display = 1.14" color TFT, Input = Mic ?
* To-Be-Discussed: Audio capturing and sending .mp3 file to ChatGP ? Other workaround like bridging through smartphone ?

---
## Edge Computing & AIoT專題之週邊及載具

### 1.14: color TFT
![](https://gcs.rimg.com.tw/g1/f/b4/cd/22326084867277_915.jpg)

### 越野遙控車
![](https://gcs.rimg.com.tw/g4/e40/afa/jif9j8j8/f/3d/2a/22347200521514_469.jpg)

### Stunt Car
![](https://gcs.rimg.com.tw/g9/3c3/78b/ff742155456/d/4e/22139378684238_637.jpg)

### 水陸兩用 Stunt Car
![](https://gcs.rimg.com.tw/g5/cad/e0b/davidhadson493/f/43/3d/22347198425917_866.jpg)


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


