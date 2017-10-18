#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxOsc.h"
#include "ofxFaceTracker.h"
#include "ofxCv.h"
#include "cube.h"


//#define NUMCUBES 2000

enum gameState{
    SCENE_ONE,
    SCENE_TWO,
    SCENE_THREE
};

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //GUI
    ofxPanel gui;
    ofxIntSlider scaleRed;
    ofxIntSlider scaleGreen;
    ofxIntSlider scaleBlue;
    ofxIntSlider scaleAlpha;
    ofxIntSlider scaleWidth;
    ofxIntSlider scaleHeight;
    ofxIntSlider scaleSize;
    
    //COMPONENTS
    ofVideoGrabber cam;
    ofxFaceTracker tracker;
    gameState currentState;
    ofTrueTypeFont text;
    
    //ASSETS
    ofImage spongebob;
    
    //CUBE SPAWNING
    Cube newCube;
    vector<Cube> cubeSpawn;
  
    
};

