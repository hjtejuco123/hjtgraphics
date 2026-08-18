//Example 9 — Traverse Graphics Coordinates Using Pointers
#include <iostream>
using namespace std;

void inputValues(float *ptr, int size);
void displayValues(float *ptr, int size);

int main()
{
    const int SIZE = 5;

    float coordinates[SIZE];

    inputValues(coordinates, SIZE);

    displayValues(coordinates, SIZE);

    return 0;
}

void inputValues(float *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter coordinate "
             << i + 1 << ": ";

        cin >> *(ptr + i);
    }
}

void displayValues(float *ptr, int size)
{
    cout << "\nCoordinates\n";

    for(int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << endl;
    }
}