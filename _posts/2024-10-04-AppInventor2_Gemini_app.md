---
layout: post
title: Gemini App Design
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Gemini App 設計與製作

---
## App : Gemini_Talk

**使用模型：** Gemini-1.5-Flash <br>

**主要功能：** 呼叫大型語言模型 <br>
**次要功能：** 支援語音輸入和語音輸出<br>

(Google 雙子星為一個多模態大型語言模型, 具備視覺能力）<br>

---
### Enter MIT AppInventor2
use Chrome to open [ai2.appinventor.mit.edu](https://ai2.appinventor.mit.edu/)<br>

![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_appinventor.png?raw=true)

---
### Import project
* 載入計畫 [Gemini_Talk.aia](https://github.com/rkuo2000/GenAI/blob/main/Gemini_Talk.aia)<br>

![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_import_project.png?raw=true)
<br>

---
### Project Designer
App版面佈局<br>

![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_Gemini_Talk_designer.png?raw=true)<br>

---
### Project Blocks 
拼圖式程式設計<br>

![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_Gemini_Talk_blocks.png?raw=true)<br>

1. 至 https://aistudio.google.com/app/apikey
2. 產生金鑰 (Create API Key)
3. 複製轉貼至global API_Key變數

---
### Project Properies
![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_Gemini_Talk_project_properties.png?raw=true)

### Project Build
![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_Gemini_Talk_build_apk.png?raw=true)<br>

---
### generated APK
![](https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_Gemini_Talk_APK_QR.png?raw=true)<br>
Download .apk to install on Android Phone/Tablet

---
### App running
<p><img width="50%" height="50%" src="https://github.com/rkuo2000/GenAI-projects/blob/master/assets/images/ai2_Gemini_Talk.jpg?raw=true"></p>

---
## Further Developments

* Chain-of-Thoghts for Reasoning

* Integration with smartphone features, such as Google Maps, Pedometer, IMU, GPS, Camera, ...

---
### Reasoning
*This prompt is to check the LLM's capability of reasoning !* <br>

```
我在杯子裡放一個草莓
把杯子倒過來放在桌上
再把杯子放到微波爐裡
請問草莓在哪？
```

![](https://github.com/rkuo2000/AI-course/blob/main/images/Reasoning_Gemini_App.jpg?raw=true)

