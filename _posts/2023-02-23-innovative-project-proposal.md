## Futre Home Applications
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
## 居家陪伴機器人
### 應用功能說明
1. 在外可隨時監控家中各處異常
2. 可雙向傳遞聲音甚至是影像
3. 可遠端撥放影片或音樂
4. 可遠端協助餵食貓狗
5. 協助清掃家中灰塵

### 設計考量與相關技術
**系統設計考量：**<br>
1. 移動方式:四輪
2. 供電方式:自動充電
3. 聯網方式: WiFi 或 BLE 連至 手機電腦

**所需相關技術：**
1. 監控及打掃路線: 手機電腦 + Cloud database
2. 影像傳輸: ESP32-CAM模組
3. 控制:PID controller


### 系統方塊圖
![](https://github.com/rkuo2000/MCU-course/blob/main/images/FutureHome_flying_robot.png?raw=true)
![](https://github.com/sijop/MCU-project/blob/main/images/images.jfif)

---
<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*



