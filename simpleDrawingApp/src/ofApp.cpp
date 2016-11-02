#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0,0,0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
//    for (int i = 0; i < myLine.size(); i++){
//        myLine[i].x += ofRandom(-1,1);
//        myLine[i].y += ofRandom(-1,1);
//    }
    
//        for (int i = 0; i < myLine.size(); i++){
//            myLine[i].y += 2;
//        }
    
    
//    for (int i = 0; i < myLine.size(); i++){
//        myLine[i].y += sin(myLine[i].x / 100.0 + ofGetElapsedTimef()) * 3.0;
//    }

    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofSetColor(ofColor::white);
    myLine.draw();
  
    //ofPolyline myLine2 = myLine.getSmoothed(3);
    //ofTranslate(500,0);
    //myLine2.draw();
    //getResampledBySpacing(30);
    
//    ofNoFill();
//    for (int i = 0; i < myLine2.size(); i++){
//        ofCircle(myLine2[i], 15);
//    }
    
    
    
    
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
