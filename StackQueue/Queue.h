
#include <string>
using namespace std;


#define QUEUESIZE 10

#pragma once
class Queue
{
public:
	int head;
	int tail;
	int items[QUEUESIZE];

	Queue();

	bool isEmpty(Queue stack);
	bool isFull(Queue stack);

	bool push(int item);
	bool pop(int& item);

	bool wipe();

	string toString();


};

