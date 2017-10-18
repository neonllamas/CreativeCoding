#include "ofApp.h"

using namespace ofxCv;

//--------------------------------------------------------------
void ofApp::setup(){
    
    gui.setup();
    gui.add(scaleRed.setup("red",85,0,255));
    gui.add(scaleGreen.setup("green",80,0,255));
    gui.add(scaleBlue.setup("blue",220,0,255));
    gui.add(scaleAlpha.setup("transparency",130,0,255));
    gui.add(scaleWidth.setup("left/right",400,0,1500));
    gui.add(scaleHeight.setup("up/down",400,0,1500));
    gui.add(scaleSize.setup("scale",100,0,1000));
    
    text.load("Avenir.ttc", 30);
    spongebob.load("spongebob.jpg");
    
    cam.setup(ofGetWidth(),ofGetHeight());
    tracker.setup();
    
    newCube.setup(scaleWidth, scaleHeight);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    if(cam.isFrameNew()){
        tracker.update(toCv(cam));
    }
    
    newCube.update(scaleRed, scaleGreen, scaleBlue, scaleAlpha,scaleWidth, scaleHeight,scaleSize);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //SCENE ONE
    if(currentState==SCENE_ONE){
        gui.draw();
        ofSetBackgroundColor(30,30,30);
        
        newCube.draw();

        
        ofSetColor(220, 220, 220);
        text.drawString("press 'c' to build stuff", ofGetWidth()/2, 100);
        
        
        
        for(int i=0;i<cubeSpawn.size(); i++){
            cubeSpawn[i].draw();
        }
    
    }
    
    
    
    //SCENE TWO
    else if(currentState==SCENE_TWO){
        
        cam.draw(0,0);
//        ofSetLineWidth(2);
//        tracker.draw();
//        ofPolyline noseBase = tracker.getImageFeature(ofxFaceTracker::NOSE_BASE); //this is the outlines in the face ... qq
//        //ofSetColor(ofColor::red);
//        noseBase.draw();
//        //ofDrawCircle(noseBase.getCentroid2D(),8*tracker.getScale()); //replace ofDrawCircle with whateva ya feel like man
//        ofDrawBitmapString(ofToString((int) ofGetFrameRate()),10,20);
//        ofPoint centroid = noseBase.getCentroid2D();
//        spongebob.draw( centroid.x, centroid.y, 8*tracker.getScale(), 8*tracker.getScale() );
    }
    
    
    //SCENE THREE
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
            
        case 'c':
            cubeSpawn.push_back(newCube);
            break;
            
        case 'r':
            tracker.reset();
            break;
            
        case 'x':
            cubeSpawn.clear();
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

