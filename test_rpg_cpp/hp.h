#pragma once
#include "hitpointtypes.h"

class hp
{
public:
	// returns true if set succesfully
	bool setMaxHP(hptype new_max_hp)
	{
		if (new_max_hp < 1)
			return false;

		MaxHP = new_max_hp;

		if (CurrentHP > MaxHP)
			CurrentHP = MaxHP;
		
		return true;
	}

	void takeDamage(hptype damage)
	{
		if (damage > CurrentHP)
		{
			CurrentHP = 0;
			return;
		}

		CurrentHP -= damage;
	}

	void heal(hptype amount)
	{
		if (amount + CurrentHP > MaxHP)
		{
			CurrentHP = MaxHP;
		}
	}


private:
	hptype ShieldHP;
	hptype CurrentHP;
	hptype MaxHP;
};