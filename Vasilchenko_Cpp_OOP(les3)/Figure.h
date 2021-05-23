#pragma once
#include <iostream>
#include <iomanip>


#include "Point.h"


enum FigureType
{
	none		= 0,
	dot			= 1,
	line		= 2,
	triangle	= 3,
	tetragon	= 4,
	polygon		= 5	
};

using namespace std;



class Figure
{
private:
	Point*			points;
	int				pointsCount;
	FigureType		type;


public:
	Figure(int = 0);
	~Figure();

	void Print();

};
