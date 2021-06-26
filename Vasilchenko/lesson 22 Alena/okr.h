#pragma once
#include <iostream>
#define pi 3.14 
using namespace std;

class Point
{
private:
	int x;
	int y;

	static Point* globalPoint;

public:
	Point(int _x = 0, int _y =0):
		x{ _x },
		y{ _y }
	{};
	friend class Circle;

	static Point* getReference()
	{
		/*if (!globalPoint)
			globalPoint = new Point();*/
		return globalPoint;
	}

	void setX(int newX)
	{
		x = newX;
	 }

	friend bool operator==(const Point& first, const Point& second);
	friend bool operator!=(const Point& first, const Point& second);

	friend ostream& operator<<(ostream& out, const Point& point);
	friend istream& operator>>(istream& in, Point& point);



	Point operator+(const Point& second);


	//~point();

};




class Circle
{
private:
	double r;
	Point* point;

	const static double PI;
	static int counter;

public:

	Circle();


	Circle(double _r, const Point* _point):
		r{_r}
	{
		point = new Point(_point->x, _point->y);
	};


	explicit Circle(double _r, int _x = 0, int _y = 0) :
		r{ _r }
	{
		point = new Point(_x, _y);
	};

	Circle(const Circle& copy);

	double SetR(double _r)
	{
		r = _r;
	}

	double GetR() const
	{
		return r;
	}

	double POkr() const
	{
		return 2 * r * pi;
	}

	double SOkr() const
	{
		return r * r * pi;
	}


	bool operator<(const Circle& second);
	bool operator>(const Circle& second);

	bool operator==(const Circle& second);
	Circle& operator+=(int value);
	Circle& operator-=(int value);

	Circle& operator++(); 
	Circle operator++(int k);

	Circle& operator--();
	Circle operator--(int k);

	Circle& operator=(const Circle& second);



	friend ostream& operator<<(ostream& out, const Circle& okr);


	~Circle();



};

