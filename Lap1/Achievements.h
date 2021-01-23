#pragma once
#include <iostream>
#include <string>
using namespace std;
class Achievements
{
private:
	string m_name;
	string m_description;
public:
	Achievements(string n, string d);
	Achievements();
	string getName();
    string getDes();
	void setName();
	void setDes();
};

