// Monster_Encounter_Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> //Imports srand and rand along with the exit function
#include "MonsterEncounter.h"
using namespace std;


int main() {
	MonsterEncounter GobBat;// goblin battle
	GobBat.monsterName = "rabbit";
	GobBat.startingMonsterHealth = 30;
	GobBat.MonsterFighterTitleScreen();// starts game
}