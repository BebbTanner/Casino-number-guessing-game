#include <string>
using namespace std;

class playerInfo {
public:
	int playerCash;
	string playerName;
};

//I did not realize that I could create a global object. This will make my life so much easier.
playerInfo p;