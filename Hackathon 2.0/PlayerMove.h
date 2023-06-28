#ifndef PLAYERMOVE_H
#define PLAYERMOVE_H

#include <iostream>
#include "Map.h"

using namespace std;

class GameMap;

class PlayerMove {
private:
    int x;
    int y;
    GameMap& map;

public:
    PlayerMove(GameMap& gameMap);
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void updateMap();
    int getX() const;
    int getY() const;
    void combatMode(); // Declaration of combatMode function
};

#endif
