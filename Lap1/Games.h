#pragma once
#include <iostream>
#include <string>

using namespace std;

class Games
{
private:
	string m_name;
	string m_publisher;
	string m_devoloper;
	int m_numOfAch;
public:

	Games(string n, string d, string p, int num);
	Games();
	string getName();


	string getDev();


	string getpub();

		
	int getNum();
	void setName();
	void setDev();
	void setpub();
	void setNum();
};