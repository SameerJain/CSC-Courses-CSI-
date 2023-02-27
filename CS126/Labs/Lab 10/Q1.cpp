// adds up all the digits of given number
#include <iostream>
using namespace std;

int dig_sum(int x)
{

    int y;

    while (x > 0)
    {

        if (x % 2 == 0)
        {
            y += x % 10;
        }

        x /= 10;
    }

    return y;
}

int main()
{

    int input;

    cout << "Enter a number: ";

    cin >> input;

    cout << "Sum of all digits: ";

    cout << dig_sum(input);

    return 0;
}