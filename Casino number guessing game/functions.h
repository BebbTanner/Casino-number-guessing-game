#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include "classes.h"


//Definition of the introduction function
void introduction() {
	using namespace std;
	playerInfo p;

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
void genEasyNum(int &x) {
	srand(time(0));
	x = rand() % 10 + 1;
}

//Definition of the genMedNum function
void genMedNum(int &x) {
	srand(time(0));
	x = rand() % 25 + 1;
}

//Definition of the genHardNum function
void genHardNum(int &x) {
	srand(time(0));
	x = rand() % 50 + 1;
}
