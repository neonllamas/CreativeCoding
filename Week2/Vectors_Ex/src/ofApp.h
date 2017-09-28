#pragma once

#include "ofMain.h"
#include "CocoBall.h"

#define NUMBALLS 502

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
    
    //className nameOfObject;
    CocoBall cocoBall;
    
    // creating an array of type CocoBall
    CocoBall lotsOfBalls[NUMBALLS];
    
    //arrays in c: type name [amount};
    int someInts[200];
    
    //using a vector: vector<ClassName> arrayName;
    vector<CocoBall> cocoPuffs;
		
};
