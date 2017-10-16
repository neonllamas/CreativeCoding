#pragma once

#include "ofMain.h"

class Cube{
    
public:
    void setup (int mouseX, int mouseY);
    void update();
    void draw();
    
    ofPoint pos;
};

