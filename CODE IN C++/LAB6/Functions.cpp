    #include <iostream>
    #include <cmath>
    using namespace std;
    
    //Displays menu text
    void displayMenu()
    {
        cout << "Choose a shape to calculate area or 5 to quit:" << endl;
        cout << "\t1. Square" << endl;
        cout << "\t2. Rectangle" << endl;
        cout << "\t3. Parallelogram" << endl;
        cout << "\t4. Circle" << endl;
        cout << "\t5. End Program" << endl;
        cout << "CHOOSE 1-5: ";
    }

    // Calculates and returns area of a square
    double areaSquare(double s)
    {
        double area = pow(s, 2);
        cout << "\nThe area of your square is " << area << "\n\n\n";
        return area;
    }

    // Calculates and returns area of a rectangle
    double areaRectangle(double s1, double s2)
    {
        double area = s1 * s2;
        cout << "\nThe area of your rectangle is " << area << "\n\n\n";
        return area;
    }

    // Calculates and returns area of a parallelogram
    double areaParallelogram(double s1, double s2)
    {
        double area = s1 * s2;
        cout << "\nThe area of your rectangle is " << area << "\n\n\n";
        return area;
    }

    // Calculates and retuns area of a circle
    double areaCircle(double r)
    {
        double area = M_PI * pow(r, 2);
        cout << "\nThe area of your circle is " << area << "\n\n\n";
        return area;
    }