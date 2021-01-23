#include "PrePlatform.h"

PrePlatform:: PrePlatform(int n)
{
	m_numOfPlat = n;
}
PrePlatform::PrePlatform()
{
	m_numOfPlat = 1;
}

int PrePlatform::getNum()
{
	return m_numOfPlat;
}

void PrePlatform::ListOfPlat()
{
	cout << "\nNumber of platforms: ";
	cin >> m_numOfPlat;
	m_listOfPlatform = new Platform[m_numOfPlat];
	
}

