#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Map.h"
#include "PlayerMove.h"
#include "Enemy.h"
#include "Item.h"
#include "LinkedList.h"
#include "Map.h"

class GameManager {
private:
    GameMap gameMap;
    PlayerMove player;
    int enemiesCreated;
    int itemsCreated;
    LinkedList<Enemy> enemyList;
	LinkedList<Item> itemList;

public:
    GameManager();
    void movePlayer();
    
    void encounterRandomizer();
    
    string itemRandomizer();
    string enemyRandomizer();
    
    void combatMode();
    void foundItem();
    
    void createEnemies();
    void createItems();
    
    void displayEnemies();
    void displayItems();
};

#endif

