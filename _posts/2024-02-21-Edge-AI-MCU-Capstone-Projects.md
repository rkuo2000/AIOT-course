---
layout: post
title: Edge AI MCU Capstone Projects
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Edge-AI MCU Capstone Projects

---
## Outlines
0. Define (Edge-AI) Product 
1. Choose Development Board
2. List Product Key Features
3. Draw Funcitonal Block Diagram
4. Create Project Schedule/Timeline
5. Prototyping / Proof-of-Concept (POC)
6. Function Verification / System Testing
7. Project Report & Summary

### [Edge-AI MCU project 協作平台](https://sites.google.com/view/edgeaimcucapstoneproject/%E9%A6%96%E9%A0%81)

---
## Edge-AI Development Boards
`Key Feature feasibility accessment`<br>

### AMB82-MINI (RTL8735B)
<p><img width="50%" height="50%" src="https://www.amebaiot.com/wp-content/uploads/2023/03/amb82_mini.png"></p>

---
### ESP32-S3-Box
<p><img width="50%" height="50%" src="https://img.fruugo.com/product/8/09/911185098_max.jpg"></p>

---
### [RPi4](https://rkuo2000.github.io/Robotics/lecture/2022/11/01/Raspberry-Pi.html) 
![](https://www.taiwansensor.com.tw/wp-content/uploads/2020/04/RPI-006544-7-600x366.jpg) 

---
### [Jeson-Nano](https://developer.nvidia.com/embedded/learn/get-started-jetson-nano-devkit)
![](https://robotkingdom.com.tw/wp-content/uploads/2020/10/Nano2GB_3QTR_Front-Right_S-scaled-510x510.jpg)

---
## Capstone Projects

<table>
<tr><th>Project Type        </th><th>Applications   </th><th>Peripherals </th><th>AI Feature          </th><th>required NN models/APIs</th></tr>
<tr><td>AIoT</td><td>Smart Appliance</td><td>Camera      </td><td>Food Classification</td><td> CNN </td></tr>
<tr><td>AIoT</td><td>Recycle Machine</td><td>Camera      </td><td>Garbage Classification</td><td> CNN </td></tr>
<tr><td>AIoT</td><td>Fish Tank</td><td>Camera </td><td>Fish Detection </td><td>YOLOv4/v7 </td></tr>
<tr><td>Autonomous Driving  </td><td>Toy Car </td><td>Camera </td><td>Pothole Detection     </td><td>YOLOv4/v7 </td></tr>
<tr><td>Autonomous Driving  </td><td>Toy Car </td><td>Camera+IMU</td><td>Navigation (VIO Fusion)</td><td> **Jetson-Nano** </td></tr>
<tr><td>eToy</td><td>Electric Pet </td><td>Camera+Mic</td><td>Audio+Object+Emotion</td><td>Audio+ObjDet+FER</td></tr>
<tr><td>Reinforcement Learning</td><td>Toy Car</td><td>Camera+IR Ranger</td><td>Reinforcement Learning</td><td> RL-DQN </td></tr>
<tr><td>Reinforcement Learning</td><td>Toy Car</td><td>Camera+IMU</td><td>Autonomous Driving   </td><td> RL End-to-End learning </td></tr>
<tr><td>VR/AR </td><td>Virtual Sports</td><td>IMU (MPU6050) </td><td>Gesture Recognition</td><td>CNN </td></tr>
<tr><td>Generative AI</td><td>Portable ChatGPT</td><td>camera/mic + TFT-LCD</td><td>Audio/Image</td><td>Audio-to-Https</td></tr>
<tr><td>Generative AI</td><td>Wearable ChatGPT</td><td>camera/mic + TFT-LCD</td><td>Audio/Image/Gesture/Touch</td><td> multimodal inputs </td></tr>
</table>

---
### EVBs & Peripherlas
<table>
<tr>
<td><img src="https://gcs.rimg.com.tw/g2/f/37/24/21713666818852_729.jpg"></td>
</tr>
<tr>
<td><img src="https://gcs.rimg.com.tw/g4/b3e/53c/jill670522/f/7a/76/22407795079798_688.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g4/e40/afa/jif9j8j8/f/3d/2a/22347200521514_469.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g9/3c3/78b/ff742155456/d/4e/22139378684238_637.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g5/cad/e0b/davidhadson493/f/43/3d/22347198425917_866.jpg"></td>
</tr>
<tr>
<td><img src="https://mm.digikey.com/Volume0/opasdata/d220001/medias/images/2869/MFG_ESP32-S3-BOX.jpg"></td>
<td><img src="https://gcs.rimg.com.tw/g1/f/b4/cd/22326084867277_915.jpg"></td>
</tr>
</table>

---
## References:

### [Autonomous Indoor Robot Navigation](https://arxiv.org/abs/2005.13857)
![](https://d3i71xaburhd42.cloudfront.net/8a47843c2e664e5e7e218e2d891726d023619403/3-Figure4-1.png)

---
### [Carla-Gym](https://github.com/PacktPublishing/Hands-On-Intelligent-Agents-with-OpenAI-Gym/tree/master/ch7#2-carla-gym)
![](https://user-images.githubusercontent.com/4770482/149642030-9a5fc2b0-9268-45cc-9328-04f2b2e423e6.gif)

---
### [End-to-end Reinforcement Learning of Robotic Manipulation with Robust Keypoints Representation](https://arxiv.org/pdf/2202.06027.pdf)
![](https://github.com/rkuo2000/EdgeAI-course/blob/main/images/End-to-End_Reinforcement_Learning.png?raw=true)

---
### [JacFit](https://jacfit.com.tw)
![](https://cdn.shopify.com/s/files/1/0754/8459/4494/files/2024JanBundleTop_d_zh.webp?v=1705390716)

---
### [ESP32-S3-Box](https://www.espressif.com/en/news/ESP32-S3-BOX_video) 
[Unleashing the Power of OpenAI and ESP-BOX](https://blog.espressif.com/unleashing-the-power-of-openai-and-esp-box-a-guide-to-fusing-chatgpt-with-espressif-socs-fba0b2d2c4f2)<br>
![](https://gcs.rimg.com.tw/g4/7a7/d13/ymuxcjy8057078/3/6a/8d/22349335696013_508.jpg)

---
### [Rabbit R1](https://www.rabbit.tech/)
<iframe width="1042" height="586" src="https://www.youtube.com/embed/Hy2r7luwS10" title="First Look at Rabbit R1 AI Device" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


