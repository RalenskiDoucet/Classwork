#pragma once
#include "point2d.h"
#include "PlayerPoint2d.h"

class Player
{
private:
Point2D  mPos;
Player Ralenski(); //Constructor.
Player PlayerOne(); //Constructor.
					//Same Name as the class.
					// Does NOT have a return type.
	char mName[255]; 
	int mLevel =(100) ;
	int mLevelCap = (110);
public:
	void player();
	Player(Point2D , char[]);
	bool LevelUp(int mLevel, int mLevelCap); 
	void MovePlayer(Point2D, int Direction);
	
	

};
