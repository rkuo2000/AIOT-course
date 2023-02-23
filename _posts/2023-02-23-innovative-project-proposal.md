---
layout: post
title: Innovation Project Proposal
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

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
![](https://github.com/sijop/MCU-project/blob/main/images/%E4%B8%8B%E8%BC%89.jfif)
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
5. 互動教具：字卡, 跳棋, ...

### 系統方塊圖
![](https://github.com/rkuo2000/MCU-course/blob/main/images/Future_Home_companion_robot.png?raw=true)

---
## Design Methodology (設計方法)
* Top-Down Design  ：由上層應用分析再區分出下層個別功能及所需軟硬體設計
* Bottom-Up Design ：由底層軟硬體元件往上組合出上層所需應用功能

![](<iframe width="1239" height="697" src="https://www.youtube.com/embed/zwWg6hkj6mU" title="【釣魚日記】居然一個人包池的雲海溫泉….還有竿竿咬的點...新手也不會喊累..真是完美的一趟旅程........fishing｜采蓁 Patti ＠雲海溫泉" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>)
---
## Market Analysis (市場分析)
![](https://blog.hubspot.com/hs-fs/hubfs/tam-sam-som.png?width=1200&name=tam-sam-som.png)

---
### TAM of Future Home Products
The Target Market size (TAM) of Future Home Products is the number of household.<br>

---
### Taiwan Households = 8.93M (台灣 9百萬戶）
* [Total number of households in Taiwan from 2010 to 2020(in 1,000s)](https://www.statista.com/statistics/330804/taiwan-national-total-number-of-households/#:~:text=By%20the%20end%20of%202020,households%20in%20the%20previous%20year.)

### Japan Households = 57.2M (日本 5千7百萬戶)
* [Number of Households in Japan](https://www.helgilibrary.com/indicators/number-of-households/japan/) 

---
### American Households = 129.93M (美國 1.3億戶)
* [Number of households in the U.S. from 1960 to 2021(in millions)](https://www.statista.com/statistics/183635/number-of-households-in-the-us/)<br>
* [The average American household consisted of 2.51 people in 2021.](https://www.statista.com/statistics/183648/average-size-of-households-in-the-us/)<br>
---
### France Households = 29.7M 
* [Number of Households in France](https://www.helgilibrary.com/indicators/number-of-households/france/)
* The average household size in France in 2020 is **2.2** people per household.

---
### UK Households = 28.267M 
* [Number of Households in UK ](https://www.ibisworld.com/uk/bed/number-of-households/44090/)
* [Number of households in the United Kingdom in 2020, by type of household(in 1,000s)](https://www.statista.com/statistics/961002/households-in-the-united-kingdom-uk-by-type/)<br>


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


