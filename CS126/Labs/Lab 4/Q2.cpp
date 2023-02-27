
#include <iostream>
using namespace std;

int main()
{

    int n = 5; // number of rows

    for (int j = 1; j <= n; j++)
    { // number of rows

        for (int i = 1; i <= j; i++)
        { // prints per row

            cout << i;
        }

        cout << endl;
    }

    return 0;
}