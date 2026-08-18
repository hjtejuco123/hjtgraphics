//Example 7 — Array Average Through a Function
#include <iostream>
using namespace std;

void inputPixels(int pixels[], int size);
double averagePixel(int pixels[], int size);

int main()
{
    const int SIZE = 5;

    int pixels[SIZE];

    inputPixels(pixels, SIZE);

    cout << "\nAverage brightness = "
         << averagePixel(pixels, SIZE)
         << endl;

    return 0;
}

void inputPixels(int pixels[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter pixel brightness 0-255: ";
        cin >> pixels[i];
    }
}

double averagePixel(int pixels[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
        sum += pixels[i];

    return static_cast<double>(sum) / size;
}