#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

class playerInfo {
public:
	int playerCash;
	string playerName;
};

//Global objects
playerInfo p;