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
	std::cout << "\nPassedByValue?";
}
void PointerDemo::PassByRefDemo(string &cFirstName, string &cLastName)
{
	cFirstName = "Hideo";
	cout << "\nMy name is " << cFirstName << " " << cLastName << ", creator of the " << cFirstName << "game!" << endl;
}
void PointerDemo::UsePointersDemo()
{

}
void PointerDemo::MemLeakDemo()
{

}