#include "Map.h"
#include "PlayerMove.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int GameMap::encounterCount = 0; // Initialize the static member variable

GameMap::GameMap() {
    head = NULL;
    size = 7;
    placeExit();
}

GameMap::~GameMap() {
    // Clean up dynamically allocated nodes
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void GameMap::addNode(int x, int y, bool hasEncounter) {
    if (x >= size || y >= size) {
        cout << "Invalid coordinates. Node position exceeds map size." << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->x = x;
    newNode->y = y;
    newNode->hasEncounter = hasEncounter;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}


void GameMap::placeExit() {
    exitX = rand() % size; // Generate random x coordinate for exit
    exitY = rand() % size; // Generate random y coordinate for exit
}

void GameMap::printMap() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            bool nodeFound = false;
            Node* current = head;

            while (current != NULL) {
                if (current->x == i && current->y == j) {
                    nodeFound = true;
                    break;
                }
                current = current->next;
            }

            if (i == exitX && j == exitY) {
                cout << " O "; // Print exit marker
            } else if (!nodeFound) {
                cout << " _ "; // Print empty space
            } else if (current->hasEncounter) {
                cout << " ? "; // Print encounter marker
            } else {
                cout << " # "; // Print regular node marker
            }
        }
        cout << endl;
    }
}

bool GameMap::isExit(int x, int y) {
    return (x == exitX && y == exitY);
}

void GameMap::printMapWithPlayer(int playerX, int playerY) {
		
			
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            bool nodeFound = false;
            Node* current = head;

            while (current != NULL) {
                if (current->x == i && current->y == j) {
                    nodeFound = true;
                    break;
                }
                current = current->next;
            }

            if (i == playerX && j == playerY) {
                cout << " @ ";
            } else if (i == exitX && j == exitY) {
                cout << " O ";
            } else if (!nodeFound) {
                cout << " _ ";
            } else if (current->hasEncounter) {
                cout << " ? ";
            } else {
                cout << " # ";
            }
        }
        cout << endl;
   		}
    	if (isExit(playerX, playerY)) 
    		{
    			if (encounterCount >= 3){ // Player has reached the exit with at least three encounters discovered
				cout << "\nCongratulations! You have reached the exit." << endl;
				system("pause");
				system("cls");
				cout << "\n\nYou: Ahh finally, I have reached Desasiswa Tekun." <<endl;
				cout << "USM is sure full of surprises. I can't believe it's real!" << endl;
				cout << "I hope I won't encounter the creepy stuff again..." << endl;
				system("pause");
				cout << "\n\nI'm so tired right now. I should get some rest and engulf everything that happened today." << endl;
				cout << "It was indeed a very good day..." << endl<<endl;
				system("pause");
				cout << "\n\nTHE END" << endl << endl;
				system("pause");	
				system("cls");
       			exit(0);
    			}
    			else
    			{
    			// Player has reached the exit but hasn't discovered enough encounters
    			cout << "You have to discover at least three features to reach the end.\n";
    			cout << "Please continue exploring." << endl;
				}
			}
}

int GameMap::getSize() {
    return size;
}

GameMap::Node* GameMap::getNode(int x, int y) {
    Node* current = head;
    while (current != NULL) {
        if (current->x == x && current->y == y) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}


