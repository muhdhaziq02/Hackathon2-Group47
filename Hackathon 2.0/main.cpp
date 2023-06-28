#include <iostream>
#include <string>
#include "GameManager.h"
#include "LinkedList.h"
#include "Enemy.h"
#include "Scenario.h"
#include "Map.h"
using namespace std;

// Function prototypes
void displayInstructions();
void showCredits();


int main() {
	
	// Main menu
	system("cls");
	cout << "==============================" << endl;
    cout << "        SISWA SIMULATOR       " << endl;
	cout << "==============================" << endl;
    cout << endl;
    cout << "Enter the following number to: \n";
    cout << "1. Start \n";
    cout << "2. Credits \n";
    cout << "3. Exit \n";
    cout << "> ";
	int menuControl;
    cin >> menuControl;

    while (menuControl !=1 && menuControl !=2 && menuControl!=3) // Input validation
    {
    	cout << "Invalid command. Please enter again.\n> ";
		cin >> menuControl;
	}

	
	if(menuControl==1)
    {
		displayInstructions();

    }
    else if(menuControl==2) 
    {
      	showCredits();
    	cout << "\n1. Back \n";
    	cout << "2. Exit \n";
    	cout << "> ";
    	cin >> menuControl;
    	if (menuControl == 1) return main();
    	else return 0;
    }
    else if(menuControl==3)
    {
       	return 0; // Exit game
    }
    
	system("pause");
	system("cls");
	Scenario SC;
	SC.storyPart1();
	GameManager GM;
	GM.createEnemies();
	GM.createItems();
	GM.movePlayer();
	system("cls");
	cout << "\t\tGAME OVER\nUSM students should never quit! Come and play again soon" << endl;

    return 0;
}

void displayInstructions()
{
		system("cls");
		cout << "\t\tSiswa Simulator" << endl;
		cout << "Discover the hidden gems and myths of the campus!" << endl;
		cout << "In this game, features are represented by symbols." << endl;
		cout << "@: You\nO: Target location\n?: Random encounter\n#: Past location(s)\n_: Unexplored location(s)\n";
		cout << "\nYou can move by entering your desired movement using the options:" << endl;
		cout << "up\ndown\nleft\nright\nend\n";
		cout << "You have to explore at least three of the special features to reach the end.\n";
		cout << "Head to the 'O' to reach the goal." << endl;
		cout << "Let's begin..."<<endl <<endl;
}

void showCredits()
{
	 system("cls");
  	  cout << "Siswa Simulator\n";
  	  cout << "Created by group 47\n";
  	  cout << "1. Muhammad Haziq bin Sazali\n2. Muhamamd Arfan bin Zuhaime\n3. Muhammad Haziq bin Mohamad Rodzali\n";
  	  cout << "Hackathon 2 CPT113 22/23\n";
   	 cout << "Programmed in C++ \n";
   	 cout << "We love Dr.Teh, Dr.Hana and Dr.Siti <3\n\n";
   	 system("pause");
}

