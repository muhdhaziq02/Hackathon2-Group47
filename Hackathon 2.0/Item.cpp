#include "Item.h"

using namespace std;

Item::Item(const string& itemName, const string& itemType, int value)
    : itemName(itemName), itemType(itemType), itemValue(value) {}

const string& Item::getName() const {
    return itemName;
}

const string& Item::getType() const {
	return itemType;
}

int Item::getValue() const {
	return itemValue;
}

void Item::displayData () const
{
	
    cout << "Item: " << itemName << " (" << itemValue << ")"<< endl
		 << "Type: " << itemType <<  endl;
		 
	cout << endl;
}

