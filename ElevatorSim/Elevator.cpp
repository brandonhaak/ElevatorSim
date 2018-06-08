#include "Elevator.h"
#include "stdafx.h"

using namespace std;

Elevator::Elevator()
{
	ElevId = 000000;
	ElevName = "DEFAULT_NAME_ERROR";
}

void Elevator::printElevName() {
	cout << "Elevator Name: " << Elevator::ElevName;
}
