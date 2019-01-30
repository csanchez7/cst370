/*---------------------------------------------------------------------
Programming Assignment 3
Abstract: Takes input of string and checks to see if string is palindrome.
If it is a palindrome, it prints true. If it isn't a palindrome, it prints false.
Author: Carlos Sanchez
ID: 003065256
Date: January 29, 2019
----------------------------------------------------------------------*/

/*---------------------------------------------------------------------
                  Driver program to test the Queue class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"
#include "Queue.h"


bool palendromeCheck(string str)
{
	Queue q;
	Stack s;
	string str1,str2;

	//adds string str to queue and stack
	for (int i = 0; i < str.length(); i++)
	{
		s.push(toupper(str[i]));
		q.enqueue(toupper(str[i]));
	}

	//original string dequeued into a str2
	while (!q.empty())
	{
		str1 += q.front();
		q.dequeue();
	}

	//reverse order of the original string
	while (!s.empty())
	{
		str2 += s.top();
		s.pop();
	}

	//test: prints original
		cout << "\nInputted string: ";
		cout << str1 << endl;

	//test: prints reverse
		cout << "Reversed string: ";
		cout << str2 << endl;

	cout << boolalpha;
	cout << "\nPalindrome?: ";

	//returns true if palindrome
	if (str1 == str2)
	{
		return true;
	}
	//returns false if not a palindrome
	else
		return false;
}


int main()
{
	string userInput;
	cout << "Enter a string: ";
	cin >> userInput;

	cout << palendromeCheck(userInput);
}
