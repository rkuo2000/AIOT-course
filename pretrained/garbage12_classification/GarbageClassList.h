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

// ['battery', 'biological', 'brown-glass', 'cardboard', 'clothes', 'green-glass', 'metal', 'paper', 'plastic', 'shoes', 'trash', 'white-glass']
GarbageClassificationItem garbageNames[6] = {
    {0, "Battery",        1},
    {1, "Biological",     1},
    {2, "Brown-glass",    1},
    {3, "Cardboard",      1},
    {4, "Clothes",        1},	
    {5, "Green-glass",    1},
    {6, "Metal",          1},
    {7, "Paper",          1},	
    {8, "Plastic",        1},	
    {9, "Shoes",          1},
    {10, "Trash",         1},	
    {11, "White-glass",   1}};
#endif
