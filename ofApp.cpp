#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(30);
	ofBackground(0);
	ofEnableDepthTest();
	ofSetWindowTitle("Insta");

	this->font_size = 25;
	this->font_span = ofGetWidth() / this->font_size;

	this->font.loadFont("fonts/Kazesawa-Bold.ttf", this->font_size);
	this->moji = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw() {
	cam.begin();

	for(int x = -ofGetWidth() / 2; x < ofGetWidth() / 2; x += this->font_span){
		for (int y = -ofGetHeight() / 2; y < ofGetHeight() / 2; y += this->font_span){
			float noise_value = ofMap(ofNoise(x * 0.0005, y * 0.0005, ofGetFrameNum() * 0.0025), 0, 1, 0, 25);
			ofPushMatrix();
			ofTranslate(ofVec3f(0, 0, noise_value * 50 - 50 * 25 / 2));
			this->font.drawString(this->moji.substr(noise_value, 1), x, y);
			ofPopMatrix();
		}
	}

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
