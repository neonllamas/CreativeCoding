#include "ofApp.h"
#include "ofMain.h"
#include "cube.h"

Cube::Cube(){}

void Cube::setup(int _x, int _y){
   
}

void Cube::update(int _r,int  _g,int _b,int _a,int _w,int _h,int _s){
    r=_r;
    g=_g;
    b=_b;
    a=_a;
    w=_w;
    h=_h;
    s=_s;
}

void Cube::draw(){
    ofSetColor(r, g, b, a);
    ofDrawBox(w, h, 0, s, s, 15);
    ofNoFill();
}
