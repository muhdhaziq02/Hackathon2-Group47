#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item
{
	private:
		string itemName;
		string itemType;
		
		//if sword, deal that much damage, if shield, block that much value, if potion, heal that much value etc..
		int itemValue; 
		
		
	public:
		Item(const string& itemName, const string& itemType, int itemValue);
		const string &getName() const;
		const string &getType() const;
		int getValue() const;
		void displayData() const;
};

#endif
