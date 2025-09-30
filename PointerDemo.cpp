#include "PointerDemo.h"
#include <iostream>
#include <string>

using namespace std;

void PointerDemo::DoDemo()
{
	int moviesReferenced = 97;
	int feetScanned = 42;
	std::cout << "Demo Working";
	cFirstName = "John";
	cLastName = "Kojimbo";
	PassByValueDemo(moviesReferenced, feetScanned);
	PassByRefDemo(moviesReferenced, feetScanned);
	UsePointersDemo();
	MemLeakDemo();

}
void PointerDemo::PassByValueDemo(int one, int two)
{
	std::cout << "PassedByValue?";
}
void PointerDemo::PassByRefDemo(int& one, int& two)
{
	cFirstName = "Hideo";
	cout << "My name is" << cFirstName << " " << cLastName << ", creator of the " << cFirstName << "game!" << endl;
}
void PointerDemo::UsePointersDemo()
{

}
void PointerDemo::MemLeakDemo()
{

}