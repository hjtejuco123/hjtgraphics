//Example 10 — Simple 2D Translation System
#include <iostream>
using namespace std;

void inputPoints(float x[],
                 float y[],
                 int size);

void translate(float *x,
               float *y,
               int size,
               float dx,
               float dy);

void displayPoints(float x[],
                   float y[],
                   int size);

int main()
{
    const int SIZE = 3;

    float x[SIZE];
    float y[SIZE];

    float dx;
    float dy;

    cout << "ENTER TRIANGLE VERTICES\n";

    inputPoints(x, y, SIZE);

    cout << "\nTranslation in x: ";
    cin >> dx;

    cout << "Translation in y: ";
    cin >> dy;

    translate(x, y, SIZE, dx, dy);

    cout << "\nNEW TRIANGLE VERTICES\n";

    displayPoints(x, y, SIZE);

    return 0;
}

void inputPoints(float x[],
                 float y[],
                 int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "\nVertex " << i + 1 << endl;

        cout << "x: ";
        cin >> x[i];

        cout << "y: ";
        cin >> y[i];
    }
}

void translate(float *x,
               float *y,
               int size,
               float dx,
               float dy)
{
    for(int i = 0; i < size; i++)
    {
        *(x + i) += dx;
        *(y + i) += dy;
    }
}

void displayPoints(float x[],
                   float y[],
                   int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Vertex "
             << i + 1
             << " = ("
             << x[i]
             << ", "
             << y[i]
             << ")\n";
    }
}