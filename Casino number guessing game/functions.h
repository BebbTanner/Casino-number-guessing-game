#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "classes.h"
#pragma once



/*Global variables*/
int playerGuess, random;
int lowerBound, upperBound;
bool win = true;

	//	do {
	//		easyMode();

	//		if (p.playerCash == 20) {
	//			cout << "Lets up difficulty shall we?" << endl;
	//			break;
	//		}
	//		else if (playerGuess != easyNum) {
	//			win = false;
	//			break;
	//		}

	//	} while ((p.playerCash > 0 || p.playerCash < 20));


void randomNum(int &x, int &y) {
	
	for (int i = 1; i <= 1; i++) {
		random = random = x + rand() % (y - x + 1);
	}

}


//Definition of the introduction function
void introduction() {
	using namespace std;

	cout << "Welcome, please enter your name: " << endl;
	cin >> p.playerName;
	cout << endl;
	cout << "Welcome " << p.playerName << ", I am the dealer" << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "We will be playing a number guessing game." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "Each time you guess correctly you will be rewarded with some money." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "The more money you have, the harder the game will get." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "Are you ready to play, " << p.playerName << "?" << endl;
	system("pause");
	cout << endl;
}


void roundWin() {
	win = true;
	p.playerCash = p.playerCash + 10;

	cout << "The number was. . ." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << random << endl;

	cout << "Congradulations, you one this round!" << endl;
	cout << "Bank: $" << p.playerCash << endl;
}


void roundLoss() {
	win = false;

	cout << "The number was. . ." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << random << endl;
	cout << "Game Over." << endl;
	cout << "Final Score: $" << p.playerCash << endl;
}


void easyMode() {
	lowerBound = 1;
	upperBound = 5;

	randomNum(lowerBound, upperBound);

	cout << "Please guess a number (1 - 5): " << endl;

	cin >> playerGuess;

	if (playerGuess == random) {
		roundWin();
	}

	else if (playerGuess != random) {
		roundLoss();
	}

}


void mediumMode() {
	lowerBound = 1;
	upperBound = 10;

	randomNum(lowerBound, upperBound);

	cout << "Please guess a number (1 - 10): " << endl;

	cin >> playerGuess;

	if (playerGuess == random) {
		roundWin();
	}

	else if (playerGuess != random) {
		roundLoss();
	}
}


void hardMode() {
	lowerBound = 1;
	upperBound = 15;

	randomNum(lowerBound, upperBound);

	cout << "Please guess a number (1 - 15): " << endl;

	cin >> playerGuess;

	if (playerGuess == random) {
		roundWin();
	}

	else if (playerGuess != random) {
		roundLoss();
	}
}


void guessingGame() {
	do {

		//Breaks out when the player guesses incorrectly.
		//Breaks out whe the cash reaches 30.
		while (p.playerCash < 30 && win == true) {
			easyMode();
		}

		if (win == false) {
			break;
		}

		cout << win << endl << "start med" << endl;
		system("pause");
		cout << endl;

		//Breaks out when the player guesses incorrectly
		//Breaks out when the cash reaches 100
		while (p.playerCash < 100 && win == true) {
			mediumMode();
		}

		if (win == false) {
			break;
		}

		cout << win << endl << "start hard" << endl;
		system("pause");
		cout << endl;

		//Breaks out when the player guesses incorrectly
		while (p.playerCash >= 100 && win == true) {
			hardMode();
		}

	} while (win == true);

}