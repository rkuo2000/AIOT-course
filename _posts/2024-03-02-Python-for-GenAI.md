---
layout: post
title: Python for GenAI
author: [Richard Kuo]
category: [Lecture]
tags: [jekyll, ai]
---

Python Tutorial/Programming, AI-frameworks, ChatGPT-generated python, GenAI examples

---
## Python programming language

### [Python Tutorial](https://www.w3schools.com/python/default.asp)

### [Python Programming](https://www.programiz.com/python-programming)

---
## AI frameworks

### [Tensorflow Turorials](https://www.tensorflow.org/tutorials)

### [PyTorch Tutorials](https://pytorch.org/tutorials/)

---
## GenAI examples
`git clone https://github.com/rkuo2000/GenAI`<br>

`pip install git+https://github.com/openai/whisper.git`<br>
install whisper package, whisper model can transcribe audio file to text <br>

### Audio-to-Text
`cd GenAI/Audio-to-Text`<br>

#### Test Speech Recognition
`python asr.py`<br>

**[asr.py](https://github.com/rkuo2000/GenAI/blob/main/Audio-to-Text/asr.py)**<br>
input audio file to whisper model to generate result (text)<br>

#### Running Whisper server
`python whisper_server.py`<br>

**[whisper_server.py](https://github.com/rkuo2000/GenAI/blob/main/Audio-to-Text/whisper_server.py)**<br>
use flask to set up a HTTP server and use whisper model to serve !<br>

#### Post audio to Whisper server
`python post_audio.py`<br>

**[post_audio.py](https://github.com/rkuo2000/GenAI/blob/main/Audio-to-Text/post_audio.py)**<br>
read an audio file and send to HTTP server with whisper model<br>

---

<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*

