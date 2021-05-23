#include "Group.h"

Group::Group()
{
	qttyOfStudents	= 0;
	group			= NULL;
}

Group::Group(int _qtty, Student* _group): qttyOfStudents{_qtty}

{
	group = new Student[qttyOfStudents];
	for (int i = 0; i < qttyOfStudents; i++)
	{
		group[i].SetAge(_group[i].GetAge());
		group[i].SetCountScores(_group[i].GetCountScores());
		group[i].SetFirstName(_group[i].GetFirstName());
		group[i].SetScore(_group[i].GetScore());
	}
}

void Group::Print()
{
	for (int i = 0; i < qttyOfStudents; i++)
	{
		group[i].Print();
	}
}
