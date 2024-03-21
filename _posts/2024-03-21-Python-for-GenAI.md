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
## [GenAI sample codes](https://github.com/rkuo2000/GenAI)
`git clone https://github.com/rkuo2000/GenAI`<br>

* `gTTS.py` : to generate gTTS.mp3

---
## Audio-to-Text
`python ../gTTS.py "please make me a coffe" en`<br>
`python ../gTTS.py "早安你好" zh`<br>
* `post_audio.py` : HTTP Post audio file to a http-server
* `whisper_server.py` : HTTP server to receive audio file and transcribe to text
* `whisper_llm_server.py` : HTTP server to transcribe audio file to text, and text-to-text by calling a LLM model

### post_audio to Whisper_LLM_Server
![](https://github.com/rkuo2000/GenAI/blob/main/assets/post_audio.png?raw=true)

---
## Image-to-Text (VLM)

### post image+text to llava_server
`python llava_server.py` (server)<br>
`python post_imgtxt.py`  (client)<br>

### post image+audio to whisper_llava_server

* `python whisper_llava_server.py` (server)<br>
* `python ../gTTS.py "這是什麼有名的台南美食?" zh` (TTS)<br>
* `python post_imgau.py` (client)<br>
![](https://github.com/rkuo2000/GenAI/blob/main/assets/post_imgau.png?raw=true)

* Whisper+LLaVA Server (SR + VLM)<br>
![](https://github.com/rkuo2000/GenAI/blob/main/assets/whisper_llava_server.png?raw=true)

---
## Text-to-Text (LLMs)

### ollama (LLM service tool)
git clone [https://github.com/ollama/ollama](https://github.com/ollama/ollama)<br>
`cd ollama`

#### Install ollama on Linux
```
curl -fsSL https://ollama.com/install.sh | sh
```
#### To run ollama client
`ollama_chat.py`
`ollama_generate.py`

#### Python sample codes
python breeze-7b-instruct.py<br>

* `bloom-zh.py`
* `breeze-7b-instruct.py`
* `faraday-7b.py`
* `mamba-130m.py` # also for -370M, -790M, -1B, -3B, -3B-slimpj
* `mistral-7b-instruct.py`
* `phi-2.py`
* `qwen1.5-7b-chat.py`
* `taiwan-llm.py`
* `vicuna-7b-v1.5.py`
<br>

* `post_text.py`
* `llm_server.py`

--
### pyngrok-LLM server & client

* pyngrok-LLM Server (on Colab T4)<br>
![](https://github.com/rkuo2000/GenAI/blob/main/assets/pyngrok_LLM_Server.png?raw=true)
* post_text (client on PC)<br>
![](https://github.com/rkuo2000/GenAI/blob/main/assets/pyngrok_post_text.png?raw=true)

---
## Text-to-Speech

* **Bark TTA**: `python bark_en.py`, `python bark_cn.py`
* **coqui TTS**: `python coqui_en.py`, `python coqui_zh.py`
* **text-to-speech**: `python text_to_speech.py`
* **gTTS**: `python gTTS.py "你好?" zh`
* **gTranslate**: `python gTranslate.py`

---
## Text-to-Image 
* `sdxl-base.py` - run SDXL-base model to input text and generate an image
* `sdxl-lightning-lora.py` - run SDXL-Lightning with LoRA model to use text to generate an image
* `sdxl-lightning-unet.py` - run SDXL-Lightning with UNet model to use text to generate an image

---
## Image-to-3D

### TripoSR

* Installation :
```
git clone https://github.com/VAST-AI-Research/TripoSR`
cd TripoSR
pip install -r rewquirements.txt
pip install -e .
```
* To run a test
`python run.py examples/chair.png`<br>
(output/0/mesh.obj can be viewed by using F3D viewer, Blender (Game Engine), or Cura(3D-print Slicer)<br>

* To run a Gradio server 
`python gradio_app.py` : running GUI server<br>
![](https://github.com/rkuo2000/GenAI/blob/main/assets/TripoSR_gradio_server.png?raw=true)

### Text-to-3D
**gTranslate + SDXL-Lightning + TripoSR + AppInventor2**<br>

To modify `gradio_app.py` to add *sdxl-lightning-lora.py* funciton


<br>
<br>

*This site was last updated {{ site.time | date: "%B %d, %Y" }}.*

