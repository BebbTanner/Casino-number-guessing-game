#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "classes.h"

/*Global variables*/
playerInfo p;
int playerGuess, easyNum, medNum, hardNum;

//Definition of the introduction function
void introduction() {
	using namespace std;

	cout << "Please enter your name: " << endl;
	cin >> p.playerName;
	cout << endl;
	cout << "Welcome, " << p.playerName << " to Bruce's casino!" << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "You will be playing a number guessing game with the dealer." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "Each time you guess correctly you will be rewarded with some money." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "The more money you have, the harder the game will get." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "The harder the difficulty gets, you will be rewared with more money." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "Are you ready to play, " << p.playerName << "?" << endl;
	system("pause");
}

//Definition of the genEasyNum funciton
void easyMode() {
	using namespace std;
	srand(time(0));
	easyNum = rand() % 10 + 1;


	cout << "The dealer has generated a number." << endl;
	cout << "Please guess a number (1-10): " << endl;
	cin >> playerGuess;

	if (playerGuess == easyNum) {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . " << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "Congradulations, you won this round!" << endl;

		/*There needs to be some command or function that will add $5 dollars to the player's bank.*/
	}
	else {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . " << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "You lost." << endl;

		/*There needs to be some command or function that asks the player if they would like to start again.*/
	}

}

//Definition of the genMedNum function
void mediumMode() {
	using namespace std;
	srand(time(0));
	medNum = rand() % 25 + 1;
}

//Definition of the genHardNum function
void hardMode() {
	using namespace std;
	srand(time(0));
	hardNum = rand() % 50 + 1;
}
