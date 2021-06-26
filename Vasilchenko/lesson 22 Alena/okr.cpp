#include "okr.h"


Circle::Circle() :
	r{ 0 },
	point()
{}

Circle::Circle(const Circle& copy)
{
	r = copy.r;
	point = new Point(copy.point->x, copy.point->y);
}

bool Circle::operator<(const Circle& second)
{
	return this->POkr() < second.POkr() ? true : false;
}

bool Circle::operator>(const Circle& second)
{
	return this->POkr() > second.POkr() ? true : false;
}

bool Circle::operator==(const Circle& second)
{
	return this->r == second.r ? true : false;
}

Circle& Circle::operator+=(int value)
{
	this->r += value;
	return *this;
}

Circle& Circle::operator-=(int value)
{
	this->r -= value;
	return *this;
}

Circle& Circle::operator++()
{
	this->r++;
	return *this;
}

Circle Circle::operator++(int k)
{
	Circle copy(*this);
	this->r++;
	return copy;
}

Circle& Circle::operator--()
{
	this->r--;
	return *this;
}

Circle Circle::operator--(int k)
{
	Circle copy(*this);
	this->r--;
	return copy;
}

Circle& Circle::operator=(const Circle& second)
{
	this->r = second.r;
	if (point != NULL) delete point;
	this->point = new Point(second.point->x, second.point->y);
	cout << "Operator = " << endl;
	return *this;
}

Circle::~Circle()
{
	if (!point)
	{
		return;
	}
	delete point;
}





const double Circle::PI = 3.14;



bool operator==(const Point& first, const Point& second)
{
	return first.x == second.x && first.y == second.y;
}

bool operator!=(const Point& first, const Point& second)
{
	//return first.x != second.x || first.y != second.y;    Так то же можно, но..
	return !(first == second);
}

ostream& operator<<(ostream& out, const Point& point)
{
	out << "Point : (" << point.x << ";" << point.y << ")" << endl;
	return out;
}

istream& operator>>(istream& in, Point& point)
{
	cout << "x = ";
	in >> point.x;
	cout << "y = ";
	in >> point.y;
	return in;
}

ostream& operator<<(ostream& out, const Circle& okr)
{
	out << "R = " << okr.r << endl;
	out << *okr.point;
	return out;
}

Point Point::operator+(const Point& second)
{
	return Point(this->x + second.x, this->y + second.y);
}
