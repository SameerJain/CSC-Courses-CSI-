// make given triangle
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    { // itereates for 5 rows

        for (int x = 4; x > i - 1; x--)
        { // blank spaces is row number - 1

            cout << "x"; // made it x for visibility
        }

        for (int j = i; j < i * 2; j++)
        { // first num triangle

            cout << j << " ";
        }

        for (int k = (i - 1) * 2; k >= i; k--)
        { // second num triangle

            cout << k;
        }

        cout << endl; // ends line afer every row is done
    }

    return 0;
}