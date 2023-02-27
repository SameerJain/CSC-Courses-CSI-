#include <iostream>
using namespace std;

int main()
{

    int m = 0;
    int n = 0;

    if ((m == 0 && n == 0) || m == 1 || m == 2)
    {

        m++;
    }

    else
    {
        m += 2;
    }

    cout << m;
}