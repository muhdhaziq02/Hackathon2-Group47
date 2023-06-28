#ifndef MAP_H
#define MAP_H

#include <iostream>
#include "PlayerMove.h"

class GameMap {
public:
    struct Node {
        int x;
        int y;
        bool hasEncounter;
        Node* next;
        bool isExit(int x, int y);
    };

private:
    Node* head;
    int size;
    int exitX;
    int exitY;

public:
    GameMap();
    ~GameMap();
    static int encounterCount; // Static member variable for encounter count
    void addNode(int x, int y, bool hasEncounter);
    void placeExit();
    void printMap();
    void printMapWithPlayer(int playerX, int playerY);
    bool isExit(int x, int y);
    Node* getNode(int x, int y);
    int getSize();
};

#endif

