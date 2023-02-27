// make given triangle
#include <iostream>
using namespace std;

int main()
{

    int a = 5;

    for (int i = 1; i <= 5; i++)
    {

        for (int x = 4; x >= a; x--)
        {

            cout << " ";
        }

        for (int j = 1; j <= a; j++)
        {

            cout << j;
        }

        a--;
        cout << endl;
    }
}