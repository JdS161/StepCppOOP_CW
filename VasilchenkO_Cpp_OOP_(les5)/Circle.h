#pragma once
#include <iostream>
#include <cmath>
#define PI 3.14159


using namespace std;

class Point
{
private:
	int x;
	int y;

public:

	friend class Circle; //provides access to private fields of class Point FROM class Circle
	friend bool operator== (const Point& first, const Point& second);
	friend bool operator!= (const Point& first, const Point& second);


	//FUNCTIONS FOR INPUT/OUTPUT STREAMS
	friend ostream& operator<< (ostream& out, const Point& second);
	friend istream& operator>> (istream& in, Point& second);



	Point operator+ (const Point& second);
	
	
	Point(int  _x= 0, int _y = 0): x{_x}, y{_y}
	{};
};

class Circle
{
private:
	double		rad;
	Point	point;



	static int counter;
public:
	

	explicit Circle(double _rad = 0, int x = 0, int y = 0) : rad{ _rad }
	{
		point = Point(x, y);
	};
	Circle(double _rad, const Point& _point) : rad{ _rad }
	{
		point = Point(_point.x, _point.y);
	};

	//setters
	void SetRad(double _rad)
	{
		rad = _rad;
	}
	
	//getters
	double GetRad() const
	{
		return rad;
	}

	double CircleLenght() const;	
	double CircleSquare() const;

	//RELOAD FUNCTIONS
	bool operator< (const Circle& second);
	bool operator> (const Circle& second);
	bool operator== (const Circle& second);
	bool operator!= (const Circle& second);


	Circle& operator+=(int value);
	Circle& operator-=(int value);
	//PREFIX
	Circle& operator++();
	Circle& operator--();
	
	//POSTFIX
	Circle operator++(int k);
	Circle operator--(int k);

	Circle& operator= (const Circle& second);


	//FUNCTIONS FOR INPUT/OUTPUT STREAMS
	friend ostream& operator<< (ostream& out, const Circle& circle);
	friend istream& operator>> (istream& in, Circle& circle);



	~Circle()
	{
		cout << "DESTRUCTED" << endl;
	};
};

