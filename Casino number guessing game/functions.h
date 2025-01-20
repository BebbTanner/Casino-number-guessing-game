#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "classes.h"
#pragma once



/*Global variables*/
int playerGuess, randomNum;
bool win;

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


void menu() {

}

void roundWin() {
	win = true;
	p.playerCash = p.playerCash + 5;

	cout << "Congradulations, you one this round!" << endl;
	cout << "Bank: $" << p.playerCash << endl;
}

void roundLoss() {
	win = false;

	cout << "You lost." << endl;
	cout << "Final Score: $" << p.playerCash << endl;
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

/*This will cycle through the different difficulty types.*/
void easyLoop() {
	srand(time(0));
	

	cout << "Please guess the number I have selected (1-10): " << endl;
	cin >> playerGuess;
	cout << endl;
}