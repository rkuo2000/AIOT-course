---
layout: post
title: MCU Capstone Projects
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Edge AI & AIoT ~ MCU Capstone Projects

---
## Edge AI & AIoT MCU : AMB82-MINI
AMB82 MINI is equipped with various peripheral interfaces, including WiFi, BLE, GPIO INT, I2C, UART, SPI, PWM, ADC. <br>
AMB82 MINI has 3 key features, Audio codec, Video codec and NN (build in NPU for AIoT)<br>

**[Amebapro2 AMB82-MINI Arduino getting started](https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-getting-started/)**<br>

**[Specs](https://www.amebaiot.com/en/amebapro2/):**<br>

---
## MCU Capstone Projects

<table>
<tr><th>Type    </th><th>Platforms</th><th>Peripherals   </th><th>Features              </th><th>NN model      </th><th>required API     </th></tr>
<tr><td>表情偵測</td><td>機器寵物 </td><td>Camera        </td><td>Image Classification  </td><td>CNN/MobileNet </td><td>API for CNN      </td></tr>
<tr><td>掌紋辨識</td><td>門禁系統 </td><td>Camera        </td><td>Image Classification  </td><td>CNN/MobileNet </td><td>API for CNN      </td></tr>
<tr><td>聲音互動</td><td>Stunt Car</td><td>microphone    </td><td>Audio Classification  </td><td>Audio NN      </td><td>API for Audio classifier</td></tr>
<tr><td>自動駕駛</td><td>Stunt Car</td><td>Camera+MPU9250</td><td>Object Detection      </td><td>CNN+LSTM      </td><td>API for Object   </td></tr>
<tr><td>自動駕駛</td><td>Stunt Car</td><td>Camera+MPU9250</td><td>Reinforcement Learning</td><td>CNN+LSTM      </td><td>RL-DQN coding    </td></tr>
<tr><td>動作偵測</td><td>體感遊戲 </td><td>Camera - Pose </td><td>Pose Detection        </td><td>CNN+LSTM      </td><td>API for CNN+LSTM </td></tr>
<tr><td>動作偵測</td><td>體感遊戲 </td><td>MPU9250       </td><td>Hand/Body Movement    </td><td>CNN+LSTM      </td><td>API for CNN+LSTM </td></tr>
<tr><td>生成式AI</td><td>穿戴式chatGPT</td><td>mic + 1.14" TFT</td><td>Audio recording  </td><td>N/A           </td><td>API for Audio clipping</td></tr>
<tr><td>生成式AI</td><td>Text-to-Code</td><td>AMB82-MINI </td><td>Over-The-Air</td><td>N/A</td><td>OTA library</td></tr>
</table>

---
## Edge AI & AIoT 專題計畫之週邊及載具

<table>
<tr><th>週邊與載台   </th><th>產品圖片</th><th>整合的功能</th></tr>
<tr><td>1.14吋彩色TFT</th><th><img src="https://gcs.rimg.com.tw/g1/f/b4/cd/22326084867277_915.jpg"></td></tr>
<tr><td>越野遙控車   </td><td><img src="https://gcs.rimg.com.tw/g4/e40/afa/jif9j8j8/f/3d/2a/22347200521514_469.jpg"></td></tr>
<tr><td>特技車       </td><td><img src="https://gcs.rimg.com.tw/g9/3c3/78b/ff742155456/d/4e/22139378684238_637.jpg"</td></tr>
<tr><td>水陸兩用車   </td><td><img src="https://gcs.rimg.com.tw/g5/cad/e0b/davidhadson493/f/43/3d/22347198425917_866.jpg"</td></tr>
</table>

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


