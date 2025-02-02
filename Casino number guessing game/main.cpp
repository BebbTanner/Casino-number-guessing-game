/*
The guessing project in C++ is a game designed to test the player�s luck and knowledge.
The player needs to guess a random number generated by the computer. If the player guesses right, they will win a certain amount of money.
The winning prize depends on the difficulty of the game. The program implements classes, functions, and user-defined data types.
It also uses other features such as loops and conditionals to create a logical structure. Furthermore, it makes use of the standard template library to implement basic operations and other data structures.

To do:
	Implement a score board.
*/

#include "functions.h"
using namespace std;

int main() {
	srand((unsigned)time(NULL));

	introduction();

	guessingGame();

/*
	Needs:
		string multidimensional Array with 5 slots
			sort by player cash as int
			convert player cash to a string
			print out leaderboard
			save the leaderboard
			output to a txt file?
		This should all be under the roundLoss function.
		if the player cash is $0 they will not be on the leaderboard.
*/
}