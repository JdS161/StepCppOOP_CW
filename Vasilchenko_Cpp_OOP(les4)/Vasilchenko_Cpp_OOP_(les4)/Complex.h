#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:

	int real; //real
	int img; //img

	static int counter;

public:
	//Complex(int =0, int=0);
	Complex(int, int);
	Complex(const Complex&);

	//setters
	void SetA(int _a)
	{
		this->real = _a;
	}
	void SetB(int _b)
	{
		this->img = _b;
	}
	//getters
	int GetA()
	{
		return real;
	}
	int GetB()
	{
		return img;
	}

	static int GetCounter()
	{
		return counter;
	}

	const char* ToString();

	~Complex();
};
