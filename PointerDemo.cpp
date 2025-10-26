#include "PointerDemo.h"
#include <iostream>
#include <string>

using namespace std;

void PointerDemo::DoDemo()
{
	int moviesReferenced = 97;
	int feetScanned = 42;
	std::cout << "Demo Working";
	std::string cFirstName = "John";
	std::string cLastName = "Kojimbo";
	PassByValueDemo(moviesReferenced, feetScanned);
	PassByRefDemo(cFirstName, cLastName);
	UsePointersDemo();
	

	MemLeakDemo();

}
void PointerDemo::PassByValueDemo(int one, int two)
{
	std::cout << "\n\nPassed by value:";
	std::cout << "\nMovies Referenced: " << one;
	std::cout << "\nFeet Scanned: " << two;
}
void PointerDemo::PassByRefDemo(string &cFirstName, string &cLastName)
{
	cFirstName = "Hideo";
	std::cout << "\n\nPassed by Ref:";
	std::cout << "\nMy name is " << cFirstName << " " << cLastName << ", creator of the " << cFirstName << "game!" << endl;
}
void PointerDemo::UsePointersDemo()
{
	std::string favDirector = "George Miller";
	std::string* pointer = &favDirector;

	std::cout << "\n\nUsing Pointers Demo:";
	cout << "\nKojima's favourite director is " << favDirector << "\n(The adress for that string was " << pointer << ")";
}
void PointerDemo::MemLeakDemo()
{

}