#pragma once

#include "ofMain.h"

class VideoRingBuffer {
    public:
        VideoRingBuffer();
        void setup(int numFrames);
        void addFrame(ofPixels & pixels);
        ofPixels & getDelayedPixels(size_t delay);

    private:
        int currentIndex;
        vector<ofPixels> frames;
};
