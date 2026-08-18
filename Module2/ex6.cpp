//Example 6 — Store 2D Graphics Points
#include <iostream>
using namespace std;

void inputPoints(float x[],
                 float y[],
                 int size);

void displayPoints(float x[],
                   float y[],
                   int size);

int main()
{
    const int SIZE = 4;

    float x[SIZE];
    float y[SIZE];

    inputPoints(x, y, SIZE);

    displayPoints(x, y, SIZE);

    return 0;
}

void inputPoints(float x[],
                 float y[],
                 int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "\nPoint " << i + 1 << endl;

        cout << "x: ";
        cin >> x[i];

        cout << "y: ";
        cin >> y[i];
    }
}

void displayPoints(float x[],
                   float y[],
                   int size)
{
    cout << "\nPOINT LIST\n";

    for(int i = 0; i < size; i++)
    {
        cout << "P" << i + 1
             << " = ("
             << x[i]
             << ", "
             << y[i]
             << ")\n";
    }
}