#pragma once
#include "ofMain.h"

class Box
{
public:
	Box(int x, int y, int z, int bs);
	~Box() {};
	void update(ofVec3f sloc, float sr, ofColor sc);
	void draw();
	ofVec3f location;
private:
	float mya;
	ofColor myc;
	int boxsize;
};