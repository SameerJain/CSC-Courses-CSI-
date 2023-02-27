// make given triangle
#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int x = 1; x <= n; x++)
    {

        for (int z = 5; z > x; z--)
        {

            cout << " ";
        }

        for (int j = 1; j <= x; j++)
        {

            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
