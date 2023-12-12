#ifndef __EMOTIONCLASSLIST_H__
#define __EMOTIONCLASSLIST_H__


struct EmotionDetectionItem {
    uint32_t index;
    const char* emotionName;
    uint8_t filter;
};

//// List of emotion the pre-trained model is capable of recognizing
//// Index number is fixed and hard-coded from training
//// Set the filter value to 0 to ignore any recognized audios

// ['angry', 'disgust', 'fear', 'happy', 'neutral', 'sad', 'surprise']
EmotionDetectionItem emotionNames[6] = {
    {0, "Angery",     1},
    {1, "Disgust",    1},
    {2, "Fear",       1},
    {3, "Happy",      1},
    {4, "Neutral",    1},
    {5, "Sad",        1},	
    {6, "Surprise",   1}};
#endif
