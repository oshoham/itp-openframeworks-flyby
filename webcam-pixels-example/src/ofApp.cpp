#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setup(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetColor(255);
    
    ofPixels pixels = grabber.getPixels();
    pixels.mirror(false, true);
    
    int spacing = ofMap(ofGetMouseX(), 0, ofGetWidth(), 6, 40, true);
    
    for (int i = 0; i < pixels.getWidth(); i += spacing) {
        for (int j = 0; j < pixels.getHeight(); j += spacing) {
            ofColor color = pixels.getColor(i, j);
            int brightness = color.getBrightness();
            ofDrawCircle(i, j, ofMap(brightness, 0, 255, 0, spacing - 2));
        }
    }

//    ofImage img;
//    img.setFromPixels(pixels);
//    img.draw(0, 0);
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
