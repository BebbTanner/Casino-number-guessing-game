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

//Definition of the generateNum function
void generateNum(int &x, int &y, int &z) {
	using namespace std;
	srand(time(0));

	x = rand() % 11;
	y = rand() % 26;
	z = rand() % 101;

}
