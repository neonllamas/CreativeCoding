#include "ofApp.h"

using namespace ofxCv;

//--------------------------------------------------------------
void ofApp::setup(){
    
    //can gui options be hidden in different scenes?
    
    gui.setup();
    gui.add(scaleRed.setup("red",85,0,255));
    gui.add(scaleGreen.setup("green",80,0,255));
    gui.add(scaleBlue.setup("blue",220,0,255));
    gui.add(scaleAlpha.setup("transparency",130,0,255));
    gui.add(scaleWidth.setup("left/right",400,0,1500));
    gui.add(scaleHeight.setup("up/down",400,0,1500));
    gui.add(scaleSize.setup("scale",100,0,1000));
    
    text.load("Avenir.ttc", 30);
    
    cam.setup(ofGetWidth(),ofGetHeight());
    tracker.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    if(cam.isFrameNew()){
        tracker.update(toCv(cam));
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(currentState==SCENE_ONE){
        gui.draw();
        ofSetBackgroundColor(30,30,30);
        
        
        ofSetColor(scaleRed, scaleGreen, scaleBlue, scaleAlpha);
        ofDrawBox(scaleWidth, scaleHeight, 0, scaleSize, scaleSize, 15);
        ofFill();
        ofNoFill();
        
        ofSetColor(220, 220, 220);
        text.drawString("press 'c' to build stuff", ofGetWidth()/2, 100);
        
        //can i make this so i can "clone" when i press c? i want this to act like building blocks, so i want to be able to make a new one and leave the old one where it is...
        
    }
    
    else if(currentState==SCENE_TWO){
        
        //face tracker - basically snapchat filters
        
        cam.draw(0,0);
        ofSetLineWidth(2);
        tracker.draw();
        ofPolyline noseBase = tracker.getImageFeature(ofxFaceTracker::NOSE_BASE);
        ofSetColor(ofColor::red);
        noseBase.draw();
        ofDrawCircle(noseBase.getCentroid2D(),8*tracker.getScale());
        ofDrawBitmapString(ofToString((int) ofGetFrameRate()),10,20);
    }
    
    else if(currentState==SCENE_THREE){
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch(key){
        case 'f':
            ofToggleFullscreen();
            break;
        case '1':
            currentState=SCENE_ONE;
            break;
        case '2':
            currentState = SCENE_TWO;
            break;
        case '3':
            currentState=SCENE_THREE;
            break;
            
            //case 'c': ...
        case 'r':
            tracker.reset();
            break;
    }

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
