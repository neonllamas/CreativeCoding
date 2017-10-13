//
//  CocoBall.cpp
//  Class_Ex
//
//  Created by Bella Wella on 12/09/17.
//
//

#include "CocoBall.h"

void CocoBall::setup (int mouseX, int mouseY){
    pos = ofPoint( mouseX,mouseY);//ofRandom(1024), ofRandom(768));  //ofRandom(#value) will automatially pick a number 0-#value
    vel = ofVec2f (ofRandom(-5,5), ofRandom(-5,5));
}

void CocoBall::update(){
    
    pos+= vel; //add velocity to position
    vel *= .99; // quickway to create friction
}

void CocoBall::draw(){
    ofDrawCircle(pos,15); //ofDrawCircle(x,y,radius) - pos has x and y saved in it so you only need two values here
    
    
}
