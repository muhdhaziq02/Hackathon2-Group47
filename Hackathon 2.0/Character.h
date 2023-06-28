#include<iostream>
using namespace std;

class Character{
public:
    Character(string name ,double health, double stamina, double magika)
        : name(name),health(health), stamina(stamina), magika(magika) {}


    void displayStats() const {
    	cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
        cout << "Stamina: " << stamina << endl;
        cout << "Magika : " << magika << endl;
    }

protected:
	string name;
    double health;
    double stamina;
    double magika;
};

