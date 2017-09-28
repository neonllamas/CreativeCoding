#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetBackgroundColor(125,0,220);
    ofSetCircleResolution(80);
    
    x = 300;
    y = 400;
    smoothX = 0;
    smoothY = 0;
    sX = 300;
    sY = 400;
    angle = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

    //ofSetCircleResolution(mouseX);
    //smoothX = .99*smoothX + .01*mouseX;
    //smoothY = .99*smoothY + .01*mouseY;
    
    // increase my angle so it changes the rotation ... .01 because we are in radians
    angle +=.1;
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    //ofDrawCircle(smoothX,smoothY,40);
    //float angle = atan2(mouseY-smoothY,mouseX-smoothX);
    //angle = ofRadToDeg(angle);
    
    //ofSetRectMode(OF_RECTMODE_CENTER);
    
    //ofPushMatrix();
       // ofTranslate(smoothX,smoothY);
        //ofRotate(angle);
        //ofDrawRectangle(0, 0, 50, 30);
    //ofPopMatrix();
    
    int radius = 80;
    ofDrawCircle(x,y,radius);
    ofFill();
    
    float sY = y+radius*sin(angle);
    float sX = x+radius*cos(angle);
    ofDrawCircle(sX, sY, 10);
    ofNoFill();
    
    ofDrawLine (x,y,sX,sY);
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
