#include "Queue.h"
#include <iostream>


Queue::Queue()
{
	head = 0;
	tail = 0;
	for (int i = 0; i < QUEUESIZE; i++)
	{
		items[i] = 0;
	}
}

bool Queue::isEmpty(Queue queue)
{
	if (tail==0)
		return true;
	else
		return false;

}
bool Queue::isFull(Queue queue)
{
	if (tail >= QUEUESIZE)
		return true;
	else
		return false;
}

bool Queue::push(int item)
{
	if (head < QUEUESIZE)
	{
		items[tail] = item;
		tail++;
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::pop(int& item)
{
	if (tail > 0)
	{
		item = items[0];		
		for (int i = 0; i < tail - 1; i++)
		{
			items[i] = items[i + 1];
		}
		tail--;
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::wipe()
{
	std::cout << "This action shall delete whole information of the queue. Press \"y\" to confirm: \n";
	char yes;
	cin >> yes;
	if (yes == 'y')
	{
		cout << "The queue is wiped.\n";
		int i = 0;
		while (tail > 0)
		{
			cout << "         Num ";
			cout << i;
			cout << ": ";
			int popped=0;
			pop(popped);
			cout << popped;			
			cout << "\n";			
			i++;
		}	
		cout << "The queue is empty. \n";
		return true;
	}
	else
	{
		return false;
	}
}


string Queue::toString()
{
	string result;
	for (int i = 0; i < QUEUESIZE; i++)
	{
		result += to_string(items[i]);
		if (i < QUEUESIZE - 1) result += ", ";
	}
	return result;
}