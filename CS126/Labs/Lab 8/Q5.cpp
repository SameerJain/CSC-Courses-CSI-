// demonstrate function overloading
#include <iostream>
#include <cmath>
using namespace std;

int larger(double x, double y)
{

    return x * x - y / pow(x, y);
}

double larger(int x, double y, int z)
{

    return z + x + y + sqrt(z);
}

int main()
{

    cout << larger(5.1, 6.7) << endl;
    cout << larger(6.8, 9.9, 10);

    return 0;
}