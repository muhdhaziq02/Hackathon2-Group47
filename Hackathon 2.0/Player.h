#include<iostream>
#include"Character.h"
using namespace std;

class Player : public Character {
public:
    Player(string name,double health, double stamina, double magika)
        : Character(name,health, stamina, magika) {}

    void useAbility() {
        // Add player-specific ability logic here
        cout << "Player uses ability!" << endl;
    }
    
    
    
    
//    void playerStats(){
//    	cout<<"Health : "<<health<<endl;
//    	cout<<"Stamina : "<<stamina<<endl;
//    	cout<<"Magika : "<<magika<<endl;
//
//	}
};

//#ifndef PLAYER_H
//#define PLAYER_H
//
//#include <string>
//
//class Player {
//public:
//    string name;
//    int health;
//    int level;
//
//    Player(string name = "Player");
//
//};
//
//#endif // PLAYER_H
