//Example 8 — Pointer Modification
#include <iostream>
using namespace std;

void moveX(float *x, float amount);

int main()
{
    float x;
    float movement;

    cout << "Enter current x coordinate: ";
    cin >> x;

    cout << "Enter movement amount: ";
    cin >> movement;

    moveX(&x, movement);

    cout << "\nNew x coordinate = "
         << x << endl;

    return 0;
}

void moveX(float *x, float amount)
{
    *x = *x + amount;
}