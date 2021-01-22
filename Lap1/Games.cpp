#include "Platform.h"
#include "Games.h"
#ifndef GAMES_H
#define GAMES_H

Games::Games(string n, string d, string p, int num)
{
	m_name = n;
	m_devoloper = d;
	m_publisher = p;
	m_numOfAch = num;
}

Games::Games()
{
	m_name =      "N/A";
	m_devoloper = "N/A";
    m_publisher = "N/A";
    m_numOfAch  = 1;
}

string Games:: getName()
{
	return m_name;
}

string Games::getDev()
{
	return m_devoloper;
}

string Games::getpub() 
{
	return m_publisher;
}

int Games::getNum()
{
	return m_numOfAch;
}

void Games::setName()
{
	cout << "\nName of the achievement: ";
	getline(cin, m_name);
}

void Games::setDev()
{
	cout << "\nName of the devoloper: ";
	getline(cin, m_devoloper);
}

void Games::setpub()
{
	cout << "\nName of the publisher: ";
	getline(cin, m_publisher);
}

void Games:: setNum()
{
	cout << "\nHow many achievements: ";
	cin >> m_numOfAch;
	Platform* listOfArc = new Platform[m_numOfAch];
}

#endif
