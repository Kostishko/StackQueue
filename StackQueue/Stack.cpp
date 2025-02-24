#include "Stack.h"
#include <iostream>


Stack::Stack()
{
	head = 0;
	for (int i = 0; i < STACKSIZE; i++)
	{
		items[i] = 0;
	}
}

bool Stack::isEmpty(Stack stack)
{
	if (head <= 0)
		return true;
	else
		return false;
	
}
bool Stack::isFull(Stack stack)
{
	if (head >= STACKSIZE)
		return true;
	else
		return false;
}

bool Stack::push( int item)
{
	if (head < STACKSIZE)
	{
		items[head] = item;
		head++;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(int& item)
{
	if (head > 0)
	{
		head--;
		item = items[head];
		return true;
	}
	else
	{
		return false;
	}	
}

bool Stack::wipe()
{
	std::cout << "This action shall delete whole information of the stack. Press \"y\" to confirm: \n";
	char yes;
	cin >> yes;
	if (yes == 'y')
	{
		cout << "The stack is wiped.\n";
		int prevHead = head;
		head--;
		for (int i=1; head >= 0; i++)
		{
			cout << "         Num ";
			cout << i;
			cout << ": ";
			cout << items[head];
			cout << "\n";
			items[head] = 0;
			head--;
		}
		/*int i = 0;
		while (head > 0)
		{
			cout << "         Num ";
			cout << i;
			cout << ": ";
			cout << items[head];
			cout << "\n";
			items[head] = 0;
			head--;
		}*/
		cout << "The stack is empty. \n";
		return true;
	}
	else
	{
		return false;
	}
}


string Stack::toString()
{
	string result;
	for (int i = 0; i < STACKSIZE; i++)
	{
		result += to_string(items[i]);
		if(i<STACKSIZE-1) result += ", ";
	}
	return result;
}