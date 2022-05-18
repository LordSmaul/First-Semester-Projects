#include <iostream>
#include <cmath> 
using namespace std;

/*
 * This is the utility function that takes an integar n and
 * returns the summation of 1 to n using a loop.
*/
unsigned int Sum(unsigned int n)
{
    if (n > 1) { return n + Sum(n - 1); }
    else { return 1; }
}

/*
 * This is the utility function that takes an integar n and
 * returns the Factorial of n.
*/
unsigned long long Factorial(unsigned int n)
{
    if (n > 1) { return n * Factorial(n - 1); }
    else { return 1; }
}

/*
 * This is the utility function that takes an integar n and
 * displays the times table of n.
*/
void TimesTable(unsigned int n)
{
    for (int i = 1; i <= 10; i++)
    { 
        cout << i << " * " << n << " = " << (i * n) << endl; 
    }
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for even number including zero) or
 * a false (for odd number).
*/
bool IsEven(unsigned int n)
{
    if (n % 2 == 0) { return true; }
    else { return false; }
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for a prime number) or
 * a false (for a non-prime number).
*/
bool IsPrime(unsigned int n)
{
    int check = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            check = 1;
            break;
        }
    }
    if (check == 0) { return true; }
    else { return false; }
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for an Armstrong Number) or
 * a false (for a Non-Armstrong Number).
*/
bool IsArmstrongNumber(unsigned int n)
{
    unsigned int armstrong = 0, num = n;
    string length = to_string(n); // turned to string to use for length of for loop

    for (int i = 0; i < length.length(); i++)
    {
        armstrong += pow(num % 10, length.length());
        num /= 10;
    }

    if (armstrong == n) { return true; }
    else { return false; }
}