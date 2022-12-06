// Monster_Encounter_Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> //Imports srand and rand along with the exit function
#include "MonsterEncounter.h"
using namespace std;


int main() {
	MonsterEncounter MB; // Creates a monster battle object that you can edit attributes of.
	MB.monsterName = "monster";// Ghange the name of the monster here.
	MB.startingMonsterHealth = 30;// This is the ammount of health the monster will start with when you start a new game.
	MB.startingPlayerHealth = 30;// This is the ammount of health the player will start with when you start a new game.
	
	
	
	MB.MonsterFighterTitleScreen();// This is the void that starts the game.
}
