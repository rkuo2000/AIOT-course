---
layout: post
title: Edge-AI MCU Capstone Projects
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to projects, development boards, system references, etc.

---
## Product Development Procedures: 
1. Define (Edge-AI) Product 
2. Choose Development Board
3. List Product Key Features
4. Draw Funcitonal Block Diagram
5. Create Project Schedule/Timeline
6. Prototyping / Proof-of-Concept (POC)
7. Function Verification / System Testing
8. Project Report & Summary

### [Edge-AI MCU project 協作平台](https://sites.google.com/view/edgeaimcucapstoneproject/)

---
## Edge-AI Development Boards（開發板）
`Key Feature will determine what development board will be used!`<br>

Comparing some development boards:<br>
<table>
<tr><th> AMB82-mini </th><th> Kneron KL520</th><th> Jetson Orin NX </th><th> Pi-Zero 2W </th></tr>
<tr>
<td><img src="https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png"></td>
<td><img src="https://www.everfocus.com/upload/catalog_m/b098f7b0f63a26477cd2cb5d08eb12c0.png"></td>
<td><img src="https://gcs.rimg.com.tw/g4/265/d35/playrobot-inc/d/4b/6e/22325013064558_792.png"></td>
<td><img src="https://www.oursteam.com.tw/upload/images/20230816_064445.png"></td>
</tr>
</table>

### AMB82-mini
`Audio recording & Video capturing + NN engine + WiFi & BLE/BT`<br>
![](https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png)

[RTL8735B](https://www.amebaiot.com/en/amebapro2/): 32-bit Arm v8M, up to 500MHz, 768KB ROM, 512KB RAM, 16MB Flash (MCM embedded DDR2/DDR3L up to 128MB)
802.11 a/b/g/n WiFi 2.4GHz/5GHz, BLE 5.1, NN Engine 0.4 TOPS, Crypto Engine, Audo Codec, …

* [Ameba Arduino](https://www.amebaiot.com/en/ameba-arduino-summary/)<br>

* [Amebapro2 AMB82-mini Arduino Example Guides](https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-peripherals-examples)<br>

* [Amebapro2 AMB82-mini Arduino getting started](https://www.amebaiot.com/en/amebapro2-amb82-mini-arduino-getting-started/)<br>

---
## Capstone Projects（專題計畫）

<table>
<tr><th>Project Type        </th><th>Applications   </th><th>Peripherals </th><th>AI Feature          </th><th>required NN models/APIs</th></tr>
<tr><td>AIoT</td><td>AI Appliance</td><td>Camera      </td><td>Food Classification</td><td> CNN/YOLv7 </td></tr>
<tr><td>Entertainment</td><td>AI Pet </td><td>Camera+Mic</td><td>Audio+Object+Emotion</td><td>Audio+ObjDet+FER</td></tr>
<tr><td>Education</td><td>AI Tutor</td><td>mic + TFT</td><td>Audio</td><td>Audio-to-Https</td></tr>
<tr><td>Robotics</td><td>Toy Car</td><td>Camera </td><td>Pothole Detection     </td><td>YOLOv4/v7 </td></tr>
<tr><td>Robotics</td><td>Toy Car</td><td>Camera+IR Ranger</td><td>Reinforcement Learning</td><td> RL-DQN </td></tr>
<tr><td>Robotics</td><td>Toy Car</td><td>Camera+IMU</td><td>Autonomous Driving   </td><td> RL End-to-End learning </td></tr>
<tr><td>GenAI</td><td>Portable ChatGPT</td><td>camera/mic + TFT</td><td>Audio/Image</td><td>Audio-to-Https</td></tr>
<tr><td>GenAI</td><td>Wearable ChatGPT</td><td>camera/mic + TFT</td><td>Audio/Image/Gesture/Touch</td><td> multimodal inputs </td></tr>
</table>

---
### Platform & Peripherals （載具與週邊）
<table>
<tr>
<td><img src="https://mm.digikey.com/Volume0/opasdata/d220001/medias/images/2869/MFG_ESP32-S3-BOX.jpg"></td>
<td><img src="https://cdn1.techbang.com/system/excerpt_images/113469/post_inpage/57a929bbe81c765717cb2d373d197784.jpg?1709099479"></td>
<td><img src="https://a.rimg.com.tw/e1/ebay/2e0/56a/devkits%40ebay/9/d3/58/3771c98e0b7103dfaff026bb9f582e25_30222264519512.jpg"></td>

</tr>
<tr>
<td><img src="https://down-tw.img.susercontent.com/file/5a25f3ff18bfb194c3bb1ec786431a73"></td>
<td><img src="https://a.rimg.com.tw/e1/ebay/c03/f47/agent0029346%40ebay/f/ce/0a/54dfde3ef38febef5598e670c1278f17_30221118817802.jpg"></td>
</tr>
<tr>
<td><img src="https://gcs.rimg.com.tw/g4/b3e/53c/jill670522/f/7a/76/22407795079798_688.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g4/e40/afa/jif9j8j8/f/3d/2a/22347200521514_469.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g9/3c3/78b/ff742155456/d/4e/22139378684238_637.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g5/cad/e0b/davidhadson493/f/43/3d/22347198425917_866.jpg"></td>
</tr>
<tr>
<td><img src="https://gcs.rimg.com.tw/g0/e60/66e/chengyi008/5/c7/1f/22009310684959_969.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g1/8/67/0d/22251865967373_876.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g2/2/97/4e/21606776067918_370.jpg"></td>
</tr>
</table>

---
### Components 
* [ESP32-S3-Box-3](https://www.mouser.tw/ProductDetail/Espressif-Systems/ESP32-S3-BOX-3?qs=sGAEpiMZZMuqBwn8WqcFUipNgoezRlc4u4gjCc9cblNcfZiByE2ecw%3D%3D)
![](https://hackster.imgix.net/uploads/attachments/1625815/esp32-s3-box-3_cover_GSYrNNltxp.jpg?auto=compress%2Cformat&w=830&h=466.875&fit=min&dpr=1)
* [Raspberry Pi zero 2W](https://www.ruten.com.tw/item/show?22316502966091)
![](https://a.rimg.com.tw/s6/0c0/431/oursteamtw/3/4b/22316502966091_996.jpg)
* [Raspberry Pi 1.44inch LCD HAT](https://www.ruten.com.tw/item/show?21736060377091)
![](https://gcs.rimg.com.tw/g1/a/04/03/21736060377091_713.jpg)
* [日本 IWAYA 拉拉散步狗](https://www.ruten.com.tw/item/show?21713666818852)
![](https://gcs.rimg.com.tw/g2/f/37/24/21713666818852_267.jpg)
* [越野遙控車](https://www.ruten.com.tw/item/show?22347200521514)
![](https://gcs.rimg.com.tw/g4/e40/afa/jif9j8j8/f/3d/2a/22347200521514_469.jpg)
* [四驅遙控越野汽車](https://www.ruten.com.tw/item/show?22139378684238)
![](https://gcs.rimg.com.tw/g9/3c3/78b/ff742155456/d/4e/22139378684238_637.jpg)
* [水陸兩棲遙控船汽車](https://www.ruten.com.tw/item/show?22347198425917)
![](https://gcs.rimg.com.tw/g5/cad/e0b/davidhadson493/f/43/3d/22347198425917_866.jpg)
* [變形陸空兩用遙控無人機航拍](https://www.ruten.com.tw/item/show?22251865967373)
![](https://gcs.rimg.com.tw/g1/8/67/0d/22251865967373_876.jpg)
* [S91折疊無人機 自動避障航拍機](https://www.ruten.com.tw/item/show?22009310684959)
![](https://gcs.rimg.com.tw/g0/e60/66e/chengyi008/5/c7/1f/22009310684959_870.jpg)
* [QAV250 穿越機 套餐 套件](https://www.ruten.com.tw/item/show?21606776067918)
![](https://gcs.rimg.com.tw/g2/2/97/4e/21606776067918_533.jpg)
* [3自由度機械手臂舵機夾爪](https://www.ruten.com.tw/item/show?22339800673306)
![](https://gcs.rimg.com.tw/g5/a96/4e3/a0918379379/a/68/1a/22339800673306_910.jpg)

---
## System References （系統參考）
### AI 巧虎
![](https://cdn1.techbang.com/system/excerpt_images/113469/post_inpage/57a929bbe81c765717cb2d373d197784.jpg?1709099479)
<iframe width="720" height="405" src="https://www.youtube.com/embed/FyZ7BbS0ksE" title="〈こどもちゃれんじほっぷ〉 AI「しまじろう」のご紹介" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---
### [ESP32-S3-Box](https://www.espressif.com/en/news/ESP32-S3-BOX_video) 
[Unleashing the Power of OpenAI and ESP-BOX](https://blog.espressif.com/unleashing-the-power-of-openai-and-esp-box-a-guide-to-fusing-chatgpt-with-espressif-socs-fba0b2d2c4f2)<br>
![](https://gcs.rimg.com.tw/g4/7a7/d13/ymuxcjy8057078/3/6a/8d/22349335696013_508.jpg)

---
### ChatGPT SmartWatch
<iframe width="1273" height="716" src="https://www.youtube.com/embed/ZCVDDcTL8xQ" title="World&#39;s First ChatGPT AI Smartwatch" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---
### AI Pin
<iframe width="1273" height="716" src="https://www.youtube.com/embed/JA1CGnsKrSE" title="AI Pin 最新的AI科技有多蠢！？" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---
### [Rabbit R1](https://www.rabbit.tech/)
<iframe width="1042" height="586" src="https://www.youtube.com/embed/Hy2r7luwS10" title="First Look at Rabbit R1 AI Device" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---
## References:

### Humanoid Robot
<iframe width="999" height="562" src="https://www.youtube.com/embed/tpp8cykrauk" title="圖 01 OpenAI + 微軟的人工智能機器人更新令科技界震驚" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<iframe width="853" height="480" src="https://www.youtube.com/embed/bH1XzArE9rM" title="新型開普勒人工智能機器人（帶 40 個軸，展示多項新一代功能，價格揭曉)" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---
### [Autonomous Indoor Robot Navigation](https://arxiv.org/abs/2005.13857)
![](https://d3i71xaburhd42.cloudfront.net/8a47843c2e664e5e7e218e2d891726d023619403/3-Figure4-1.png)

---
### [Carla-Gym](https://github.com/PacktPublishing/Hands-On-Intelligent-Agents-with-OpenAI-Gym/tree/master/ch7#2-carla-gym)
![](https://user-images.githubusercontent.com/4770482/149642030-9a5fc2b0-9268-45cc-9328-04f2b2e423e6.gif)

---
### [End-to-end Reinforcement Learning of Robotic Manipulation with Robust Keypoints Representation](https://arxiv.org/pdf/2202.06027.pdf)
![](https://github.com/rkuo2000/EdgeAI-course/blob/main/images/End-to-End_Reinforcement_Learning.png?raw=true)

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


