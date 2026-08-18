//Example 1 — Four Basic Function Types
/*
Concepts
function prototype
void
parameter
return value
user input
*/
#include <iostream>
using namespace std;

void showTitle();
void displayValue(int value);
int getNumber();
int square(int number);

int main()
{
    showTitle();

    int number = getNumber();

    displayValue(number);

    cout << "Square = " << square(number) << endl;

    return 0;
}

void showTitle()
{
    cout << "FUNCTION DEMONSTRATION\n";
}

void displayValue(int value)
{
    cout << "You entered: " << value << endl;
}

int getNumber()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    return number;
}

int square(int number)
{
    return number * number;
}