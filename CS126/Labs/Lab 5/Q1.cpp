// make given triangle
#include <iostream>
using namespace std;

int main()
{

    // first part

    for (int i = 1; i <= 4; i++)
    {

        for (int x = 5; x > i; x--)
        {

            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    // second part

    for (int a = 5; a <= 7; a++)
    {

        for (int b = 1; b <= a; b++)
        {

            cout << b << " ";
        }
        cout << endl;
    }

    return 0;
}