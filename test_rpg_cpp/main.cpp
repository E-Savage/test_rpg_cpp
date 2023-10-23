#include <iostream>
#include "allclasses.h"

int main() {
	Warrior warr1;
	Wizard wiz1;
	Cleric cler1;
	Rogue rogue1;

	std::cout << "Warrior \n" 
		<< "-MaxHP: " << warr1.getMaxHP() << "\n" 
		<< "-Strength: " << warr1.getStrength() << "\n"
		<< "-Intellect: " << warr1.getIntellect();

	return 0;
}