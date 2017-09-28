#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    //add slider to the gui - setup(name, default value, min, max)
    
    gui.setup();
    gui.add(freqSlider.setup(" Sin Frequency", 1, .25, 10) );
    
    currentState = PATTERN_SCENE;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float r = ofMap(sin( ofGetElapsedTimef() ),-1,1,0,255);
    float g = ofMap(sin( ofGetElapsedTimef() * .25 ),-1,1,0,255);
    float b = ofMap(sin( ofGetElapsedTimef() * .5 ),-1,1,0,255);
    ofSetBackgroundColor(r,g,b);
    
    if(currentState==PATTERN_SCENE){
    ofPushMatrix();
    ofTranslate(20,20);
    
    for(int x = 0; x < ofGetWidth(); x+= 40){
        for(int y = 0; y < ofGetHeight(); y+= 40){
            
            float r = sqrt(x*x + y*y);
            float z = 20 * sin( r + ofGetElapsedTimef() *freqSlider );//woooaaahh
            ofDrawRectangle(x,y,z,z);
        }
    }
    ofPopMatrix();
    }
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key=='1') currentState = PATTERN_SCENE;
    else if(key=='2')currentState = SQUARE_SCENE;
    else if(key=='f') ofToggleFullscreen(); //important for fullscreen for projects
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
