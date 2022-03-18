#ifndef BANK_H
#define BANK_H

#include <map>
#include "../Item/item.h"
#include "../User/internalUserModf.h"

using std::map;

class Bank
{
	public:
		Bank(User* bankingUser) : bankingUser(bankingUser) {}
		map<int, int> getUserBank() const;
		pair<int, int> getFromBank(string itemName);
		pair<int, int> getXFromBank(int x);
		int getMoney(int amount);
		void insertIntoBank(pair<int, int> itemToInsert);
		void insertInventIntoBank(map<int, int> itemsInInventory);
		void depositMoney(int amount);
	private:
		User* bankingUser;
};

#endif
