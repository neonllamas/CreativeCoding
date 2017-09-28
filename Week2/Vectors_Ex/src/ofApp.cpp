#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 255, 255);
   // cocoBall.setup();
    // for(int i=0; i<NUMBALLS; i++){
     //   lotsOfBalls[i].setup();
    //}
    
    cocoPuffs.push_back(CocoBall());
    cocoPuffs[0].setup();
    
    //consoleLog Options
    
    int myNum = 20;
    cout << "Hello" << "World" << myNum << endl;
    ofLog() << "Hello World!" << myNum;
    printf("hello world %d", myNum); //to output variables, you have to have a %_ depending on what you're looking for 
}

//--------------------------------------------------------------
void ofApp::update(){
    //loop through and update all
    cocoBall.update();
    for(int i=0; i<cocoPuffs.size(); i++){
        cocoPuffs[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(100, 60, 60);
    //change background colour depending on number of balls created
    // ofSetBackground
    for(int i=0;i<cocoPuffs.size(); i++){
    cocoPuffs[i].draw();
    }
    
    // cocoBall.draw();
   // for(int i=0; i<NUMBALLS; i++){
       // lotsOfBalls[i].draw();
 //   }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    cocoPuffs.push_back(CocoBall());
    cocoPuffs[cocoPuffs.size()-1].setup();
    
    CocoBall tempBall;
    tempBall.setup();
    cocoPuffs.push_back(tempBall);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
