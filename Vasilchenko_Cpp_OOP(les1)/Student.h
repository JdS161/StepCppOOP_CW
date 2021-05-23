#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


struct Student 
{
	char*	name			= (char*)"Jane";
	char*	surname			= (char*)"Doe";
	int		docNumber		= 0000000;
	double	averageScore	= 0.0;


	/// <summary>
	/// 
	/// </summary>
	Student(const char* _name = "Jane", const char* _surname = "Doe", 
		int _docNumber = 000000, double _averageScore = 0.0)
	{
		name			= (char*) _name;
		surname			= (char*) _surname;
		docNumber		= _docNumber;
		averageScore	= _averageScore;
	}





	void InitStudent();
	void PrintStudent();
};






double AverageScore(int* scores, int dim);



