// Monster_Encounter_Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h> //Imports srand and rand along with the exit function
#include "MonsterEncounter.h"
using namespace std;


int main() {
	// Basic variables for the game.
	MonsterEncounter MB; // Creates a monster battle object that you can edit attributes of.
	MB.monsterName = "monster";// Ghange the name of the monster here.
	MB.startingMonsterHealth = 30;// This is the ammount of health the monster will start with when you start a new game.
	MB.startingPlayerHealth = 30;// This is the ammount of health the player will start with when you start a new game.
	MB.maxMoves = 20; // The max ammount of moves before game over will be set here.
	
	// Monster move values that controll the power of the monsters diffrent moves.
	MB.monsterMove1dmgval = 10; // Damage the monster dose to the player with its first move. Default is 10.
	MB.monsterMove2Regenval = 10; // Health the monster gains using its second move. Default is 10.
	// The third move dose two things at once.
	MB.monsterMove3regenval = 4; // Health the monster gains using its third move. Default is 4.
        MB.monsterMove3dmgval = 4; // Damage the monster dose to the player with its third move. Default is 4.
	
	// Player move values that controll the power of the players diffrent moves.
	MB.playerMove1dmgval = 10; // Damage the player dose to the monster with its first move. Default is 10.
	MB.playerMove2Regenval = 10; // Health the player gains using its second move. Default is 10.
	// The third move dose two things at once.
	MB.playerMove3regenval = 4; // Health the player gains using its third move. Default is 4.
        MB.playerMove3dmgval = 4; // Damage the player dose to the monster with its third move. Default is 4.
	
	
	MB.MonsterFighterTitleScreen();// This is the void that starts the game.
}
