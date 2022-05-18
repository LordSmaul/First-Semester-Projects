/*
    File Name: Lab3c.cpp
    Date: 9/13/2021
    Author: LordSmaul
    Purpose: To output the change of the user in the appropriate amount of dollars and cents
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declare variables
    int moneyInput, dollars, quarters, dimes, nickels, pennies;
    string dollarAmount, quarterAmount, dimeAmount, pennyAmount;

    cout << "Please enter amount: ";
    cin >> moneyInput;

    if (moneyInput == 0)
    {
        cout << "No change" << endl;
    }
    else
    {

    // Sets values of each money type
    dollars = moneyInput / 100;
    moneyInput %= 100;
    quarters = moneyInput / 25;
    moneyInput %= 25;
    dimes = moneyInput / 10;
    moneyInput %= 10;
    nickels = moneyInput / 5;
    moneyInput %= 5;
    pennies = moneyInput;

    // Assigns single/plural values to the string values for each money value
    if (dollars > 1) { dollarAmount = "Dollars"; }
    else { dollarAmount = "Dollar"; }

    if (quarters > 1) { quarterAmount = "Quarters"; }
    else { quarterAmount = "Quarter"; }

    if (dimes > 1) { dimeAmount = "Dimes"; }
    else { dimeAmount = "Dime"; }

    if (pennies > 1) { pennyAmount = "Pennies"; }
    else { pennyAmount = "Penny"; }

    cout << "Your change is: " << endl;
    if (dollars != 0)  { cout << dollars << " " << dollarAmount << endl; }
    if (quarters != 0) { cout << quarters << " " << quarterAmount << endl; }
    if (dimes != 0) { cout << dimes << " " << dimeAmount << endl; }
    if (nickels != 0) { cout << nickels << " Nickel" << endl; }
    if (pennies != 0) { cout << pennies << " " << pennyAmount << endl; }

    }
    return 0;
}