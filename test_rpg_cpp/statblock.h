#pragma once
#include "stattypes.h"

struct StatBlock
{
	stattype Strength; // 0xFF
	stattype Intellect; // 0xFF
	StatBlock() { 
		Strength = (stattype) 1u; 
		Intellect = (stattype) 1u; 
	}
	
	explicit StatBlock(stattype s, stattype i) { 
		Strength = (stattype) s; 
		Intellect = (stattype) i; 
	}
};