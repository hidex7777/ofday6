#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetWindowTitle("day 6");
	ofEnableAlphaBlending();
	ofEnableDepthTest();
	for (int z = 0; z > -ofGetWidth(); z-=boxsize) {
		for (int x = 0; x < ofGetWidth(); x+=boxsize) {
			for (int y = 0; y < ofGetHeight(); y+=boxsize) {
				this->boxes.push_back(shared_ptr<Box>(new Box(x, y, z, this->boxsize)));
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		this->spheres.push_back(shared_ptr<Sphere>(new Sphere(i)));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int s = 0; s < this->spheres.size(); s++) {
		this->spheres[s]->update();
		for (int b = 0; b < this->boxes.size(); b++) {
			this->boxes[b]->update(this->spheres[s]->location, this->spheres[s]->myr, this->spheres[s]->myc);
		}
	}
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	for (int b = 0; b < this->boxes.size(); b++) {
		this->boxes[b]->draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'x') {
		string now = ofGetTimestampString("%Y%m%d%H%M%S");
		this->img.grabScreen(0, 0, 1000, 1000);
		this->img.saveImage("of" + now + ".jpg");
	}
	
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
