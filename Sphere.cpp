#include "Sphere.h"

Sphere::Sphere(int index) {
	this->location.set(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(-ofGetWidth(), 0));
	this->myr = ofRandom(200, 400);
	if (index == 0) {
		this->myc.set(163, 90, 92);
	}
	else if (index == 1) {
		this->myc.set(79, 135, 102);
	}
	else if (index == 2) {
		this->myc.set(52, 89, 125);
	}
	else {
		this->myc.set(0,0,0);
	}
	this->velocity.set(ofRandom(-3,3), ofRandom(-3,3), ofRandom(-3,3));
}
void Sphere::update() {
	this->location += this->velocity;
	if (this->location.x < 0) {
		this->location.x = 0;
		this->velocity.x *= -1;
	}
	else if (this->location.x > ofGetWidth()) {
		this->location.x = ofGetWidth();
		this->velocity.x *= -1;
	}
	if (this->location.y < 0) {
		this->location.y = 0;
		this->velocity.y *= -1;
	}
	else if (this->location.y > ofGetHeight()) {
		this->location.y = ofGetHeight();
		this->velocity.y *= -1;
	}
	if (this->location.z < -ofGetWidth()) {
		this->location.z = -ofGetWidth();
		this->velocity.z *= -1;
	}
	else if (this->location.z > 0) {
		this->location.z = 0;
		this->velocity.z *= -1;
	}
}
void Sphere::draw() {

}