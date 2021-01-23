#include "Platform.h"
#ifndef PLATFORM_H
#define PLATFORM_H

Platform::Platform(string n, string m, int num)
{
	cout << "\ncreating platform";
	m_name = n;
	m_manufacturer = m;
	m_numOfGame = num;
}

Platform::Platform()
{
	m_name = "N/A";
	m_manufacturer = "N/A";
	m_numOfGame = 1;
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
	return m_numOfGame;
}

void Platform::setName()
{
	cout << "\nName of the platform: ";
	getline(cin, m_name);
}

void Platform::setManufacturer()
{
	cout << "\nName of the manufacturer: ";
	getline(cin,m_manufacturer);
}

void Platform::setListOfGames()
{	

	cout << "\nNumber of games: ";
	cin >> m_numOfGame;
	m_listOfGames = new Games[m_numOfGame];
}

#endif 