#include "PlayerMove.h"
#include "Map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

PlayerMove::PlayerMove(GameMap& gameMap) : map(gameMap) {
    srand(time(NULL));  // Seed the random number generator
    x = rand() % map.getSize();  // Assign random x coordinate to member variable
    y = rand() % map.getSize();  // Assign random y coordinate to member variable
    
    // Add random encounters to the map
    int numEncounters = 0;
    while (numEncounters < 7) {
        int encounterX = rand() % map.getSize();
        int encounterY = rand() % map.getSize();
        if (encounterX != x && encounterY != y) {
            map.addNode(encounterX, encounterY, true);
            numEncounters++;
        }
    }
}




void PlayerMove::moveUp() {
    if (x > 0) {
        x--;
        updateMap();
    }
}

void PlayerMove::moveDown() {
    if (x < map.getSize() - 1) {
        x++;
        updateMap();
    }
}

void PlayerMove::moveLeft() {
    if (y > 0) {
        y--;
        updateMap();
    }
}

void PlayerMove::moveRight() {
    if (y < map.getSize() - 1) {
        y++;
        updateMap();
    }
}

void PlayerMove::updateMap() {
    GameMap::Node* node = map.getNode(getX(), getY());

    map.addNode(getX(), getY(), false); // Mark the current location as visited
}






int PlayerMove::getX() const {
    return x;
}

int PlayerMove::getY() const {
    return y;
}







