This homework is to specify a Future Home application and describe the key features, list all Design Considerations and the required technologies, then draw the System Block Diagram.
---
### Homework Report
**Contents:**<br>
* **應用與功能說明**
  - Specify the future home application, and Describe the key features
  - Describe the key features which may be applied to the home space (kitchen, living room, play room, study room, bed room)
* **設計考量與所需相關技術**
  - List all design considerations and the required technologies
* **系統方塊圖**
  - Draw a System Block Diagram
---

## 互動伴學機器人
### 應用功能說明
1. 外語學習
2. 學齡前遊戲互動

### 設計考量與相關技術
**系統設計考量：**<br>
1. 移動方式：球形滾動
2. 供電方式：鋰電池
3. 互動方式：LCD顯示模組 + 語音輸出入 + 肢體動作 + 指頭操作
4. 作業系統：採用Android OS

**所需相關技術：**
1. 影像物件識別： 執行 CSL-YOLO模型進行辨識(Jetson Nano)
2. 語音辨識與輸出： Speech Recognition & Text-To-Speech (AppInventor 2)
3. 外語教學：AI對答
4. 指頭操作：觸控 & 吸盤式電磁頭
5. 互動教具：字卡, 跳棋,

### 系統方塊圖
![](https://github.com/sijop/MCU-project/blob/main/images/lisa.jfif?raw=true)

### Reference
<iframe width="1239" height="697" src="https://www.youtube.com/embed/aVway6Y1NC4" title="我真的單飛嗎！？50萬QA不怕你問！" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


