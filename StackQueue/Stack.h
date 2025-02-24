
#include <string>
using namespace std;

#pragma once
#define STACKSIZE 10

class Stack
{
public:
	int head;
	int items[STACKSIZE];

	Stack();

	bool isEmpty(Stack stack);
	bool isFull(Stack stack);

	bool push( int item);
	bool pop(int& item);

	bool wipe();


	string toString();

};

