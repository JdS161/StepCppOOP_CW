#include "Date.h"


int Date::counter = 0;

Date::Date()
{
	day = 1;
	month = 1;
	year = 1900;
	weekDay = (char*)"NONE";

	counter++;
}

Date::Date(int _day, int _month, int _year/*, const char* _weekDay*/):	
	day		{_day},
	month	{_month},
	year	{_year}
	//weekDay	{new char[5] {"None"}}
{
	/*this->weekDay = new char[strlen(_weekDay) + 1];
	strcpy(this->weekDay, _weekDay);*/
	counter++;
}

Date::Date(const char* _weekDay):Date(0,0,0/*, _weekDay*/)
{
	/*if (weekDay != NULL)
	{
		delete[] weekDay;
	}*/
	this->weekDay = new char[strlen(_weekDay) + 1];
	strcpy(this->weekDay, _weekDay);
}

Date::Date(const Date& copy):
	day{copy.day}
{
	this->year = copy.year;
	this->month = copy.month;
	this->weekDay = new char[strlen(copy.weekDay) + 1];
	strcpy(this->weekDay, copy.weekDay);
}


void Date::PrintDate()
{
	cout << "Current date is: " << day << "-" << month << "-" << year << "." << endl;
 	if(weekDay != NULL)
		cout << "It is " << weekDay << endl;

}

Date::~Date()
{
	if (weekDay != NULL)
	{
		delete[] weekDay;
		weekDay = NULL;
		counter--;
	}
	cout << "Date destructor" << endl;
}
