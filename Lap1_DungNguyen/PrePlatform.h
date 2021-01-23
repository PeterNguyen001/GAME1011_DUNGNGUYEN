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
	Platform* m_listOfPlatform;
	
	PrePlatform(int n);

	PrePlatform();
	int getNum();

	void ListOfPlat();


};