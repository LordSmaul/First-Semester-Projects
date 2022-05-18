/*
	Title:  	lab4a.cpp
	Author:  	LordSmaul
	Date:  		09/20/2021
	Purpose:	This program illustrates the use of logical operators 
            with a student's year and GPA input
*/

#include <iostream>
using namespace std;

int main()
{
   char year;
   float gpa;

   cout << "What year student are you ?\n";
   cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)\n\n";
   cin >> year;

   cout << "Now enter your GPA\n";
   cin >> gpa;

   if (year == '4' && gpa >= 2.0)
   {
      cout << "It is time to graduate soon." << endl;
   }
   else if (year == '1' && gpa < 2.0)
   {
      cout << "You need to visit your freshman advisor and seek tutoring to improve your GPA." << endl;
   }
   else
   {
      cout << "You need more schooling." << endl;
   }

   return 0;
}