// (x^2 +y) + (x + y^2)
#include <iostream>
using namespace std;
#include <cmath>

double adder(double x, double y)
{

    return pow(x, y) + pow(y, x);
}

int main()
{

    cout << adder(7.5, 3.3);

    return 0;
}
