/*---------------------------------------------------------------------
Programming Assignment 2
Abstract: Takes elements from one stack and inputs them into another
stack in ascending order
Author: Carlos Sanchez
ID: 003065256
Date: January 22, 2019
----------------------------------------------------------------------*/

/*---------------------------------------------------------------------
               Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "Stack.h"

//function to sort stack
Stack sort(Stack & inputStack)
{
	Stack sortedStack;

	//pops top element
	while (!inputStack.empty())
	{
		StackElement sElement = inputStack.top();
		inputStack.pop();

		// while top of sortedStack is greater than
		// sElement and sortedStack is not empty, pop
		// from sortedStack and push into input stack
		while (!sortedStack.empty() && (sortedStack.top() > sElement))
		{
			inputStack.push(sortedStack.top());
			sortedStack.pop();
		}

		//push sElement into sortedStack
		sortedStack.push(sElement);
	}
	//returns stack sortedStack with sorted elements
	return sortedStack;
}


int main()
{
	/*---------------------SAMPLE 1---------------------*/
	Stack s;

	//pushed numbers into the s stack
	s.push(1);
	s.push(5);
	s.push(3);
	s.push(-3);
	s.push(4);
	s.push(8);
	s.push(10);
	s.push(-5);

	//initial stack display
	cout << "Initial stack sample 1:" << endl;
	s.display(cout);
	cout << endl;

	//sorted stack display
	s = sort(s);
	cout << "Sorted stack sample 1:" << endl;
	s.display(cout);
	cout << endl;

	/*---------------------SAMPLE 2---------------------*/
	Stack t;

	t.push(1);
	t.push(5);
	t.push(-4);
	t.push(6);
	t.push(2);

	//initial stack display
	cout << "Initial stack sample 2:" << endl;
	t.display(cout);
	cout << endl;

	//sorted stack display
	t = sort(t);
	cout << "Sorted stack sample 2:" << endl;
	t.display(cout);
	cout << endl;

	/*---------------------SAMPLE 3---------------------*/
	Stack u;

	u.push(-1);
	u.push(-4);
	u.push(-4);
	u.push(6);
	u.push(6);
	u.push(9);

	//initial stack display
	cout << "Initial stack sample 3:" << endl;
	u.display(cout);
	cout << endl;

	//sorted stack display
	u = sort(u);
	cout << "Sorted stack sample 3:" << endl;
	u.display(cout);
	cout << endl;



}
