#ifndef BANK_H
#define BANK_H

#include <map>
#include "../Item/item.h"

using std::map;

class Bank
{
	public:
		Bank(long userID) : userID(userID) {}
		map<int, int> getUserBank() const;
		pair<int, int> getFromBank();
		pair<int, int> getXFromBank(int x);
		int getMoney(int amount);
		void insertIntoBank(pair<int, int> itemToInsert);
		void insertInventIntoBank(map<int, int> itemsInInventory);
		void depositMoney(int amount);
	private:
		long userID;
};

#endif
