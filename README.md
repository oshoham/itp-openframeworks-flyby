# openFrameworks FlyBy Code Examples

This repo contains code examples for a brief intro to openFrameworks workshop taught at NYU ITP in October 2018. The slides can be found [here](https://slides.com/oshoham/intro-to-openframeworks-and-c).

## Auto-Generated Project Structure

[View Source Code](./of-structure-example/src/ofApp.cpp)

This example shows how to print debug statements using `cout << "" << endl`, and some of the functions that are auto-generated for you when you create a new OF project.

## Drawing with Polylines

[View Source Code](./polyline-example/src/ofApp.cpp)

This is a simple line drawing app that demonstrates mouse interactivity, the C++ [vector](https://medium.com/the-renaissance-developer/c-standard-template-library-stl-vector-a-pretty-simple-guide-d2b64184d50b) data structure, and the [ofPoint](https://openframeworks.cc/documentation/math/ofVec3f/) and [ofPolyline](https://openframeworks.cc/documentation/graphics/ofPolyline/) classes.

## Halftone Webcam

[View Source Code](./webcam-pixels-example/src/ofApp.cpp)

This project demonstrates reading pixel data from a webcam using [ofVideoGrabber](https://openframeworks.cc/documentation/video/ofVideoGrabber/).

## OpenCV Face Tracking

[View Source Code](./addons-opencv-facetracking-example/src/ofApp.cpp)

This example shows how to use the [ofxCv](https://github.com/kylemcdonald/ofxCv) external addon to do basic face tracking on a webcam.

## OpenCV Contours

[View Source Code](./addons-opencv-example/src/ofApp.cpp)

This example demonstrates finding the [contours](https://docs.opencv.org/3.4/d4/d73/tutorial_py_contours_begin.html) of a webcam feed using ofxCv, as well as setting up a GUI for controlling parameters using [ofxGui](https://openframeworks.cc/documentation/ofxGui/).

## 3D Scene

[View Source Code](./3d-easycam-example/src/ofApp.cpp)

This project shows how to set up a basic 3D scene with some primitive shapes using [ofEasyCam](https://openframeworks.cc/documentation/3d/ofEasyCam/), as well as transforming screen coordinates using [ofPushMatrix](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPushMatrix), [ofPopMatrix](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofPopMatrix), [ofTranslate](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofTranslate), and [ofRotate](https://openframeworks.cc/documentation/graphics/ofGraphics/#show_ofRotateDeg).

## Video Delay

[View Source Code](./video-buffer-example/src/ofApp.cpp)

This is a more advanced example that creates a real-time video delay effect, demonstrating how to write your own C++ classes that make use of the openFrameworks API.
