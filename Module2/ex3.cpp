/*
Example 3 — Distance Between Two Graphics Points
*/

#include <iostream>
#include <cmath>
using namespace std;

double distance2D(double x1,
                  double y1,
                  double x2,
                  double y2);

int main()
{
    double x1, y1;
    double x2, y2;

    cout << "Enter Point 1 x: ";
    cin >> x1;

    cout << "Enter Point 1 y: ";
    cin >> y1;

    cout << "Enter Point 2 x: ";
    cin >> x2;

    cout << "Enter Point 2 y: ";
    cin >> y2;

    cout << "\nDistance = "
         << distance2D(x1,y1,x2,y2)
         << endl;

    return 0;
}

double distance2D(double x1,
                  double y1,
                  double x2,
                  double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;

    return sqrt(pow(dx,2) + pow(dy,2));
}