#include "Student2.h"

Student::Student()
{
	firstName	= (char*)"John";
	score		= NULL;
 	countScores = 0;
	age			= 18;
}

Student::Student(int _age, char* _firstName, int* _score, int _countScores)
{
	age			= _age;
	firstName	= new char[strlen(_firstName)+1];
	strcpy(firstName, _firstName);
	countScores = _countScores;
	score = new int[_countScores];
	for (int i = 0; i < _countScores; i++)
	{
		score[i] = _score[i];
	}

}

void Student::Print()
{
	cout << "NAME:" << setw(10) << firstName << endl;;
	cout << "AGE:" << setw(10) << age << endl;
	cout << "SCORES:" << setw(5);
	for (int i = 0; i < countScores; i++)
	{
		cout << *(score+i) << setw(3);
	}
	cout << endl << endl;

}

