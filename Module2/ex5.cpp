//Example 5 — Store Coordinates in Arrays
#include <iostream>
using namespace std;

void inputCoordinates(float x[], int size);
void displayCoordinates(float x[], int size);

int main()
{
    const int SIZE = 5;

    float x[SIZE];

    inputCoordinates(x, SIZE);

    displayCoordinates(x, SIZE);

    return 0;
}

void inputCoordinates(float x[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter x coordinate "
             << i + 1 << ": ";

        cin >> x[i];
    }
}

void displayCoordinates(float x[], int size)
{
    cout << "\nCoordinates:\n";

    for(int i = 0; i < size; i++)
    {
        cout << "x[" << i << "] = "
             << x[i] << endl;
    }
}