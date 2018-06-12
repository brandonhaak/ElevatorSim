#include "stdafx.h"
//using namespace std;
//#include <stack>

//Constructors
Building::Building()
{
	BuildingName = "DEFAULT_BUILDING_NAME";
	Floor f1 = Floor(1, "Ground");
	floors.push_back(f1);
}

Building::Building(string bName)
{
	BuildingName = bName;
	addFloor("Ground");
}

//Functions
void Building::addFloor(string fName)
{
	int newFlNum = floors.size() + 1;
	Floor f = Floor(newFlNum, fName);
	floors.push_back(f);
	cout << "Floor " << fName << " successfully appended to " << BuildingName << "." << endl;
}

void Building::displayBuildingInfo()
{
	cout << "Displaying Building information for " << BuildingName << "..." << endl;
	
	for (Floor &f : floors)
	{
		f.displayFloorInfo();
	}
		
}

void Building::addElevator(Elevator elev)
{
	elevators.push_back(elev);
	cout << "Elevator " << elev.ElevName << " successfully appended to " << BuildingName << ". " << endl;
}

void Building::drawBuilding()
{
	cout << BuildingName << endl;
	cout << "-----------------" << endl;
	vector<Floor>::reverse_iterator rit = floors.rbegin();
	for (; rit != floors.rend(); ++rit)
	{
		cout << " | |" << endl << " | | " << rit->FloorName << endl << " | |" << endl;
	}
	cout << "-----------------" << endl;
}

