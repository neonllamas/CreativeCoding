#pragma once

#include "ofMain.h"

class Cube{
    
public:
    Cube();
    void setup (int x, int y);
    void update(int r, int g, int b, int a, int w, int h, int s);
    void draw();
    
    int r,g,b,a,w,h,s;
};

