---
layout: post
title: Edge-AI MCU Blockchain
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Introduction to IoT Blockchains.

---
## Blockchain consensus protocols

### Proof-of-Work
Bitcoin introduced PoW as a way to validate transactions on a decentralized network without intermediaries. 
PoW requires participants to expend substantial amounts of computational energy (work) in a competition to solve a complex math puzzle. 
The first miner to expend the computational energy and solve the math problem wins the right to append a block of transactions to the blockchain and earn the subsequent block rewards.

### Proof-of-Stack

### Proof-of-Trust
The proof of trust (PoT) consensus protocol is a method for selecting validators in a decentralized network. Rather than selecting validators according to their investment in machinery or stake, 
PoT consensus selects them according to their contribution to a network.<br>
PoT makes it easy to create dynamic peer-to-peer payments channels that can scale to meet enterprise needs.<br>
COTI (“currency of the internet”) is an enterprise-grade decentralized payments network that implements a proof of trust consensus protocol as part of a DAG (directed acyclic graph)-based consensus model. A DAG is a type of data structure that forms a scalable distributed ledger technology (DLT) alternative to blockchains. 

---
### IOTA Tangle

---
## Popular IoT Blockchains

### Iota
![](https://www.researchgate.net/publication/352759368/figure/fig1/AS:1038814948651008@1624684192376/Architecture-of-the-IOTA-Platform.ppm)

![](https://www.researchgate.net/publication/352759368/figure/fig2/AS:1038814948634624@1624684192597/IOTA-Tangle-versus-Blockchain.ppm)
![](https://wiki.iota.org/assets/images/sandbox-c1866a6e91a9d1630540da307e84ca19.png)

#### TangleID
每個 identity (無論是個人還是公司) 唯一對應一組 UUID，由用戶向系統註冊產生，這組金鑰對存放於管理的 server，並且引導用戶產生一組 RSA key pair，公鑰與 UUID+I 綁定發布於 Tangle 上

發證單位以私鑰簽章，並搜尋 UUID+I 獲取用戶公鑰加密證書內容後，以 UUID+C 發布

證書持有者將獲取的證書發布至 MAM 上，並決定要以哪種形式公開
(可以採圖像化引導的方式讓使用者建立 MAM 樹狀結構)，
每個人可以發布多組 MAM tree，
再將建立的 MAM tree 加上 UUID+P 發布至 Tangle (Public 的資料)

企業以 UUID+Q 向用戶發出閱覽請求，用戶以企業的 UUID+A 回覆並附上 MAM Tree 的資料，以企業的公鑰加密

發證單位須註銷證書時，直接以 UUID+R 公開發出，不做加密(若是加密會沒辦法查到)

用戶雙方傳遞訊息時使用 UUID+M ，透過搜尋對方的 UUID+I 取得公鑰用以加密
(也可以改進為使用 UUID+M 紀錄 MAM init channel key)

作為 anti-sybil 的方式，可以限制 TangleID 上的每一筆交易皆需要帶 token 且發送至固定地址，成為使用服務的手續費。

金鑰遺失的清況我認為有兩種做法:

維持相同 UUID 並連結新的金鑰，要求補發證書
通過身分認證，向我們取得金鑰副本


---
機器開機時透過 TangleID 取得目前使用的 MAM 起始地址，循序讀取資料並按順序進行 OTA 更新。

每台機器皆綁定單一 UUID，將機器內使用的公鑰加上簽章以 UUID+K 記錄至 Tangle 上即完成綁定。

資料傳遞和點數回饋的部份各有兩種做法:

固定地址 || 固定 tag
加密 || 公開
直接將每一筆交易作為 token || 累積數筆交易後發送 token 給使用者
若採用固定地址且要求不為零元交易，可以有效防止 sybil 攻擊，
這種情形下交易手續費可於發送點數回饋交易時退還

在登入 TangleID 後，使用者可以於網站上消費點數，購買行為會產生一筆交易，由雙方簽署，使用 UUID+B

---
**空氣盒子**<br>
機器開機時透過 TangleID 取得目前使用的 MAM 起始地址，循序讀取資料並按順序進行 OTA 更新。

每台機器皆綁定單一 UUID，將機器內使用的公鑰加上簽章以 UUID+K 記錄至 Tangle 上即完成綁定。

資料傳遞和點數回饋的部份各有兩種做法:

固定地址 || 固定 tag
加密 || 公開
直接將每一筆交易作為 token || 累積數筆交易後發送 token 給使用者
若採用固定地址且要求不為零元交易，可以有效防止 sybil 攻擊，
這種情形下交易手續費可於發送點數回饋交易時退還

在登入 TangleID 後，使用者可以於網站上消費點數，購買行為會產生一筆交易，由雙方簽署，使用 UUID+B

---


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*


