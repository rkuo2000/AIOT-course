#ifndef __GARBAGECLASSLIST_H__
#define __GARBAGECLASSLIST_H__


struct GarbageClassificationItem {
    uint32_t index;
    const char* garbageName;
    uint8_t filter;
};

//// List of emotion the pre-trained model is capable of recognizing
//// Index number is fixed and hard-coded from training
//// Set the filter value to 0 to ignore any recognized audios

// ['cardboard', 'glass', 'metal', 'paper', 'plastic', 'trash']
GarbageClassificationItem garbageNames[6] = {
    {0, "Cardboard",  1},
    {1, "Glass",      1},
    {2, "Metal",      1},
    {3, "Paper",      1},
    {4, "Plastic",    1},	
    {5, "Trash",      1}};
#endif
