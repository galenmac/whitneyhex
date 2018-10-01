#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    void hex(float x, float y, float cdist);
    
   
    
    ofxPanel gui;
    ofxFloatSlider R_i;
    ofxFloatSlider R_t;
    ofxFloatSlider R_a;
    ofxFloatSlider X_i;
    ofxFloatSlider X_t;
    ofxFloatSlider X_a;
    ofxFloatSlider Y_i;
    ofxFloatSlider Y_t;
    ofxFloatSlider Y_a;
    ofxFloatSlider tail;
    ofxFloatSlider gradient;
		
};
