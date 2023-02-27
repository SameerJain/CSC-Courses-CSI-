#include <iostream>
#include <cassert>
#include "stackImp.h"
using namespace std;

int main()
{

	stackType<int> stack(50);
	stackType<int> copyStack(50);
	stackType<int> dummyStack(100);

	stack.initializeStack();
	stack.push(85);
	stack.push(28);
	stack.push(56);
	
	copyStack = stack; //copy stack into copyStack using the overloaded operator =

	cout << "The elements of copyStack: ";
	while (!copyStack.isEmptyStack()) //print copyStack
	{
		cout << copyStack.top() << " ";
		copyStack.pop();
	}
	cout << endl;

	if (copyStack.isEmptyStack())
		cout << "copyStack is empty." << endl;
	else
		cout << "copyStack is not empty." << endl;

	copyStack = stack;
	
	if (!stack.isEmptyStack())
	{
		cout << "The original stack is not empty." << endl
			<< "The top element of the original stack: "
			<< stack.top() << endl;
		cout << "The copyStack's top element is the same: "
			<< copyStack.top() << endl;
	}

	dummyStack = stack; //dummyStack is in different size. 
	dummyStack.push(99); //99 is LIFO
	cout << "The elements of dummyStack : ";
	while (!dummyStack.isEmptyStack())
	{
		cout << dummyStack.top() << " ";
		dummyStack.pop();
	}

	cout << endl;
	return 0;
}
