#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    parent.setPosition(0,0,0);
    child.setParent(parent);
    child.setPosition(100,0,0);
    
    
    grandChild.setParent(child);
    grandChild.setPosition(0,100,0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    parent.rotate(1, 0, 1, 0);
    child.rotate(4.5,1,0,0);
    
    
     grandChild.setPosition(0,200 + 100 * sin(ofGetElapsedTimef()),0);
    
    myLine.addVertex(grandChild.getGlobalPosition());
    if (myLine.size() > 1200){
        myLine.getVertices().erase(myLine.getVertices().begin());
    }
    //parent.setPosition(100 * sin(ofGetElapsedTimef()), 0,0);
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    camera.begin();
    
    
//    parent.draw();
//    child.draw();
//    grandChild.draw();
//    //ofDrawRectangle(0, 0, 100, 100);
    myLine.draw();
    
    camera.end();
    
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
