#include "Point.h"

//Point::Point()
//{
//	coordX = 0;
//	coordY = 0;
//	coordZ = 0;
//}

//Point::Point(int _coordX, int _coordY, int _coordZ)
//{
//	coordX = _coordX;
//	coordY = _coordY;
//	coordZ = _coordZ;
//}

Point::Point(int _coordX, int _coordY, int _coordZ) :
		coordX{ _coordX },
		coordY{ _coordY },
		coordZ{ _coordZ }
{

}

void Point::PrintPoint()
{
	cout << "Here are the coordinates of the point: (" << coordX <<
		" , " << coordY << " , " << coordZ << ")" << endl;
}

Point::~Point()
{
	cout << "I'm dead" << endl;

}



