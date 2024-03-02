---
layout: post
title: PC Software Installation
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

PC Software Installation: Editor, GitBash, Python3, CUDA & CuDNN, Tensorflow, PyTorch. 

---
## List of PC Software to install
1. Editor
2. OS
3. GPU
4. Python
5. Tensorflow/Pytorch

---
## Editor

### For Windows: install [Notepad++](https://notepad-plus-plus.org/downloads/)

### For Ubuntu / MacOS: no intallation needed, use built-in editors
* **nano** (for Ubuntu / MacOS)<br>
* **vim** (for Ubuntu / MacOS)<br>

---
## Terminal

### Install [Git for Windows](https://gitforwindows.org/)

**[Linux Command 命令列指令與基本操作入門教學](https://blog.techbridge.cc/2017/12/23/linux-commnd-line-tutorial/)**<br>
* `ls -l` (列出目錄檔案)<br>
* `cd ~` (換目錄)<br>
* `mkdir new` (產生新檔案夾)<br>
* `rm file_name` (移除檔案)<br>
* `rm –rf directory_name` (移除檔案夾)<br>
* `df .` (顯示SD卡已用量)<br>
* `du –sh directory` (查看某檔案夾之儲存用量)<br>
* `free` (檢查動態記憶體用量)<br>
* `ps –a`   (列出正在執行的程序)<br>
* `kill -9 567`  (移除程序 id=567)<br>
* `cat /etc/os-release` (列出顯示檔案內容，此檔案是作業系統版本)<br>
* `vi file_name` (編輯檔案)<br>
* `nano file_name` (編輯檔案)<br>
* `clear` (清除螢幕顯示)<br>
* `history` (列出操作記錄)<br>

---
## Install Python3 on Windows

### Python3.10.11 for Windows
1. Go to [https://www.python.org/downloads/windows/](https://www.python.org/downloads/windows/)
2. Download [Windows installer (64-bit)](https://www.python.org/ftp/python/3.10.11/python-3.10.11-amd64.exe)<br>
3. Customomize installation to set directory to `C:\Python3`

---
### checking Python version on Ubuntu PC
**Ubuntu 20.04 LTS**<br>
`$ python3 -V`<br>
Python 3.8.10

**Ubuntu 22.04 LTS**<br>
`$ python3 -V`<br>
Python 3.10.12

---
### Install Python packages
* Open GitBash / Ubuntu Terminal<br>
`python3 -V`<br>
`python3 –m pip install --upgrade pip`<br>
`pip -V`<br>
`pip install jupyter`<br>
`pip install pandas`<br>
`pip install matplotlib pillow imutils`<br>
`pip install opencv-python`<br>
`pip install scikit-learn`<br>
`git clone https://github.com/rkuo2000/GenAI`<br>

---
## Frameworks

### Install Tensorflow
`pip install tensorflow`<br>

---
### Install PyTorch
* [PyTorch get-started](https://pytorch.org/get-started/locally/)<br>
`pip install torch torchvision torchaudio`<br>

---
## Learn Programming

### [Python Programming](https://www.programiz.com/python-programming)

### [Tensorflow Turorials](https://www.tensorflow.org/tutorials)

### [PyTorch Tutorials](https://pytorch.org/tutorials/)

---
## Google Colab

### Google Colab 教學
[Google Colab 教學 (1)｜Python 雲端開發環境安裝與快速導覽](https://medium.com/python4u/google-colab-%E6%95%99%E5%AD%B8-1-python-%E9%9B%B2%E7%AB%AF%E9%96%8B%E7%99%BC%E7%92%B0%E5%A2%83%E5%AE%89%E8%A3%9D%E8%88%87%E5%BF%AB%E9%80%9F%E5%B0%8E%E8%A6%BD-78942200525f)<br>

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*

