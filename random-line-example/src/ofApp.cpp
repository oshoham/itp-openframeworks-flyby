#include "ofApp.h"

// based on algorithms and sketches by Zach Lieberman
// https://www.instagram.com/p/BSA_PrGAuNI

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    int width = ofGetWidth();
    int height = ofGetHeight();
    
    // our algorithm:
    // pick a random starting point, a direction, and a line length
    // and draw a line if it won't intersect with any existing lines
    
    for (int i = 0; i < 100; i++) {
        int startX = ofRandom(width);
        int startY = ofRandom(height);
        int length = ofRandom(5, 25);
        float angle;
//        angle = ofRandom(TWO_PI); // random angle
//        angle = atan2(height * 0.5 - startY, width * 0.5 - startX); // angle from the center
        angle = atan2(height * 0.5 - startY, width * 0.5 - startX) + PI * 0.5; // angle perpendicular to the center
        
        int endX = startX + length * cos(angle);
        int endY = startY + length * sin(angle);
        
        ofPoint start(startX, startY);
        ofPoint end(endX, endY);
        
        bool didIntersect = false;
        for (int j = 0; j < lines.size(); j++) {
            ofPoint intersection;
            didIntersect = ofLineSegmentIntersection(start, end, lines[j].start, lines[j].end, intersection);
            if (didIntersect) {
                break;
            }
        }
        
        if (!didIntersect) {
            Line line;
            line.start = start;
            line.end = end;
            lines.push_back(line);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(0);
    
    for (Line line : lines) {
        ofDrawLine(line.start, line.end);
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
    if (button == OF_MOUSE_BUTTON_LEFT) {
        lines.clear();
    }
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
