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
		cout << random << endl;
	}

}


//Definition of the introduction function
void introduction() {
	using namespace std;

	cout << "Please enter your name: " << endl;
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
	cout << "The harder the difficulty gets, you will be rewared with more money." << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "Are you ready to play, " << p.playerName << "?" << endl;
	system("pause");
	cout << endl;
}


void roundWin() {
	win = true;
	p.playerCash = p.playerCash + 10;

	cout << "Congradulations, you one this round!" << endl;
	cout << "Bank: $" << p.playerCash << endl;
}


void roundLoss() {
	win = false;

	cout << "Game Over." << endl;
	cout << "Final Score: $" << p.playerCash << endl;
}


void easyMode() {
	lowerBound = 1;
	upperBound = 10;

	randomNum(lowerBound, upperBound);

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
	upperBound = 15;

	randomNum(lowerBound, upperBound);

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
	upperBound = 20;

	randomNum(lowerBound, upperBound);

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
		do {
			easyMode();

			if (p.playerCash >= 30) {
				break;
			}

		} while (win == true);

		cout << "medium mode" << endl;
		system("pause");

		do {
			mediumMode();

			if (p.playerCash >= 100) {
				break;
			}

		} while (win == true);

		cout << "hard mode" << endl;
		system("pause");

		do {
			hardMode();
		} while (win == true);

	} while (win == true);

}