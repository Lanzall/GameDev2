#pragma once
#include <iostream>
#include <string>
class PointerDemo
{
	public:
		std:: string cFirstName;
		std:: string cLastName;
		void DoDemo();
	private:
		void PassByValueDemo(int one, int two);	//nothing
		void PassByRefDemo(int& one, int& two);	//&
		void UsePointersDemo();	//* pointer
		void MemLeakDemo();		//

	

};

