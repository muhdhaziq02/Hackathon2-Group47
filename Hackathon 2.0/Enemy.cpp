#include "Enemy.h"

using namespace std;

Enemy::Enemy(const string& enemyName, int enemyHealth, int enemyAttackPower)
    : name(enemyName), health(enemyHealth), attackPower(enemyAttackPower) {}

const string& Enemy::getName() const {
    return name;
}

int Enemy::getHealth() const {
    return health;
}

int Enemy::getAttackPower() const {
    return attackPower;
}
//display scary features (enemy) data
void Enemy::displayData() const {
	
    cout << "Name: " << name << endl
		 << "Age: " << health << endl
		 << "Danger level: " << attackPower << endl;
		 
	cout << endl;
}



