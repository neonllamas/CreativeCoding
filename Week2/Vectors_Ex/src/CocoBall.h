//
//  CocoBall.hpp
//  Class_Ex
//
//  Created by Bella Wella on 12/09/17.
//
//

#pragma once

#include "ofMain.h"

class CocoBall{
    
    public:
        void setup (int mouseX, int mouseY);
        void update();
        void draw();
    
    ofPoint pos;
    ofVec2f vel;
};
