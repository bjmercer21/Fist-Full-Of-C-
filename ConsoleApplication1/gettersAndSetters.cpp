#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Creating a new class and having public and private sections
class Player {
	
private: 
	int health;
	int mana;
	string name;

public:
	void setName(string inputName) { name = inputName; }
	void setHealth(int inputHealth) { health = inputHealth; }
	void setMana(int inputMana) { mana = inputMana; }

	int getHealth() { return health; }
	int getMana() { return mana; }
	string getName() { return name; }
};