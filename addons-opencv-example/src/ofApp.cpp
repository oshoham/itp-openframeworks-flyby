#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

// based on Kyle McDonald's ofxCv basic contours example
// https://github.com/kylemcdonald/ofxCv/blob/master/example-contours-basic/src/ofApp.cpp

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setup(ofGetWidth(), ofGetHeight());
    gui.setup();
    gui.add(minArea.set("Min area", 10, 1, 100));
    gui.add(maxArea.set("Max area", 200, 1, 500));
    gui.add(threshold.set("Threshold", 128, 0, 255));
    gui.add(smoothing.set("Smoothing", 0, 0, 50));
    gui.add(holes.set("Holes", false));
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    
    if (grabber.isFrameNew()) {
        ofPixels pixels = grabber.getPixels();
        pixels.mirror(false, true);
        
        ofImage image;
        image.setFromPixels(pixels);
        
        contourFinder.setMinAreaRadius(minArea);
        contourFinder.setMaxAreaRadius(maxArea);
        contourFinder.setThreshold(threshold);
        contourFinder.setFindHoles(holes);
        contourFinder.findContours(image);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofSetColor(255);
    ofFill();
//    contourFinder.draw();
    
    for (int i = 0; i < contourFinder.size(); i++) {
        ofPolyline polyline = contourFinder.getPolyline(i);
        polyline.simplify();
        polyline = polyline.getSmoothed(smoothing);
        vector<ofPoint> & vertices = polyline.getVertices();
        
        ofBeginShape();
        for (int j = 0; j < vertices.size(); j++) {
            ofVertex(vertices[j]);
        }
        ofEndShape();
    }
    
    gui.draw();
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
