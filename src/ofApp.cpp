#include "ofApp.h"

//--------------------------------------------------------------

float R_i = .3;
float R_t = .6;
float R_a = 100;
float X_i = .3;
float X_t = .1;
float X_a = 200;
float Y_i = .1;
float Y_t = 1;
float Y_a = 200;

void ofApp::setup(){
    ofNoFill();
    ofBackground(0);
    ofSetLineWidth(2);
    ofSetColor(255, 0, 0);
    
    gui.setup();
    gui.add(R_i.setup("Hex Size i", .1, .01, 3));
    gui.add(R_t.setup("Hex Size t", .6, .1, 3));
    gui.add(R_a.setup("Hex Size a", 73, 50, 200));
    gui.add(X_i.setup("X Pos i", .01, 0, .1));
    gui.add(X_t.setup("X Pos t", .9, .01, 2));
    gui.add(X_a.setup("X Pos a", 188, 100, 400));
    gui.add(Y_i.setup("Y Pos i", .01, 0, .1));
    gui.add(Y_t.setup("Y Pos t", .56, .01, 2));
    gui.add(Y_a.setup("Y Pos a", 185, 100, 400));
    gui.add(tail.setup("Tail Length", 25, 10, 500));
    gui.add(gradient.setup("Gradient", .001, 0, .2));
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    
    
    
    for (int i = 0; i < tail; i++){
        float dist = R_a * (.5 * sin(R_t * ofGetElapsedTimef() + R_i * i)+.5) + 80;
        float centX = X_a * sin(X_t * ofGetElapsedTimef()+ X_i * i);
        float centY = Y_a * sin(Y_t * ofGetElapsedTimef()+ Y_i * i);
        hex(ofGetWidth()/2+centX, ofGetHeight()/2+centY, dist);
        
        ofSetColor(255, 150*(.5*sin(.01* ofGetElapsedTimef()+gradient*i)+.5), 150*(.5*-sin(ofGetElapsedTimef()+gradient*i)+.5));
        hex(ofGetWidth()/2+centX, ofGetHeight()/2+centY, dist);
        hex(ofGetWidth()/2-centX, ofGetHeight()/2+centY, dist);
    
    }
    
   

}
void ofApp:: hex(float x, float y, float cdist){
    ofPushMatrix();
    ofTranslate(x, y);
    ofBeginShape();
    for (int i = 0; i < 6; i++){
        float t = 2*3.14/6 * i;
        float xPos = cos(t) * cdist;
        float yPos = sin(t) * cdist;
        ofVertex(xPos, yPos);
    }
    float t = 2*3.14/6 * 0;
    float xPos = cos(t) * cdist;
    float yPos = sin(t) * cdist;
    ofVertex(xPos, yPos);
    ofEndShape();
    ofPopMatrix();
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
