#pragma once
#include "Student2.h"


class Group
{
private:

	int qttyOfStudents;
	Student* group;

public:
	Group();
	Group(int, Student*);
	void Print();

	//~Group();


};



//create class group of students which contatins private ( qtty if students and array if student)
//pubklic func - ptinr to cli, 