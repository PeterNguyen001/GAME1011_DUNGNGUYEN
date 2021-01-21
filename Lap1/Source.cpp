#include <iostream>
#include <string>

using namespace std;


//class Platform 
//{
//private:
//	string m_name;
//	string m_manufacturer;
//	int m_gamesNumber;
//	string m_listOfGames[];
//public:
//	Platform()
//	{
//		m_name = "N/A";
//		m_manufacturer = "N/A";
//		m_gamesNumber = 1;
//		m_listOfGames[1];
//	}
//	Platform(string n, string manuName, int g)
//	{
//		m_name = n;
//		m_manufacturer = manuName;
//		m_gamesNumber = g;
//	}
//	void setName(string n)
//	{
//		m_name = n;
//	}
//	void setManufacturer(string manuName)
//	{
//		m_manufacturer = manuName;
//	}
//	void setLisistOfGames(int g)
//	{
//		m_gamesNumber = g;
//		m_listOfGames[m_gamesNumber];
//	}
//	string getName()
//	{
//		return m_name;
//	}
//	string getManufacturer()
//	{
//		return m_manufacturer;
//	}
//	int getNumOfgame()
//	{
//		return m_gamesNumber;
//	}
//
//	string* getListOfGame()
//	{
//		return m_listOfGames;
//	}
//	string getAlldata()
//	{
//		string data = "\n " + getName() + " is a platform from " + getManufacturer() + ", they has " + to_string(getNumOfgame()) + " game. ";
//		return data;
//	}
//};

class Games 
{
private:
	string m_name;
	string m_publisher;
	string m_devoloper;
	string m_listOfAchievements[];
public:
	
};


int main()
{
	string name;
	int num;
	Platform plat;
	cout << "\n Please do not put any blank in the input";
	cout << "\n What the name of this platform: ";
	cin >> name;
	plat.setName(name);
	cout << "\n Who is the manufacturer of this platform: ";
	cin >> name;
	plat.setManufacturer(name);
	cout << "\n How many game you want for this platform:";
	cin >> num;
	plat.setLisistOfGames(num);
	cout << plat.getAlldata();
	return 0;
}


