#pragma once

#include "ofMain.h"
#include "ofxGui.h"

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
		
    ofxPanel gui;
    ofxFloatSlider scaleVolume;
    ofxFloatSlider scaleFreq;
    ofSoundPlayer myLMFAO;
    ofSoundPlayer myShrek;
    ofImage shrek;
    ofEasyCam cam; 
    
    gameState currentState;
};
