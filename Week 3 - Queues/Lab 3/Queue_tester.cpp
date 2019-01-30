/*---------------------------------------------------------------------
Lab Assignment 3
Abstract: Reads sample.txt file, inputs all footnotes that are
within brackets into queue, and displays queue
Author: Carlos Sanchez
ID: 003065256
Date: January 29, 2019
----------------------------------------------------------------------*/

/*---------------------------------------------------------------------
                  Driver program to test the Queue class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Queue.h"


int main()
{
	Queue q;
	string line;
	string allLines;
	string footnote;
	bool addFootnote = false;
	ifstream inFile("sample.txt");

	//reads file and outputs file's text
	if (inFile.is_open())
	{
		while (inFile.eof() == false)
		{
			getline(inFile, line);
			allLines += line += "\n";

		}
		inFile.close();
		cout << "sample.txt\n"<< allLines << endl;
	}

	else
	{
		cout << "unable to open file";
	}

	//loops through string and adds footnotes to queue
	for (int i = 0; i < allLines.length(); i++)
	{
		//looks for open bracket
		if (allLines[i] == '{')
		{
			addFootnote = true;
		}

		//looks for close bracket
		else
		{
			if (allLines[i] == '}')
			{
				q.enqueue(footnote); //adds footnote to queue
				footnote.clear();  //empties out string
				addFootnote = false;
			}
		}

		//adds characters to footnote string if they are within brackets
		if (addFootnote == true && allLines[i] != '{')
		{
			footnote += allLines[i];
		}
	}
	//displays footnote queue
	cout << "Footnote Queue: \n";
	q.display(cout);
}
