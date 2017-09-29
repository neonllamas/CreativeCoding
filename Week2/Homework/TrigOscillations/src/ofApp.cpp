#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float r = ofMap(sin( ofGetElapsedTimef()*3),-1,1,0,50);
    float g = ofMap(sin( ofGetElapsedTimef()*3),-1,1,0,50);
    float b = ofMap(sin( ofGetElapsedTimef()*3),-1,1,0,50);
    ofSetBackgroundColor(r,g,b);
    //ofSetBackgroundColor(40, 40, 40);
    
    ofTranslate(20,20);
    
    for(int x = 0; x < ofGetWidth(); x+= 10){
        for(int y = 0; y < ofGetHeight(); y+= 10){
            
            float r = sqrt(x*x + y*y);
            float z = 5 * sin( r + ofGetElapsedTimef()*2 );
            /*ofDrawRectangle(x,y,z,z);*/
            ofDrawCircle(x, y, z);
            float red = ofMap(sin( ofGetElapsedTimef() ),-1,1,50,230);
            float green = ofMap(sin( ofGetElapsedTimef() * .25 ),-1,1,50,230);
            float blue = ofMap(sin( ofGetElapsedTimef() * .5 ),-1,1,50,230);
            ofSetColor(red, green, blue);
            ofFill();
            
        }
    }
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
