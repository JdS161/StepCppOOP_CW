#include "List.h"

List::List()
{
	_head = _tail = NULL;
	_count = 0;

}

List::~List()
{
	DelAll();
}

void List::AddFirst(char data)
{
	Node* temp = new Node;

	temp->data = data;
	temp->Next = NULL;

	if (_head != NULL)
	{
		_tail->Next = temp;
		_tail = temp;
	}
	else
	{
		_head = _tail = temp;
	}

}

void List::AddAny(char insertChar, int pos)
{
	Node* temp = _head;
	for (int i = 0; i < pos; i++)
	{
		temp = temp->Next;
	}

	Node* newNode = new Node;
	newNode->data = insertChar;
	newNode->Next = temp->Next;
	temp->Next = newNode;
}

void List::DelFirst()
{
	Node* temp = _head;
	_head = _head->Next;
	delete temp;
}

void List::DelAny(int pos)
{
	Node* temp = new Node();
	for (int i = 0; i < pos; i++)
	{

	}
}

void List::DelAll()
{
	while (_head != 0)
		DelFirst();
}

void List::Print()
{
	Node* temp = _head;

	while (temp != 0)
	{
		cout << temp->data << " ";
		temp = temp->Next;
	}
	cout << "\n\n";

}

int List::GetCount()
{
	return _count;
}
