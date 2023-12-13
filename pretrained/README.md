# pretrained models

## Emotion Detection

#### Kaggle: [fer2013-cnn](https://www.kaggle.com/code/rkuo2000/fer2013-cnn)
**[Output](https://www.kaggle.com/code/rkuo2000/fer2013-cnn/output)** `fer2013-cnn.h5` (1.26MB)<br>
<br>
total params = 103,143<br>
input_shape = (48,48,1)<br>
test accuracy = 54.89%<br>

#### Labels = ['angry', 'disgust', 'fear', 'happy', 'neutral', 'sad', 'surprise']
[EmotionClassList.h](https://github.com/rkuo2000/EdgeAI-course/blob/main/pretrained/emotion_detection/EmotionClassList.h)<br>

---
## Garbage Classification

#### Kaggle : [garbage-cnn](https://www.kaggle.com/code/rkuo2000/garbage-cnn)
**[Output](https://www.kaggle.com/code/rkuo2000/garbage-cnn/output)**  `garbage_cnn.h5` (4.41MB)<br>
<br>
total params : 361,190<br>
input_shape = (224,224,3)<br>
Evaluation accuracy = 75 %<br>

##### Labels = ['cardboard', 'glass', 'metal', 'paper', 'plastic', 'trash']
[GarbageClassList.h](https://github.com/rkuo2000/EdgeAI-course/blob/main/pretrained/garbage_classification/GarbageClassList.h)<br>

---
## Garbage12 Classification

#### Kaggle : [garbage12-cnn](https://www.kaggle.com/code/rkuo2000/garbage12-cnn)
**[Output](https://www.kaggle.com/code/rkuo2000/garbage12-cnn/output)**  `garbage12_cnn.h5` (4.42 MB)<br>
<br>
total params : 361,580<br>
input_shape = (200,200,3)<br>
Evaluation accuracy = ?? %<br>

#### Labels = ['battery', 'biological', 'brown-glass', 'cardboard', 'clothes', 'green-glass', 'metal', 'paper', 'plastic', 'shoes', 'trash', 'white-glass']
[GarbageClassList.h](https://github.com/rkuo2000/EdgeAI-course/blob/main/pretrained/garbage12_classification/GarbageClassList.h)<br>

---
## Pothole Detection

#### Kaggle : [yolov7-pothole-detection](https://www.kaggle.com/code/rkuo2000/yolov7-pothole-detection)
**[Output](https://www.kaggle.com/code/rkuo2000/yolov7-pothole-detection/output)**  runs/train/yolov7_tiny_pothole_fixed_res/weights/ `best.pt` (1.17MB)<br>

#### Labels = ['pothole']
[PotholeClassList.h](https://github.com/rkuo2000/EdgeAI-course/blob/main/pretrained/yolov7_pothole-detection/PotholeClassList.h)<br>

