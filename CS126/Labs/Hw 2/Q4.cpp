#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double user_num1, user_num2, user_num3;

    // 1) Prompts the user to input 3 decimal numbers (with a fraction part).
    cout << " Enter 3 numbers with decimal places:" << endl;

    cout << " \nNum 1: ";
    cin >> user_num1;

    cout << "Num 2: ";
    cin >> user_num2;

    cout << "Num 3: ";
    cin >> user_num3;

    // 2) Prints the three decimal numbers.

    cout << endl
         << "Your 3 numbers are : " << endl
         << user_num1 << endl
         << user_num2 << endl
         << user_num3 << endl;

    // 3 Converts each decimal number to the nearest integer.

    int x = round(user_num1);
    int y = round(user_num2);
    int z = round(user_num3);

    // 4 Prints the three converted numbers.

    cout << "\nThe nearest integers for the 3 numbers are:" << endl;

    cout << x << endl
         << y << endl
         << z << endl;

    return 0;
}