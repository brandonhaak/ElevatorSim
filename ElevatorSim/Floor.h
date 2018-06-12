#pragma once

#include "stdafx.h"

class Floor
{
protected:
	int FloorNum;
	string FloorDesc;

public:
	string FloorName;

	//Constructors
	Floor();
	Floor(int fNum, string fName);

	//Functions
	void displayFloorInfo();

};