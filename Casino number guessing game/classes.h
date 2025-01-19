#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

//I did not realize that I could create a global object. This will make my life so much easier.


class playerInfo {
public:
	int playerCash;
	string playerName;
};

class randomNum {
public:
	randomNum() {
		int seed;
		seed = time(0);
		srand(seed);
	}

	int generateRandomNum(int min, int max) {
		return min + rand() % (max - min + 1);
	}

};

//Global objects
playerInfo p;
randomNum rng;