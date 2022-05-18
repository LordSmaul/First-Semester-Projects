/*
	Title:  	lab_2a.cpp
	Author:		LordSmaul
	Date:		8/30/2021	
	Purpose:	This program is written for waiters & waitresses at
				TGI Fridays so that they can calculate total cost
				of hot wings for their customers.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double HOT_WING_PRICE = 0.99;
	const double SALES_TAX = 0.085;
	double totalBill; // Full price of hot wings, including sales tax
    double hotWingPrice; //Price of hot wings
	int numberHotWings; // Number of hot wings
	
	/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty)  */
	cout <<	setprecision(2) << fixed << showpoint;

	cout << "\n\nPlease input the number of hot wings purchased:  ";
	
	cin >> numberHotWings;

    hotWingPrice = numberHotWings * HOT_WING_PRICE;
    totalBill = hotWingPrice + (hotWingPrice * SALES_TAX);
	
	cout << "Your total bill is $" << totalBill << endl;
	
	return 0;
}