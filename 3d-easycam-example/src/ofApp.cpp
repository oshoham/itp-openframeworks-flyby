#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    sphere.setRadius(50);
    cone.set(50, 100);
    box1.set(100);
    box2.set(100);
    box3.set(100);
    cylinder.set(50, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    cam.begin();
    
    ofEnableDepthTest();
    
    // draw cone
    ofPushMatrix();
    ofTranslate(200, 0, 0);
    ofRotate(ofRadToDeg(ofGetElapsedTimef() * 0.1 * TWO_PI));
    
    ofSetColor(ofColor::red);
    cone.draw();
    ofSetColor(0);
    cone.drawWireframe();
    
    ofPopMatrix();
    
    // draw sphere
    ofPushMatrix();
    ofTranslate(-200, 0, 0);
    ofRotateY(ofRadToDeg(ofGetElapsedTimef() * 0.1 * TWO_PI));
    
    ofSetColor(ofColor::white);
    sphere.draw();
    ofSetColor(0);
    sphere.drawWireframe();
    
    ofPopMatrix();
    
    // draw box1
    ofPushMatrix();
    ofTranslate(0, 200, 0);
    ofRotate(-ofRadToDeg(ofGetElapsedTimef() * 0.5 * TWO_PI));
    
    ofSetColor(ofColor::blue);
    box1.draw();
    ofSetColor(0);
    box1.drawWireframe();
    
    ofPopMatrix();

    // draw cylinder
    ofPushMatrix();
    ofTranslate(0, -200, 0);
    ofRotateX(ofRadToDeg(ofGetElapsedTimef() * 0.25 * TWO_PI));
    
    ofSetColor(ofColor::cyan);
    cylinder.draw();
    ofSetColor(0);
    cylinder.drawWireframe();
    
    ofPopMatrix();
    
    // draw box2
    ofPushMatrix();
    ofTranslate(0, 0, 200);
    ofRotateX(-ofRadToDeg(ofGetElapsedTimef() * 0.75 * TWO_PI));
    
    ofSetColor(ofColor::yellow);
    box2.draw();
    ofSetColor(0);
    box2.drawWireframe();
    
    ofPopMatrix();
    
    // draw box3
    ofPushMatrix();
    ofTranslate(0, 0, -200);
    ofRotateY(ofRadToDeg(ofGetElapsedTimef() * TWO_PI));
    
    ofSetColor(ofColor::magenta);
    box3.draw();
    ofSetColor(0);
    box3.drawWireframe();
    
    ofPopMatrix();
    
    ofDisableDepthTest();
    
    cam.end();
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
