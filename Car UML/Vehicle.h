#pragma once

class Vehicle
{
public:
	char mCarName[255];
	char mCarMaker[255];
	int mNumberOfTires;
	int mNubmberOfDoors;
	int mYearOfMake;
	bool mIsEngineOn;
	void TurnEngineOn(bool EngineOn);

};