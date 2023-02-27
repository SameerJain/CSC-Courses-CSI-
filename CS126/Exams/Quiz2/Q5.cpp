#include <iostream>
using namespace std;

int pow(int x, int y)
{

    int product = 1;
    while (y > 0)
    {

        product = product * x;

        y--;
    }
    return product;
}

int main()
{

    int a, b;
    cout << "Enter base, then exponent: \n";
    cin >> a;
    cin >> b;

    cout << pow(a, b);
    return 0;
}