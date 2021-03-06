// ElevatorSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main() {

	Elevator One;
	One.printElevName();

	Floor testFloor = Floor(1, "Ground");
	
	cout << endl;

	testFloor.displayFloorInfo();

	cout << endl;

	Building NineteenEightyOne;
	NineteenEightyOne.addFloor("2nd");
	NineteenEightyOne.addFloor("3rd");
	NineteenEightyOne.addFloor("4th");
	NineteenEightyOne.addFloor("5th");

	NineteenEightyOne.addElevator(One);

	cout << endl;

	NineteenEightyOne.drawBuilding();

	cout << endl;

	NineteenEightyOne.displayBuildingInfo();

	cout << endl;

	cout << "-----End of ElevatorSim.cpp-----" << endl;

	return 0;
}

