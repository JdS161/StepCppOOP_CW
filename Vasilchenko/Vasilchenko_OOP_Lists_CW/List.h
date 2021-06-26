#pragma once
#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* Next;
};



class List
{
private:
	Node* _head;
	Node* _tail;

	int _count;

public:
	List();
	~List();


	void AddFirst(char data);
	void AddAny(char, int);
	void DelFirst();
	void DelAny(int);
	void DelAll();

	void Print();
	int GetCount();



};

