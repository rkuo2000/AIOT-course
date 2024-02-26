---
layout: post
title: Portable ChatGPT
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Portable ChatGPT

---
## Concept Devices
![](https://www.espressif.com/sites/default/files/application.png)

---
### [ESP32-S3-Box](https://github.com/espressif/esp-box)
![](https://www.espressif.com/sites/default/files/MicrosoftTeams-image%20%281%29_0.png)

---
## Innovative Idea 
ask [ChatGPT](https://chat.openai.com/)<br>

**User:** `What advanced features should I cover in a Portable chatGPT device?`<br>

**ChatGPT3.5**: <br>
```
A portable ChatGPT device could be quite versatile! Here are some advanced features you might consider:

Offline Mode: Implement a robust offline mode that allows users to interact with the device even when not connected to the internet. This could involve pre-loading the device with a large corpus of data and running a localized version of the model.

Customization: Allow users to customize the behavior and personality of the assistant. This could include adjusting the tone, preferred topics, and even the visual appearance of the interface.

Multimodal Interaction: Integrate support for multimodal interactions, enabling users to communicate not just through text but also through speech, images, and gestures. This could enhance the user experience and make interactions more natural.

Privacy Controls: Implement strong privacy controls to ensure user data is protected. This could involve on-device processing, encryption of data, and giving users control over what data is collected and stored.

Learning and Adaptation: Enable the device to learn from user interactions over time and adapt its responses accordingly. This could involve machine learning techniques to improve the quality and relevance of responses based on user feedback.

Integration with IoT Devices: Allow the device to control and interact with other smart devices in the user's environment, such as lights, thermostats, and home appliances. This could make the device even more useful in everyday scenarios.

Advanced Natural Language Understanding: Continuously improve the device's natural language understanding capabilities to better comprehend complex queries, understand context, and provide more accurate responses.

Emotional Intelligence: Equip the device with emotional intelligence capabilities to better understand and respond to the emotional state of the user. This could involve sentiment analysis and the ability to provide empathetic responses.

Security Features: Implement robust security features to protect against unauthorized access and ensure the integrity of the device. This could include biometric authentication, encryption of data, and regular security updates.

Developer API: Provide an API that allows developers to create third-party applications and integrations for the device, expanding its functionality and capabilities.

By incorporating these advanced features, you can create a portable ChatGPT device that offers a rich and personalized user experience while also prioritizing privacy and security.
```

```
可攜式的ChatGPT裝置在設計上應該具有以下功能：

1.語音交互: 能夠透過語音與使用者進行交互，讓使用者能夠自然地與ChatGPT進行對話。

2.文字輸入: 除了語音交互外，也應該支援文字輸入，以便在需要時進行靜默操作或者在環境不適合語音交互時使用。

3.智能對話能力: 具有ChatGPT的核心功能，能夠理解和回應使用者的提問、請求、指令等，並提供相應的回答或解決方案。

4.個性化設定: 允許使用者根據自己的喜好和需求，對ChatGPT的個性、口吻、語調等進行設定，以使對話更加符合使用者的期望。

5.即時翻譯: 具有即時翻譯功能，能夠將不同語言的對話翻譯成使用者所選擇的目標語言，從而促進跨語言溝通。

6.智能建議與推薦: 根據使用者的對話內容和需求，提供相應的建議、推薦或資訊，以幫助使用者解決問題或者滿足需求。

7.本地化: 考慮到不同地區的文化和語言特點，應該支援多種語言和地區的本地化設定，以提供更加貼近當地用戶的使用體驗。

8.隱私保護: 尊重使用者的隱私，不收集或者僅收集必要的個人信息，並提供選項讓使用者控制其數據的使用和共享。

9.學習能力: 具有一定程度的學習能力，能夠根據與使用者的互動不斷優化自身的回答和表現，提供更加智能和個性化的服務

10.連接性: 具有Wi-Fi或藍牙等連接功能，以便與互聯網或其他設備進行連接，從而擴展其功能或者進行遠程更新和管理。
```

### Potential Functions
1. Offline Mode: `local small-LM`
2. Customization: `user customization (OTA SDK)`
3. Multimodal Interaction: `sound/speech, touch, ...` 
4. Privacy Controls: `data encryption`
5. Learning and Adaptation: `Reinforcement Learning`
6. Integration with IoT Devices: `WiFi / BLE connect`
7. Advanced Natural Language Understanding: `LLM server`
8. Emotional Intelligence: `sentiment analysis`
9. Security Features: `thumb/palm/face recognition`
10. Developer API: `third-party integration`

---
## Key Features
based on EdgeAI MCU capabilities<br>

1. Audio   input : mic to record speech/audio
2. Display output: LCD to display text
3. Speaker output: Speaker to output sound

---
## Proof-of-Concept

### ASR - Autonomous Speech Recognition
**Paper:** [Robust Speech Recognition via Large-Scale Weak Supervision](https://arxiv.org/abs/2212.04356)<br>
**Github:** [OpenAI Whisper](https://github.com/openai/whisper)
**Colab:** [LibriSpeech.ipynb](https://colab.research.google.com/github/openai/whisper/blob/master/notebooks/LibriSpeech.ipynb)<br>

---
### ChatGPT
**You:** `please write a python program to do http post to send mp3 file to a http server`<br>
![](https://github.com/rkuo2000/EdgeAI-course/blob/main/images/ChatGPT_Python_HTTP_POST_Audiofile.png?raw=true)

---
**You:** `please write a python program for HTTP server to receive mp3 audio file`<br>
![](https://github.com/rkuo2000/EdgeAI-course/blob/main/images/ChatGPT_Python_HTTP_Server_for_Audiofile.png?raw=true)

---
### [Audio-to-Text](https://github.com/rkuo2000/GenAI/tree/main/Audio-to-Text) 
`cd ~/GenAI/Audio-to-Text`<br>

#### Installation
`pip install requests flask`<br>
`pip install git+https://github.com/openai/whisper.git`<br>

#### To test ASR using OpenAI/Whisper
Speech-To-Text: `python asr.py`<br>

#### To test ASR Server
Audio Server: `python whisper_server.py`<br>
Audio Client: `python post_audio.py`<br>  

---
### [Text-to-Text](https://github.com/rkuo2000/GenAI/tree/main/Text-to-Text)
`cd ~/GenAI/Text-to-Text`<br>

#### Test LLM
`python taiwan-llm.py`<br>
![](https://github.com/rkuo2000/EdgeAI-course/blob/main/images/Text-to-Text_Taiwan_LLM.png?raw=true)

#### Add LLM to Whisper server

---

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


