// Classes ( static and const variables ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "newClass.h"
int main()
{
	newClass::setstatic(5);
	newClass arry[4];
	for (int i = 0; i < 4; i++)
	{
		arry[i].setstatic(i + 12);
		arry[i].display();
	}
	newClass n1(5);
	n1.display();
	newClass n2(2);
	n2.display();
	newClass n3(7);
	n3.display();
	const newClass n4(9);
	n4.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
