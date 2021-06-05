#pragma once
#pragma warning(disable : 4996)

#include <iostream>
#include <cmath>

using namespace std;

class Date
{
private:

	int			day;
	int			month;
	int			year;
	char*		weekDay = NULL;
	static int	counter;

public:
	
	Date();
	Date(int, int, int/*, const char**/);
	Date(const char*);
	//copy constructor:
	Date(const Date&);

	//setters
	void SetYear(int _year)
	{
		if (_year < 0)
		{
			cout << "Negative year is not allowed.";
			return;
		}
		this->year = _year;
	}
	void SetWeekDay(const char* _weekDay)
	{
		if (weekDay != NULL)
			delete[] weekDay;
		
		this->weekDay = new char[strlen(_weekDay) + 1];
		strcpy(this->weekDay, _weekDay);
	}
	//getters
	int GetYear()
	{
		return this->year;
	}
	const char* GetWeekDay()
	{
		return this->weekDay;
	}

	//static functions
	static int GetCounter()
	{
		return counter;
	}


	void PrintDate();
	int Difference(const Date& secondDate)
	{
		return abs(this->year - secondDate.year);
	}
	~Date();


};




