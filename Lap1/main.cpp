#include <iostream>
#include <string>
#include "PrePlatform.h"
#include "Games.h"
#include "Platform.h"
#include "PrePlatform.h"


using namespace std;


int main()
{

	PrePlatform platList;
	platList.ListOfPlat();
	for( int i = 0; i < platList.getNum();i++)//setting up platform
	{
		platList.m_listOfPlatform[i].setName();
		platList.m_listOfPlatform[i].setManufacturer();
		platList.m_listOfPlatform[i].setListOfGames();
		
		for (int j = 0; j < platList.m_listOfPlatform[i].getNumOfgame();j++)// setting up game
		{
			platList.m_listOfPlatform[i].m_listOfGames[j].setName();
			platList.m_listOfPlatform[i].m_listOfGames[j].setDev();
			platList.m_listOfPlatform[i].m_listOfGames[j].setpub();
			platList.m_listOfPlatform[i].m_listOfGames[j].setNum();
			
			for(int k=0; k < platList.m_listOfPlatform[i].m_listOfGames[j].getNum();k++)//setting up achievement
			{
				platList.m_listOfPlatform[i].m_listOfGames[j].m_listOfArc[k].setName();
				platList.m_listOfPlatform[i].m_listOfGames[j].m_listOfArc[k].setDes();
			}
		}
	}
	
	for (int i = 0; i < platList.getNum(); i++)//Printing platforms
	{
		cout << "\nPlatform "+ to_string(i) + ": " + platList.m_listOfPlatform[i].getName();
		cout << "\nManufacturer: " + platList.m_listOfPlatform[i].getManufacturer();
		cout << "\nAmount of games: " + to_string(platList.m_listOfPlatform[i].getNumOfgame());
		
		for (int j = 0; j < platList.m_listOfPlatform[i].getNumOfgame(); j++)// Printing games
		{
			cout << "\nGames " + to_string(j) + ": " + platList.m_listOfPlatform[i].m_listOfGames[j].getName();
			cout << "\nDeveloper: " + platList.m_listOfPlatform[i].m_listOfGames[j].getDev();
			cout << "\nPublisher: " + platList.m_listOfPlatform[i].m_listOfGames[j].getPub();
			cout << "\nAmount of achievements: " + to_string(platList.m_listOfPlatform[i].m_listOfGames[j].getNum());
			
			for (int k = 0; k < platList.m_listOfPlatform[i].m_listOfGames[j].getNum(); k++) //Printing achievements
			{
				cout <<"\nAchievements " + to_string(k) + ": "+ platList.m_listOfPlatform[i].m_listOfGames[j].m_listOfArc[k].getName();
				cout << "\nDescription " + to_string(k) + ": " + platList.m_listOfPlatform[i].m_listOfGames[j].m_listOfArc[k].getDes();
			}
		}
	}
	delete[] platList.m_listOfPlatform;
	return 0;


}


