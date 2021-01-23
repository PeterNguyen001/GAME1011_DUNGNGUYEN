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
	for(int i = 0; i < sizeof(platList.m_listOfPlatform);i++)
	{
		platList.m_listOfPlatform[i].setName();
		platList.m_listOfPlatform[i].setManufacturer();
	}
	return 0;


}


