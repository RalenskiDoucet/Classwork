#include "Zombie Fight Club.h"
#include "Zombie Fight Club.h"

void Zombies::LoseHealthWhenAttacked(mHealth, mAttackPower)
{
}

void Zombies::LoseHealth(int mHealth, int mAttackPower)
{
	return LoseHealth(mHealth, -mAttackPower);
}
