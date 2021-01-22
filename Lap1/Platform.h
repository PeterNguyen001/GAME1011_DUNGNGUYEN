#pragma once
#include <iostream>
#include <string>

using namespace std;
class Platform 
{
private:
	string m_name;
	string m_manufacturer;
	int m_gamesNumber;

public:
	Platform();

	Platform(string n, string manuName, int g);

	void setName();

	void setManufacturer();

	void setListOfGames();
	

	string getName();

	string getManufacturer();

	int getNumOfgame();

	string getListOfGame();

	string getAlldata();

};