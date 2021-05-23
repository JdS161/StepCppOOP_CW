#include <iostream>
#include "Student2.h"
#include "Group.h"




int main()
{
	Student student1();
	Student student2(20, (char*)"Alex", new int[5]{ 3, 4, 2, 4, 5 }, 5);
	//student1.Print();
	//student2.Print();

	Student* group = new Student[3]
	{
		student2,
		Student(),
		Student(23, (char*)"Bob", new int[4]{2,3,4,5}, 4)
	};



	Group newGroup(3, group);

	newGroup.Print();


}



