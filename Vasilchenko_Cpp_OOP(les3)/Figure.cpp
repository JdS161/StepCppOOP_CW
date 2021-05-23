#include "Figure.h"

Figure::Figure(int _pointsCount) : pointsCount(_pointsCount)
{
	
	if (_pointsCount < 0)
	{
		cout << "Negative quantity of points is not allowed";
		return;
	}
	if (_pointsCount == 0)
	{
		points = NULL;
		return;
	}
	points = new Point[pointsCount];

	type =  _pointsCount == 0 ? FigureType::none :
			_pointsCount == 1 ? FigureType::dot :
			_pointsCount == 2 ? FigureType::line :
			_pointsCount == 3 ? FigureType::triangle :
			_pointsCount == 4 ? FigureType::tetragon:
			FigureType::polygon;
}

Figure::~Figure()
{
	if (points!= NULL)
	{
		delete[] points;
		cout << "Figure has been deleted!\n (points " << pointsCount << " )" << endl;
		points = NULL;
	}
	else
	{
		cout << "The object already has been deleted" << endl;
	}
	
}

void Figure::Print()
{	
	switch (type)
	{
	case none:
		cout << "Your figure is a NOTHING with the following coordinates: " << endl;
		break;
	case dot:
		cout << "Your figure is a DOT with the following coordinates: " << endl;
		break;
	case line:
		cout << "Your figure is a LINE with the following coordinates: " << endl;
		break;
	case triangle:
		cout << "Your figure is a TRIANGLE with the following coordinates: " << endl;
		break;
	case tetragon:
		cout << "Your figure is a TETRAGON with the following coordinates: " << endl;
		break;
	case polygon:
		cout << "Your figure is a POLYGON with the following coordinates: " << endl;
		break;
	default:
		cout << "Your figure is a POLYGON with the following coordinates: " << endl;
		break;
	}
	for (int i = 0; i < pointsCount; i++)
	{
		points[i].PrintPoint();
	}
}
