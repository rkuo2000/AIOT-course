---
layout: post
title: EdgeAI Capstone Projects
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

EdgeAI Capstone Projects showcases & discussion

---
## AmebaPro2 應用專題實作

### Vaccum Robot
(trash classification, IR collision detection)<br>
[![](https://markdown-videos-api.jorgenkh.no/youtube/YHR3ZOmtcyU)](https://youtu.be/YHR3ZOmtcyU)

### RoboCar 
(voice-control, BLE remote-control, line-notify, object-detection)<br>
[![](https://markdown-videos-api.jorgenkh.no/youtube/vr_V1QnVMts)](https://youtu.be/vr_V1QnVMts)

### AI Door-Bell
[![](https://markdown-videos-api.jorgenkh.no/youtube/IumI-uAtkRU)](https://youtu.be/IumI-uAtkRU)

### Portable Chatbot with a local LLM/VLM models
[![](https://markdown-videos-api.jorgenkh.no/youtube/3PnHSE_8rRM)](https://youtu.be/3PnHSE_8rRM)

### Portable ChatGPT with a local LLM
[![](https://markdown-videos-api.jorgenkh.no/youtube/7rfmXPqyLF0)](https://youtu.be/7rfmXPqyLF0)

---
### Portable Gemini with Google cloud LLM 
**step 1.** running [AmebaPro2_Gemini_server.py](https://github.com/rkuo2000/EdgeAI-AmebaPro2/blob/main/AmebaPro2_server/AmebaPro2_Gemini_server.py) `Gemini-1.5-flash`<br>
![](https://github.com/rkuo2000/EdgeAI-AmebaPro2/raw/main/assets/AmebaPro2_Gemini_server_running.png)

**Step 2.** running [HTTP_Post_ImageText_TFTLCD.ino](https://github.com/rkuo2000/Arduino/blob/master/examples/AMB82-MINI/HTTP_Post_ImageText_TFTLCD/HTTP_Post_ImageText_TFTLCD.ino) <br>
press button for 2 seconds, when Blue-LED is on, it starts capturing image and send to Gemini<br>
![](https://github.com/rkuo2000/EdgeAI-AmebaPro2/raw/main/assets/portable_Gemini_button_to_send_image.jpg)

**Step 3.** `AmebaPro2_Gemini_server` will pass the image & text to Gemini, and reply the recieved result.text<br>
(AmebaPro2 Gemini server will add `, please answer briefly.` to the prompt)<br>
![](https://github.com/rkuo2000/EdgeAI-AmebaPro2/raw/main/assets/portable_Gemini_display_result.jpg)


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*
