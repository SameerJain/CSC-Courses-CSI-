// make given triangle
#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int j = 1; j <= n; j++)
    {

        for (int i = 1; i <= j; i++)
        {

            cout << "*";

        } // nested for

        cout << endl;

    } // top for

    return 0;
} // int main