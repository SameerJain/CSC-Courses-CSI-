// multiplies all the digits of given number
#include <iostream>
using namespace std;

int product_sum(int x)
{

    int y = 1;

    while (x > 0)
    {

        y *= x % 10;

        x /= 10;
    }

    return y;
}

int main()
{

    int input;

    cout << "Enter a number: ";

    cin >> input;

    cout << "Product of all digits: ";

    cout << product_sum(input);

    return 0;
}