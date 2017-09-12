#include <iostream>
#include "Vehicle.h"

int main()
{ 
	Vehicle MaClaren;
	MaClaren.mIsEngineOn = false;
	MaClaren.TurnEngineOn(true);
	system("pause");
}