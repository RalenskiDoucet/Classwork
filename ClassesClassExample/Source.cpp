#include <iostream>
#include "Player.h"

int main()
{
	Player ralenski;
	ralenski.mHealth = 100;
	ralenski.mGender = true;
	ralenski.mLevel = 70;
	ralenski.mResource = 420;

	ralenski.TakeDamage(10);
	ralenski.ModifyLevel(10);

	system("pause");
}