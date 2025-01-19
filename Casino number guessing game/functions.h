#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "classes.h"
#pragma once

/*Global variables*/
int playerGuess;

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


//Definition of the introduction function
void introduction() {
	using namespace std;

	cout << "Please enter your name: " << endl;
	cin >> p.playerName;
	cout << endl;
	cout << "Welcome " << p.playerName << ", I am the dealer" << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "We will be playing a number guessing game." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "Each time you guess correctly you will be rewarded with some money." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "The more money you have, the harder the game will get." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "The harder the difficulty gets, you will be rewared with more money." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "Are you ready to play, " << p.playerName << "?" << endl;
	system("pause");
	cout << endl;
}

/*This will cycle through the different difficulty types.*/
void easyLoop() {
	using namespace std;
	int easyNum = rng.generateRandomNum(1, 10);

	//cout << easyNum << endl;

	cout << "Guess a number (1- 10): " << endl;
	cin >> playerGuess;
	cout << "The number is. . . " << easyNum << endl;

	if (playerGuess == easyNum) {
		cout << "You won" << endl;

		p.playerCash = p.playerCash + 5;
	}

	else if (playerGuess != easyNum) {
		cout << "You lose" << endl;
	}

}