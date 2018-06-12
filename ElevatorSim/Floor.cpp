#include "stdafx.h"

//Constructors
Floor::Floor()
{
	FloorNum = 1000;
	FloorName = "DEFAULT_NAME_ERROR";
	FloorDesc = "DEFAULT_FLOOR_DESCRIPTION_ERROR";
}

Floor::Floor(int fNum, string fName)
{
	FloorNum = fNum;
	FloorName = fName;
	FloorDesc = "DEFAULT_FLOOR_DESCRIPTION_ERROR";
}

//Functions
void Floor::displayFloorInfo()
{
	cout << "Showing information for floor " << FloorNum << "..." << endl;
	cout << "Name: " << FloorName << endl;
	cout << "Description: " << endl << "	" << FloorDesc << endl;
}