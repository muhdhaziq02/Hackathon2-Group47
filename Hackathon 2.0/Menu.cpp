#include <iostream>
#include <stdlib.h>
#include <string>
//#include "Level1.h"
#include "Menu.h"
#include "Player.h"
//#include "Goblin.h"
using namespace std;

Menu::Menu()
{

}

void Menu::showMenu()
{
    getline(cin,menuControl);
    while(menuControl!="1" && menuControl!="2" && menuControl!="3")
    {
        cout << "Invalid command \n";
        getline(cin,menuControl);
    }

    if(menuControl=="1")
    {
         //start game
        showInstructions();
    }

    if(menuControl=="2")
    {
        showCredits();
    }

    if(menuControl=="3")
    {
       break; //exit game
    }

}

void Menu::showInstructions()
{
	system("cls");
	cout << "\t\tThe Walking Sadeed" << endl;
	cout << "In this game, features are represented by symbols." << endl;
	cout << "@: Sadeed(you)\nO: Target state\n?: Random encounter\n#: Past state(s)\n_: Unexplored state(s)\n";
	cout << "You can move by entering your desired movement using the given options" << endl;
}

void Menu::showCredits()
{
    system("cls");
    cout << "The Walking Sadeed\n";
    cout << "Created by group 47\n";
    cout << "1. Muhammad Haziq bin Sazali\n2. Muhamamd Arfan bin Zuhaime\n3. Muhammad Haziq bin Mohamad Rodzali\n";
    cout << "Hackathon 2 CPT113 22/23\n";
    cout << "Programmed in C++ \n";
    cout << "We love Dr.Teh, Dr.Hana and Dr.Siti <3\n";
    system("pause");
    system("cls");
    cout << "                              The Walking Sadeed" << endl;
    cout << endl;
    cout << "Type following number to: \n";
    cout << "1. Start \n";
    cout << "2. Credits \n";
    cout << "3. Exit \n";
    cout << "> ";
    showMenu();
}
