#include "cube.h"
#include "ofApp.h"
#include "ofMain.h"

void Cube::setup(int mouseX, int mouseY){
    //pos = ofPoint( mouseX,mouseY);//ofRandom(1024), ofRandom(768));  //ofRandom(#value) will automatially pick a number 0-#value
}

void Cube::update(){
    
}

void Cube::draw(){
    ofDrawBox(scaleWidth, scaleHeight, 0, scaleSize, scaleSize, 15);
    
    
}

