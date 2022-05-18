/*
	Title:  	Lab4c.cpp
	Author:		LordSmaul
	Date:		09/20/2021
	Purpose:	practice with a simple while loop
*/

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	while (letter != 'x')
	{
		cout << "Please enter a letter." << endl;
		cin >> letter;
		cout << "The letter you entered is " << letter << endl;
	}
	
	return 0;
}