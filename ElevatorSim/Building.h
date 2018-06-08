#pragma once
#include <iostream>
#include "stdafx.h"
//#include "Floor.h"
//using namespace std;

class Building
{
protected:
	stack <Floor> floors;

public:
	string BuildingName;

	//constructor
	Building();
};