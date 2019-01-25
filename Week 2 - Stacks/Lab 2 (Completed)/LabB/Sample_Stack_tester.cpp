/*---------------------------------------------------------------------
Lab Assignment 2B
Abstract: Converts integer input to binary and prints it.
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

int main()
{
   Stack s;

   int number;
   int binaryValue;

   //user input integer

   cout << "Enter a number: ";
   cin >> number;

   cout << "Decimal: " << number << endl;

   while (number != 0){

	   //divides integer by 2 to find remainder of 1 or 0
	   binaryValue = number % 2;

	   //number is new integer remainder
	   number = number / 2;

	   //pushes remainder to stack s
	   s.push(binaryValue);
   }

   cout << "Binary: ";
   s.display(cout);
}
