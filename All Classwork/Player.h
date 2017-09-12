#pragma once

class Player
{
	public:
		int mHealth;
		char mName;
		int mReasource;
		int Mlevel;
		bool mGender;
		void TakeDamage(int amount);
		void  ModifyLevel(int value);
};