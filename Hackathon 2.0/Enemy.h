#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

using namespace std;

class Enemy {
private:
    string name;
    int health;
    int attackPower;

public:
    Enemy(const string& enemyName, int enemyHealth, int enemyAttackPower);

    const string &getName() const;
    int getHealth() const;
    int getAttackPower() const;
    void displayData() const;
};
#endif
