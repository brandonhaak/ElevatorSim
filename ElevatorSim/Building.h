#pragma once
#include <iostream>
#include "stdafx.h"
#include <vector>
//#include "Floor.h"
//using namespace std;

class Building
{
protected:
	vector <Floor> floors;
	vector <Elevator> elevators;

public:
	string BuildingName;

	//constructors
	Building();
	Building(string bName);

	//Functions
	void addFloor(string fName);
	void displayBuildingInfo();
	void addElevator(Elevator elev);
	void drawBuilding();
};