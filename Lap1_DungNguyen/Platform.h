#pragma once
#include <iostream>
#include <string>

#include "Games.h"

using namespace std;
class Platform 
{
private:
	string m_name;
	string m_manufacturer;
	int m_numOfGame;

public:
	Games* m_listOfGames;
	
	Platform();

	Platform(string n, string manuName, int g);

	void setName();

	void setManufacturer();

	void setListOfGames();
	

	string getName();

	string getManufacturer();

	int getNumOfgame();

	string getListOfGame();



};