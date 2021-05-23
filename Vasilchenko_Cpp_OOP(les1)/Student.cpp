#include "..\Vasilchenko_Cpp_OOP(les2)\Student2.h"
#include "Student.h"
using namespace std;

void Student::InitStudent()
{
	name		 = (char*)"John";
	surname		 = (char*)"Dorian";
	docNumber	 = 1111111;
	averageScore = 0;

}

double AverageScore(int* scores, int dim)
{
	double summ = 0.0;
	for (int i = 0; i < dim; i++)
	{
		summ += scores[i];
	}
	return summ / dim;
}

void Student::PrintStudent()
{
	//cout << setw(10) << "NAME" << setw(10) << "SURNAME" << setw(10) << "DOCUMENT" << setw(15) << "AVERAGE SCORE" << endl;
	cout << setw(10) << name << setw(10) << surname << setw(10) << docNumber << setw(15) << averageScore << endl;
}


