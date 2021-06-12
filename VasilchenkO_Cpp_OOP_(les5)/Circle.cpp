#include "Circle.h"

double Circle::CircleLenght() const
{
	//cout << "CIRCLE LENGTH = ";
	return 2 * PI * rad;
}

double Circle::CircleSquare() const
{
	//cout << "CIRCLE SQUARE = ";
	return PI * pow(rad, 2);
}

bool Circle::operator<(const Circle& second)
{
	
	return this->CircleLenght() < second.CircleLenght()/* ? true : false*/;
}
bool Circle::operator>(const Circle& second)
{
	return this->CircleLenght() > second.CircleLenght();
}
bool Circle::operator==(const Circle& second)
{
	return this->CircleLenght() == second.CircleLenght();
}
bool Circle::operator!=(const Circle& second)
{
	return this->CircleLenght() != second.CircleLenght();
}

Circle& Circle::operator+=(int value)
{
	this->rad += value;
	return *this;
}

Circle& Circle::operator-=(int value)
{
	this->rad -= value;
	return *this;
}

Circle& Circle::operator++()
{
	this->rad++;
	return *this;
}

Circle& Circle::operator--()
{
	this->rad--;
	return* this;
}

Circle Circle::operator++(int k)
{

	Circle copy(*this);
	this->rad++;
	return copy;
}

Circle Circle::operator--(int k)
{
	Circle copy(*this);
	this->rad--;
	return copy;
}

Circle& Circle::operator=(const Circle& second)
{
	this->rad = second.rad;
	this->point = second.point;
	cout << "operator = " << endl;
	return *this;
}


bool operator==(const Point& first, const Point& second)
{
	return first.x == second.x && first.y==first.y;
}
bool operator!=(const Point& first, const Point& second)
{
	return !(first == second);
}

ostream& operator<<(ostream& out, const Point& point)
{
	out << "Point: (" << point.x << "," << point.y << ")" << endl;

	return out;
}

istream& operator>>(istream& in, Point& point)
{
	cout << "X = ";
	in >> point.x;
	cout << "Y = ";
	in >> point.y;
	
	return in;
}

ostream& operator<<(ostream& out, const Circle& circle)
{
	out << "RADIUS ="<< circle.rad << endl;
	out << circle.point;
	return out;
}

istream& operator>>(istream& in, Circle& circle)
{
	
	return in;
}


Point Point::operator+(const Point& second)
{
	return Point(this->x + second.x, this->y + second.y);
}
