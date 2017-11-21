#include "Box.h"

Box::Box(int x, int y, int z, int bs) {
	this->location.set(x, y, z);
	this->boxsize = bs;
	this->mya = 0;
	this->myc.set(255,255,255);
}
void Box::update(ofVec3f sloc, float sr, ofColor sc) {
	float d = this->location.distance(sloc);
	
	if (d < sr) {
		this->myc.set(sc);
		this->mya = ofMap(d, 0, 1000, 255, 0);
	}

}
void Box::draw() {
	ofNoFill();
	ofSetColor(this->myc, this->mya);
	ofDrawBox(this->location, this->boxsize);
	this->myc.set(255, 255, 255);
	this->mya = 0;
}