/*
    File Name: Lab7.cpp
    Author: LordSmaul
    Date: 10/19/2021
    Purpose: To get user input to calculate basic geometric functions, while
             passing the function arguments by reference.
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// Function Prototypes
int displayMenu();
double areaTrapezoid(double&, double&, double&);
double areaCone(double&, double&);
double areaParallelogram(double&, double&);
double areaCircle(double&);
void print(string, double, double, double, double, double, double);

int main()
{
    // Delcaring variables
    int userInput;
    double area, b, h, r, b1, b2;

    // Printing menu table and function calculations until userInput is 5
    while (userInput != 5)
    {
        userInput = displayMenu();
        switch (userInput)
        {
                case 1:
                area = areaTrapezoid(h, b1, b2);
                print("Trapezoid", area, h, b, r, b1, b2);
                break;
            case 2:
                area = areaCone(h, r);
                print("Cone", area, h, b, r, b1, b2);
                break;
            case 3:
                area = areaParallelogram(b, h);
                print("Paralellogram", area, h, b, r, b1, b2);
                break;
            case 4:
                area = areaCircle(r);
                print("Circle", area, h, b, r, b1, b2);
                break;
            default:
                break;
        }
    }
    cout << "\nGoodbye!" << endl;
    return 0;
}


// Displays menu and obtains user input for functions
int displayMenu()
{
    int input;
    cout << "Choose a shape to calculate area or 5 to quit:" << endl;
    cout << "\t1. Trapezoid" << endl;
    cout << "\t2. Cone" << endl;
    cout << "\t3. Paralellogram" << endl;
    cout << "\t4. Circle" << endl; 
    cout << "\t5. End Program" << endl;
    cout << "CHOOSE 1-5: ";

    cin >> input;

    if (input < 1 || input > 5)
    {
        while (input < 1 || input > 5)
        {
            cout << "\nInvalid Input." << endl;
            cout << "CHOOSE 1-5:";
            cin >> input;
        }
    }
    return input;
}


// Calculates and returns the area of a trapezoid from user input
double areaTrapezoid(double& height, double& base1, double& base2)

{
    cout << "\nEnter the height of the trapezoid:" << endl;
    cin >> height;
    cout << "\nEnter base 1 of the trapezoid:" << endl;
    cin >> base1;
    cout << "\nEnter base 2 of the trapezoid:" << endl;
    cin >> base2;

    return 0.5 * height * (base1 + base2);
}


// Calculates and returns the surface area of a cone from user input
double areaCone(double& height, double& radius)
{
    double length;
    cout << "\nEnter the height of your cone:" << endl;
    cin >> height;
    cout << "\nEnter the radius of your cone: " << endl;
    cin >> radius;

    length = sqrt(pow(radius,2) + pow(height, 2));

    return M_PI * radius * (radius + length);
}


// Calculates and returns the area of a parallelogram from user input
double areaParallelogram(double& base, double& height)
{
    cout << "\nEnter the base and height of your paralellogram, separated by a space:" << endl;
    cin >> base;
    cin >> height;

    return base * height;
}


// Calculates and returns the area of a circle from user input
double areaCircle(double& radius)
{
    cout << "\nEnter the radius of your circle:" << endl;
    cin >> radius;

    return M_PI * pow(radius, 2);
}


//Prints out correct values in context and writes output to terminal and text file
void print(string shapeName, double area, double height, double base, double radius, double base1, double base2)
{
    ofstream outfile;
    outfile.open("result.txt", outfile.app);
    if (!outfile.is_open())
    {
        cout << "Error! No file was found" << endl;
    }
    else 
    {
        if (shapeName == "Trapezoid")
        {
            cout << "The area of your trapezoid with height of " << height << ", base 1 of " << base1 << ", and base 2 of " << base2 << " is " << area << "\n\n\n";
            outfile << "The area of your trapezoid with height of " << height << ", base 1 of " << base1 << ", and base 2 of " << base2 << " is " << area << endl;
        }
        else if (shapeName == "Cone")
        {
            cout << "The surface area of your cone with radius of " << radius << " and height of " << height << " is " << area << "\n\n\n";
            outfile << "The surface area of your cone with radius of " << radius << " and height of " << height << " is " << area << endl;
        }
        else if (shapeName == "Paralellogram")
        {
            cout << "The area of your parallelogram with base of " << base << " and height of " << height << " is " << area << "\n\n\n";
            outfile << "The area of your parallelogram with base of " << base << " and height of " << height << " is " << area << endl;
        }
        else if (shapeName == "Circle")
        {
            cout << "The area of your circle with radius of " << radius << " is " << area << "\n\n\n";
            outfile << "The area of your circle with radius of " << radius << " is " << area << endl;
        }
    }
    outfile.close();
}