#pragma once
#include "point2d.h"

class Player
{
private:
Point2D  mPos;
	char mName[255];
	int mLevel;

public:
	void player();
	Player(Point2D , char[]);
	void MovePlayer(Point2D);
	bool Levelup();

};
