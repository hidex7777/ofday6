#pragma once
#include "ofMain.h"

class Sphere
{
public:
	Sphere(int index);
	~Sphere() {};
	void update();
	void draw();
	ofVec3f location;
	float myr;
	ofColor myc;
private:
	ofVec3f velocity;
};