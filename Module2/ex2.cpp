/*
Example 2 — Math Function Calculator
Concepts
predefined math functions
sqrt
cbrt
pow
fabs
*/
#include <iostream>
#include <cmath>
using namespace std;

void displayResults(double number);

int main()
{
    double number;

    cout << "Enter a number: ";
    cin >> number;

    displayResults(number);

    return 0;
}

void displayResults(double number)
{
    cout << "\nAbsolute value: "
         << fabs(number) << endl;

    cout << "Square: "
         << pow(number, 2) << endl;

    cout << "Cube: "
         << pow(number, 3) << endl;

    cout << "Cube root: "
         << cbrt(number) << endl;

    if(number >= 0)
    {
        cout << "Square root: "
             << sqrt(number) << endl;
    }
    else
    {
        cout << "Square root is not a real number.\n";
    }
}