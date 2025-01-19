#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "classes.h"
#pragma once

/*Global variables*/
int playerGuess, easyNum, medNum, hardNum;


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


//Definition of the genEasyNum funciton
void easyMode() {
	using namespace std;
	srand(time(0));
	easyNum = 1; //rand() % 10 + 1;


	cout << "The dealer has generated a number." << endl;
	cout << "Please guess a number (1-10): " << endl;
	cin >> playerGuess;
	cout << endl;

	if (playerGuess == easyNum) {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . ";
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "Congradulations, you won this round!" << endl;

		p.playerCash = p.playerCash + 5;
	}
	else {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . ";
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "You lost." << endl;
	}

	cout << endl;

}


//Definition of the genMedNum function
void mediumMode() {
	using namespace std;
	srand(time(0));
	medNum = 1;//rand() % 25 + 1;

	cout << "The dealer has generated a number." << endl;
	cout << "Please guess a number (1-25): " << endl;
	cin >> playerGuess;
	cout << endl;

	if (playerGuess == easyNum) {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . ";
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "Congradulations, you won this round!" << endl;

		p.playerCash = p.playerCash + 10;

	}
	else {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . ";
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "You lost." << endl;
	}

	cout << endl;
}


//Definition of the genHardNum function
void hardMode() {
	using namespace std;
	srand(time(0));
	hardNum = 1; //rand() % 50 + 1;

	cout << "The dealer has generated a number." << endl;
	cout << "Please guess a number (1-50): " << endl;
	cin >> playerGuess;
	cout << endl;

	if (playerGuess == easyNum) {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . ";
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "Congradulations, you won this round!" << endl;

		p.playerCash = p.playerCash + 20;
	}
	else {
		cout << "Your number is: " << playerGuess << endl;
		cout << "The dealer number is. . . ";
		this_thread::sleep_for(chrono::seconds(3));
		cout << easyNum << endl;
		cout << "You lost." << endl;
	}

	cout << "Current cash: $" << p.playerCash << endl;

	cout << endl;
}


