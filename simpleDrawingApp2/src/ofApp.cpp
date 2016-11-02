#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0,0,0);
    
}

//--------------------------------------------------------------
void ofApp::update(){


    ofMatrix4x4 mat;
    mat.makeRotationMatrix(1, 0, 1, 0);
   
//    ofMatrix4x4 scaleMat;
//    scaleMat.makeScaleMatrix(ofPoint(0.99,0.99,0.99));
   
    
    for (int i = 0; i < myLine.size(); i++){
        myLine[i] -= ofPoint(ofGetWidth()/2, ofGetHeight()/2);
        myLine[i] = myLine[i] * mat;
        myLine[i] += ofPoint(ofGetWidth()/2, ofGetHeight()/2);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofSetColor(ofColor::white);
    myLine.draw();
    
    
    
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
    myLine.addVertex(ofPoint(x,y));
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    myLine.clear();
    myLine.addVertex(ofPoint(x,y));
    
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
