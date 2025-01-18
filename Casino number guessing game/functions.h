#include <iostream>
#include <cstdlib>
#include <ctime>

//Definition of the introduction function
void introduction() {
	using namespace std;

	cout << "Welcome to Bruce's casino." << endl;
	cout << "Here you will be guessing the number that the dealer has selected." << endl;
	cout << "If you get number correct you will be rewared with money." << endl;
	cout << "The more money that you have, the harder the game will get." << endl;
	system("pause");
}

//Definition of the genEasyNum funciton
void genEasyNum(int &x) {
	x = rand() % 10 + 1;
}

//Definition of the genMedNum function
void genMedNum(int &x) {
	x = rand() % 25 + 1;
}

//Definition of the genHardNum function
void genHardNum(int &x) {
	x = rand() % 50 + 1;
}
