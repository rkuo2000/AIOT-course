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
1. 在外可隨時監控家中異常，並可傳遞聲音甚至是影像
2. 可遠端撥放影片或音樂
3. 可遠端操控簡單機械，如餵食機、洗衣機...等

### 設計考量與相關技術
**系統設計考量：**<br>
1. 移動方式:四輪
2. 供電方式:自動充電
3. 聯網方式: WiFi 或 BLE 連至 手機電腦

**所需相關技術：**
1. 飛行姿態偵測與控制: ESP32 + MPU6050 + PID controller
2. 溫濕度感測 & 氣體偵測: HTU21D + MQ2 + MQ7 + MQ135
3. 紅外線遙控: IR-LED 
4. 影像傳輸: ESP32-CAM模組
5. 物品夾具：懸吊掛勾, 磁鐵吸吊
6. 服務器: 具AI加速(GPU)
  - 影像物件偵測辨識: CSL-YOLO
  - 任務規劃控制: Mission Planner with Floorplan

### 系統方塊圖
![](https://github.com/rkuo2000/MCU-course/blob/main/images/FutureHome_flying_robot.png?raw=true)

---
<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*



