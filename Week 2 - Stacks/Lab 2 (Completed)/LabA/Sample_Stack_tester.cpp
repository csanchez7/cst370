/*---------------------------------------------------------------------
Lab Assignment 2A
Abstract: Takes in user input, reverses it, and prints it out.
Author: Carlos Sanchez
ID: 003065256
Date: January 22, 2019
----------------------------------------------------------------------*/

/*---------------------------------------------------------------------
               Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

#include "Stack.h"


int main()
{
	Stack s;

	//user inputs a string
	cout << "Enter a string => ";
	char str[STACK_CAPACITY];
	char reverseStr[STACK_CAPACITY];
	cin.getline(str, strlen(str));

	cout << "You entered " << str << endl;

	//pushes string to stack s
	int count = strlen(str);

	//loops through string and pushes it into s
	for (int i = 0; i < count; i++)
	{
		s.push(str[i]);
	}

	//outputs stack s into string in reverse
	for (int i = 0; i < count; i++)
	{
		reverseStr[i] = s.top();
		s.pop();
	}

	cout << "Reverse is " << reverseStr << endl;
}
