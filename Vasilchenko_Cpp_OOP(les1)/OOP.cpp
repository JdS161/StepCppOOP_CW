#include <iostream>

#include "Student.h"
using namespace std;


void ChessBoard() {


	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 1)
				if (j % 2 == 1)
					cout << '-';
				else
					cout << '*';
			else if (j % 2 == 1)
				cout << '*';
			else
				cout << '-';
		}
		cout << endl;
	}
}

void ReverseArr(int arr[], int dim) 
{
	for (int i = 0; i < dim / 2; i++) {
		swap(arr[i], arr[dim-1-i]);
		
	}
	

	for (int i = 0; i < dim; i++) {
		cout << arr[i] << "  ";
	}
}



int main()
{
	/*ChessBoard();
	const int dim = 10;
	int arr[dim] = {1,2,3,4,5,6,7,8,9,0};

	ReverseArr(arr, dim);*/

	Student student("Mark");
	Student studentSec;
	/*student.InitStudent();

	int size = 5;
	int* scores = new int [] {3, 4, 5, 2, 3};
	student.averageScore = AverageScore(scores, size);*/


	Student* students = new Student[5]
	{
		Student("Alex", "Wan", 123432, 4.8),
		Student("John", "Brown", 543212),
		Student("Bob", "Marley"),
		Student("Mark"),
		Student(),

	};

	cout << setw(10) << "NAME" << setw(10) << "SURNAME" << setw(10) << "DOCUMENT" << setw(15) << "AVERAGE SCORE" << endl;

	for (int i = 0; i < 5; i++) {
		students[i].PrintStudent();
	}
	/*student.PrintStudent();
	studentSec.PrintStudent();*/





}
