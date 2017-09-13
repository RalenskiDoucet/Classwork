#pragma once

class Zombies
{
private:
	char mName[255];
	int mHealth = 300;
	int mMaxHealth = 1000;
	int mAttackPower;
public:
	int mLevelCap = 500;
	void LoseHealth(int mHealth, int mAttackPower);
};