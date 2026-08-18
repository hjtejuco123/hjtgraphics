//Example 4 — Circle Calculator
#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double radius);
double calculateCircumference(double radius);

int main()
{
    double radius;

    cout << "Enter circle radius: ";
    cin >> radius;

    cout << "\nArea = "
         << calculateArea(radius);

    cout << "\nCircumference = "
         << calculateCircumference(radius);

    cout << endl;

    return 0;
}

double calculateArea(double radius)
{
    const double PI = 3.141592653589793;

    return PI * pow(radius,2);
}

double calculateCircumference(double radius)
{
    const double PI = 3.141592653589793;

    return 2 * PI * radius;
}