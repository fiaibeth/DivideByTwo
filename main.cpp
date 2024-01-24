// **************************************************************************
// Programmer: SOFIA SILVA
// Date: 18 JAN. 2024
// Program: Asks the user for a number. The program then divides that
//          number by 2 and displays the answer as a float.

#include <iostream>
using namespace std;

int main()
{
    double number;     // Holds the user's input
    double result;     // Holds the answer to the user's input div. by 2

    cout << "Enter a number: ";
    cin >> number;

    result = number / 2.0;            // Divides the user's input by 2

    cout << number << " divided by 2 is " << result << endl;

    return 0;
}