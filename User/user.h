#ifndef USER_H
#define USER_H

#include <utility>
#include <string>

using std::pair;
using std::string;

class User
{
	public:
    User(currentLoaction, userName, isBanned) : currentLoaction(currentLoaction), userName(userName), isBanned(isBanned) {}
    pair<int, int> getCurrentLocation() const;
    string getUserName() const;
    bool getIsBanned() const;
    void changeCurrentLocation(pair<int, int> newLocation);
    //void checkBanStatus();

	private:
		pair<int, int> currentLoaction;
        string userName;
        bool isBanned;
};

#endif // !USER_H
