#include <iostream>
#include <string>
#include <ctime>
#include "GameManager.h"
#include "Map.h"
#include "PlayerMove.h"
#include "Enemy.h"

using namespace std;

GameManager::GameManager() : player(gameMap) {}

// Object for player movement
void GameManager::movePlayer() {
    cout << "Welcome to Siswa Simulator!" << endl;
    system("pause");
	gameMap.printMapWithPlayer(player.getX(), player.getY()); // Print initial map with player

    string move;
    cout << "Pick a move: ";
    cout << "\n- up\n- down\n- left\n- right\n- end\n";
    cout << "Your choice: ";
    cin >> move; // Input move
    
    // Movements
    while (move != "end") {
        if (move == "up") {
        	cout << "Moving up..." << endl;
        	system("pause");  // Pauses the terminal screen
        	system("cls");
            player.moveUp();
        } else if (move == "down") {
        	cout << "Moving down..." << endl;
        	system("pause");  // Pauses the terminal screen
        	system("cls");
            player.moveDown();
        } else if (move == "left") {
        	cout << "Moving left..." << endl;
        	system("pause");  // Pauses the terminal screen
        	system("cls");
            player.moveLeft();
        } else if (move == "right") {
        	cout << "Moving right..." << endl;
        	system("pause");  // Pauses the terminal screen
        	system("cls");
            player.moveRight();
        } else {
            cout << "Invalid move. Please try again." << endl;
            system("pause");  // Pauses the terminal screen
        }

        gameMap.printMapWithPlayer(player.getX(), player.getY());

        if (gameMap.getNode(player.getX(), player.getY())->hasEncounter) {
		    encounterRandomizer();
		}
		
        cout << "Enter a move: ";
        cin >> move;
    }

    cout << "\nUpdated Map:\n";
    gameMap.printMap();
}

void GameManager::combatMode() { // For scary features

    // Display scary information
    cout << "A menacing figure looms in the shadows..."<< endl;
    system("pause");

    // Search for the scary feature and print its data
    cout << "\nOh no! You encountered\n";
    enemyList.searchNode(enemyRandomizer());
    GameMap::encounterCount +=1;
}

void GameManager::createEnemies() {
    // Create enemy objects (scary features)
    Enemy goblin("Askar Jepun", 450, 50);
    Enemy skeleton("Locker Boy", 150, 35);
    Enemy dragon("Biawak", 65, 25);

    // Append enemies to the linked list
    enemyList.appendNode(goblin);
    enemyList.appendNode(skeleton);
    enemyList.appendNode(dragon);
    
    
    // Calculate the total number of enemies created
    enemiesCreated = 0; // Start with the initial enemies created (3 in this case)
    enemiesCreated += enemyList.getLength();
}

void GameManager::createItems() {
    // Create enemy objects
    Item Excalibur("Beam!", "Scooter", 40);
    Item AthenaShield("Ayam goreng Indah Kembara", "Cafe", 10);
    Item HealingPotion("Subaidah", "Restaurant", 20);

    // Append enemies to the linked list
    itemList.appendNode(Excalibur);
    itemList.appendNode(AthenaShield);
    itemList.appendNode(HealingPotion);
    
    
    // Calculate the total number of enemies created
    itemsCreated = 0; // Start with the initial enemies created (3 in this case)
    itemsCreated += itemList.getLength();
}

void GameManager::displayEnemies() {
    // Display all enemies in the linked list
    enemyList.displayList();
}

void GameManager::displayItems() {
    // Display all items in the linked list
    itemList.displayList();
}

string GameManager::enemyRandomizer(){
	
	// Seed the random number generator
    srand(time(nullptr));
	
	// Generate a random number 
    int randomNumber = rand() % enemiesCreated + 1;
    if (randomNumber == 1)
    {
    	return "Askar Jepun";
	}
	else if (randomNumber == 2)
	{
		return "Locker Boy";
	}
	else if (randomNumber == 3)
	{
		return "Biawak";
	}
}

string GameManager::itemRandomizer(){
	
	// Seed the random number generator
    srand(time(NULL));
	
	// Generate a random number
    int randomNumber = rand() % itemsCreated + 1;
    if (randomNumber == 1)
    {void foundItem();
    	return "Beam";
	}
	else if (randomNumber == 2)
	{
		return "Subaidah";
	}
	else if (randomNumber == 3)
	{
		return "Bukit Cinta";
	}
}

void GameManager::encounterRandomizer(){
	
	
	//Seed the random number generator
    srand(time(NULL));
    
     //Generate a random number
    int randomNumber = rand() % 10 + 1;
    
    if (randomNumber <=5)
    {
    	combatMode();
    }
    else
    {
		foundItem();
	}
}

void GameManager::foundItem(){
	
    // Display item information
    cout << "Behold, a legendary treasure emerges from the shadows!"<< endl;
    system("pause");

    // Search for the enemy and print its data
    cout << "\nYou discovered \n";
    itemList.searchNode(itemRandomizer());
    GameMap::encounterCount +=1;

}



