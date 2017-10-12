#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    myLMFAO.load("SFPR.mp3");
    myShrek.load("shrek.mp3");
    shrek.load("shrek.png");
    myLMFAO.setVolume(0.1f);
    gui.setup();
    gui.add(scaleVolume.setup("volume",.1,0,1));
    gui.add(scaleFreq.setup("frequency", .4, 0, 1));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //float v = 5 * sin(ofSetVolume()*scaleVolume);
}

//--------------------------------------------------------------
void ofApp::draw(){

    if(currentState==SCENE_ONE){
        ofSetBackgroundColor(100, 0, 200);
        myLMFAO.stop();
        myShrek.stop();
        
        cam.begin();
        cam.end();
        
    }
    
    else if(currentState==SCENE_TWO){
        //polygon changes to the sound of the music
        ofSetBackgroundColor(0, 0, 0, .8);
        myShrek.stop();
        
        //for(int x = 0; x < ofGetWidth(); x+= 5){
           // for(int y = 0; y < ofGetHeight(); y+= 10){
                //float r = sqrt(x*x + y*y);
               // float z = 5 * sin( r + ofGetElapsedTimef()*scaleFreq *20);
               // /*ofDrawRectangle(x,y,z,z);*/
              //  ofDrawCircle(x, y, z);
               // float red = ofMap(sin( ofGetElapsedTimef()*5 ),-1,1,50,230);
              //  float green = ofMap(sin( ofGetElapsedTimef() * .25 ),-1,1,50,230);
               // float blue = ofMap(sin( ofGetElapsedTimef() * .5 ),-1,1,50,230);
              //  ofSetColor(red, green, blue);
              //  ofFill();
           // }
        //}
   }
    
    else if(currentState==SCENE_THREE){
        ofSetBackgroundColor(0, 0, 0, .8);
        shrek.draw(0,0);
        myLMFAO.stop();
    }
    
    gui.draw();
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
            myLMFAO.play();
            break;
        case '3':
            currentState=SCENE_THREE;
            myShrek.play();
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
