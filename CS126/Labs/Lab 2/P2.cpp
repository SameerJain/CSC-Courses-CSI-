// make average 2 num
#include <iostream>
using namespace std;

int main()
{

    int a;
    double b;

    a = 10;
    b = 3.7;
    a += 3;   // same as a = a + 3;
    b *= 4.0; // same as b = b * 4.0;

    cout << "a is " << a << ", b is " << b << endl;

    cout << "The average is " << (a + b) / 2 << endl;

    a = -1;

    cout << "a is " << a << endl;

    return 0;
}