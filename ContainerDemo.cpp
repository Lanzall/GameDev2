#include "ContainerDemo.h"
#include <iostream>
#include <vector>

using namespace std;

void ContainerDemo::DoDemo()
{
	VectorDemo();
}

void ContainerDemo::VectorDemo()	//Vector Container, is a dynamic array?
{
	std::vector<std::string> kojimaGames =
	{
		"Snatcher"
		"Metal Gear Solid"
		"Death Stranding"
		"P.T"
	};

	//Itterating with the array
	cout << "\n\nVector Container Demo \nKojima's Games\n";
	for (const auto& game : kojimaGames)
	{
		cout << "- " << game << "\n";
	}

	//Accessing a specific game
	cout << "\nFirst game: " << kojimaGames[0] << "\n";

}

//This was showing me a lot of trouble, I think I'll need to be working on this much more.