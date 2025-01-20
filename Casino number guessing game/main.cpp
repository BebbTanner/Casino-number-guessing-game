/*
The guessing project in C++ is a game designed to test the player�s luck and knowledge.
The player needs to guess a random number generated by the computer. If the player guesses right, they will win a certain amount of money.
The winning prize depends on the difficulty of the game. The program implements classes, functions, and user-defined data types.
It also uses other features such as loops and conditionals to create a logical structure. Furthermore, it makes use of the standard template library to implement basic operations and other data structures.
*/

#include "functions.h"
using namespace std;

int main() {
	//In order for the randomNum function to work srand must me at the top of main cpp.
	srand((unsigned)time(NULL));

	//introduction();

	do {

		//Breaks out when the player guesses incorrectly.
		//Breaks out whe the cash reaches 30.
		while (p.playerCash < 30 && win == true) {
			easyMode();
		}

		//Breaks out when the player guesses incorrectly
		//Breaks out when the cash reaches 100
		while (p.playerCash < 100 && win == true) {
			mediumMode();
		}

		//Breaks out when the player guesses incorrectly
		while (p.playerCash >= 100 && win == true) {
			hardMode();
		}

	} while (win == true);

}