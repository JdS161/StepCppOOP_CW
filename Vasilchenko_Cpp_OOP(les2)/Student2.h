#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Student
{
private:
	char*	firstName;
	int*	score;
	int		countScores;
	int		age;


public:
	Student();
	Student(
		int		_age,
		char*	_firstName,
		int*	_score,
		int		_countScores
		);

	 //getters
	int		GetAge()
	{
		return age;
	}
	int		GetCountScores()
	{
		return countScores;
	}
	char*	GetFirstName()
	{
		return firstName;
	}
	int*	GetScore()
	{
		return score;
	}

	//setters
	void	SetAge(int _age)
	{
		if (_age < 0)
		{
			cout << "Wrong age input";
			return;
		}
		age = _age;
	}
	void	SetCountScores(int _countScores)
	{
		countScores = _countScores <0 ?0:_countScores;
	}
	void	SetFirstName(char* _firstName)
	{
		if (_firstName == NULL || _firstName == "")
			return;

		firstName = _firstName;
		/*if (firstName != NULL)
		{
			delete[] firstName;
		}
		char* firstName = new char[strlen(_firstName) + 1];
		strcpy(firstName, _firstName);*/
	}
	void	SetScore(int* _score)
	{
		if (_score == NULL)
			return;
		if (score != NULL)
		{
			delete[] score;
		}
		int size = _msize(_score) / sizeof(_score);
		score = new int[size];
		for (int i = 0; i < size; i++)
		{
			score[i] = _score[i];
		}
	}



	void Print();


	//~Student();



};
