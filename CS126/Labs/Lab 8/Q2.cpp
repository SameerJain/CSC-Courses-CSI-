// floor/ceiling checker of first 2 parameters
#include <iostream>
using namespace std;

bool threenums(double x, double y, double z)
{

    int a = x * y;

    int b = z;
    cout << a << " " << b << endl;

    if (b == a)
    {

        return true;
    }

    else
    {
        return false;
    }
}

int main()
{

    cout << threenums(5.5, 4.1, 22);

    return 0;
}