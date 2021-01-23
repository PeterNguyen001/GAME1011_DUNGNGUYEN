#include "Achievements.h"

using namespace std;

Achievements::Achievements(string n, string d)
{
	m_name = n;
	m_description = d;
}

Achievements::Achievements()
{
	m_name = "N/A";
	m_description = "N/A";
}

string Achievements::getName()
{
	return m_name;
}

string Achievements::getDes()
{
	return m_description;
}

void Achievements::setName()
{
	cin.ignore();
	cout << "\nName of the achievements: ";
	getline(cin, m_name);
}

void Achievements::setDes()
{
	cout << "\nDesciption of the achievements: ";
	getline(cin, m_description);
}
