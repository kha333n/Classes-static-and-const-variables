#include "newClass.h"
#include <iostream>
using namespace std;

newClass::newClass(): constvar(0)
{
}

void newClass::setstatic(int x)
{
	staticvar = x;
}
newClass::newClass(int cv) :constvar(cv)
{
	staticvar++;
}

void newClass::display() const
{
	cout << "static variable: " << staticvar << endl << "constant variable: " << constvar << endl;
}

int newClass::staticvar = 0;