#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Point
{
private:
	int coordX;
	int coordY;
	int coordZ;


public:
	//Point();
	//default constructor without preset values (returns garbage):
	//Point(int, int, int);
	//default constructor with preset values 9returns preset values):
	Point(int =0, int =0, int=0);


	//getters
	int GetPointX()
	{
		return coordX;
	}
	int GetPointY()
	{
		return coordY;
	}
	int GetPointZ()
	{
		return coordZ;
	}


	//setters
	void SetPointX(int _coordX)
	{
		coordX = _coordX;
	}
	void SetPointY(int _coordY)
	{
		coordY = _coordY;
	}
	void SetPointZ(int _coordZ)
	{
		coordZ = _coordZ;
	}

	void PrintPoint();


	~Point();
};

