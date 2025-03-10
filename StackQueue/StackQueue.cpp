
#include <iostream>
#include <string>

#include "Stack.h"
#include "Queue.h"
#include "StackQueue.h"

using namespace std;

void StackProgramm()
{
    Stack currentStack;

    char option = 'd';

    while (option != 'x')
    {
        cout << "Select an option.\n";
        cout << "         \"a\" Add a value to the stack. \n";
        cout << "         \"r\" Remove a value from the stack. \n";
        cout << "         \"w\" Wipe the stack. \n";
        cout << "         \"x\" Exit the program. \n";

        cin >> option;

        switch (option)
        {
        case  'a':
            cout << "Give me a number: ";
            int pushedNumber;
            cin >> pushedNumber;

            if (currentStack.push(pushedNumber))
            {
                cout << pushedNumber;
                cout << " is successfully added.\n";
            }
            else
            {
                cout << "Something went wrong. The ";
                cout << pushedNumber;
                cout << " didn't get into the stack.\n";

            }
            break;
        case 'r':
            int poppedNumber;
            if (currentStack.pop(poppedNumber))
            {
                cout << "The number ";
                cout << poppedNumber;
                cout << " has been deleted from the stack.\n";
            }
            else
            {
                cout << "Something went wrong. Probably the stack is empty. \n";
            }
            break;
        case 'w':
            if (currentStack.wipe())
            {
                cout << "Operation is done.\n";
            }
            else
            {
                cout << "Operation declined.\n";
            }
            break;
        case 'x':
            cout << "See you, Space Cowboy.\n";
            cout << "Press any button.";
            cin;
            break;
        default:
            cout << "Please, give an available command.\n";
            break;

        }

    }

}

void QueueProgramm()
{

    Queue currentQueue;

    char option = 'd';

    while (option != 'x')
    {
        cout << "Select an option.\n";
        cout << "         \"a\" Add a value to the queue. \n";
        cout << "         \"r\" Remove a value from the queue. \n";
        cout << "         \"w\" Wipe the queue. \n";
        cout << "         \"x\" Exit the program. \n";

        cin >> option;

        switch (option)
        {
        case  'a':
            cout << "Give me a number: ";
            int pushedNumber;
            cin >> pushedNumber;

            if (currentQueue.push(pushedNumber))
            {
                cout << pushedNumber;
                cout << " is successfully added.\n";
            }
            else
            {
                cout << "Something went wrong. The ";
                cout << pushedNumber;
                cout << " didn't get into the queue.\n";

            }
            break;
        case 'r':
            int poppedNumber;
            if (currentQueue.pop(poppedNumber))
            {
                cout << "The number ";
                cout << poppedNumber;
                cout << " has been deleted from the queue.\n";
            }
            else
            {
                cout << "Something went wrong. Probably the queue is empty. \n";
            }
            break;
        case 'w':
            if (currentQueue.wipe())
            {
                cout << "Operation is done.\n";
            }
            else
            {
                cout << "Operation declined.\n";
            }
            break;
        case 'x':
            cout << "See you, Space Cowboy.\n";
            cout << "Press any button.";
            cin;
            break;
        default:
            cout << "Please, give an available command.\n";
            break;

        }

    }

}

int main()
{    
    //Stack testStack;


    //testStack.push(3);

    //int popped;
    //testStack.pop(popped);

    //cout<<testStack.toString();

    //StackProgramm();
    QueueProgramm();




}
