#include "Platform.h"
#include "Games.h"
#ifndef PLATFORM_H
#define PLATFORM_H

Platform::Platform(string n, string m, int num)
{
	m_name = n;
	m_manufacturer = m;
	m_gamesNumber = num;
}

Platform::Platform()
{
	m_name = "N/A";
	m_manufacturer = "N/A";
	m_gamesNumber = 1;
}

string Platform :: getName()
{
	return m_name;
}

string Platform::getManufacturer()
{
	return m_manufacturer;
}

int Platform::getNumOfgame()
{
	return m_gamesNumber;
}

void Platform::setName()
{
	cout << "\nName of the game: ";
	getline(cin, m_name);
}

void Platform::setManufacturer()
{
	cout << "\nName of the manufacturer: ";
	getline(cin,m_manufacturer);
}

void Platform::setListOfGames()
{	

	cout << "\nHow many games: ";
	cin >> m_gamesNumber;
	Games* list_of_games = new Games[m_gamesNumber];
}

#endif 