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
    snot.load("snot.jpeg");
    tear.load("tear.png");
    memes.load("memes.jpeg");
    shader.load("shader.vert","shader.frag");
    myVideo.load("skull.mp4");
    
    cam.setup(ofGetWidth(),ofGetHeight());
    tracker.setup();
    
    newCube.setup(scaleWidth, scaleHeight);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    newCube.update(scaleRed, scaleGreen, scaleBlue, scaleAlpha,scaleWidth, scaleHeight,scaleSize);
    
    cam.update();
    myVideo.update();
    
    
    if(cam.isFrameNew()){
        tracker.update(toCv(cam));
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //SCENE ONE
    if(currentState==SCENE_ONE){
        
        myVideo.stop();
        
        gui.draw();
        ofSetBackgroundColor(30,30,30);
        
        newCube.draw();
        
        ofSetColor(220, 220, 220);
        text.drawString("press 'c' to build", ofGetWidth()/2, 100);
        text.drawString("press 'x' to reset", ofGetWidth()/2, 140);
        
        for(int i=0;i<cubeSpawn.size(); i++){
            cubeSpawn[i].draw();
        }
    
    }
    
    
    
    //SCENE TWO
    else if(currentState==SCENE_TWO){
        
        myVideo.stop();
        
        cam.draw(0,0);
        ofPolyline noseBase = tracker.getImageFeature(ofxFaceTracker::NOSE_BASE);
        ofPolyline eye = tracker.getImageFeature(ofxFaceTracker::LEFT_EYE);
        ofPoint nostril = noseBase.getCentroid2D();
        snot.draw( nostril.x, nostril.y, 8*tracker.getScale(), 8*tracker.getScale() );
        ofPoint leftEye = eye.getCentroid2D();
        tear.draw( leftEye.x, leftEye.y, 8*tracker.getScale(), 8*tracker.getScale() );
        
        
    }
    
    
    //SCENE THREE
    else if(currentState==SCENE_THREE){
        
        myVideo.draw(0, 0, ofGetWidth(), ofGetHeight());
        myVideo.play();
        
        text.drawString("bella made something! lets party!!", 100, 700);
        
        color = ofColor(ofRandom(0, 255),
                        ofRandom(0, 255),
                        ofRandom(0, 255)
                        );
        
        ofSetColor(color);
        
       
        
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

