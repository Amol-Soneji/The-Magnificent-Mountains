#ifndef ITEM_H
#define ITEM_H

#include <../DB/dbAccess.h>

class Item
{
	public:
		Item(int ID, string name, bool stackable) : ID(ID), name(name), stackable(stackable) {}
		int getItemID() const;
		string getItemName() const;
		bool isItemStackable() const;
		int getItemValue();
	private:
		int ID;
		string name;
		bool stackable;
};

#endif