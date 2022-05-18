/*
	Title:  	lab_2b.cpp
	Author:		LordSmaul
	Date:		8/30/2021	
	Purpose:	This program gets the name, quantity, and price of 2 
                items and calculates the total price for the customer.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double TAX = 0.0975;
    double item1Price, item2Price, totalItemPrice, totalBill;
    int item1Quantity, item2Quantity;
    string item1Name, item2Name;

/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty) 
*/
	cout <<	setprecision(2) << fixed << showpoint; 

    cout << "Please input the name of the first item:  ";
    getline(cin, item1Name);

    cout << "Please input the number of " << item1Name << " bought:  ";
    cin >> item1Quantity;

    cout << "Please input the price of " << item1Name << ": $";
    cin  >> item1Price;

    cin.ignore(); // to ingore leading whitespace characters

    cout << "Please input the name of the second item:  ";
    getline(cin, item2Name);

    cout << "Please input the number of " << item2Name << " bought:  ";
    cin >> item2Quantity;

    cout << "Please input the price of " << item2Name << ": $";
    cin >> item2Price;

    totalItemPrice = (item1Quantity * item1Price) + (item2Quantity * item2Price);
    totalBill = totalItemPrice + (totalItemPrice * TAX);

    cout << "\nThe total bill is $" << totalBill << ".";

    return 0;
}