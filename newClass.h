#pragma once
class newClass
{
	static int staticvar;
	const int constvar;
public:
	newClass();
	static void setstatic(int x);
	newClass(int cv);
	void display() const;
};

