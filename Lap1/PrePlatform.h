#pragma once
#pragma once
#include <iostream>
#include <string>
#include "Platform.h"


class PrePlatform
{
private:
	int m_numOfPlat;
public:
	PrePlatform(int n)
	{
		m_numOfPlat = n;
	}
	PrePlatform()
	{
		m_numOfPlat = 1;
	}

	void ListOfPlat()
	{
		cout << "\nHow many games: ";
		cin >> m_numOfPlat;
		Platform* listOfPlatform = new Platform[m_numOfPlat];
	}
};