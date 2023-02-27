#include <iostream>
using namespace std;

/*

Pattern 1:
0
0 1
0 1 2
0 1 2 3
0 1 2 3 4
0 1 2 3 4 5

Pattern 2:

         0
        1 1
       2 2 2
      3 3 3 3
     4 4 4 4 4
    5 5 5 5 5 5
   6 6 6 6 6 6 6
  7 7 7 7 7 7 7 7
 8 8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9 9

*/

/** 
 * 
 * 
 * 
 * 
 * 
 * 
 *     
 */
int main()
{

    int input;

    cout << "Enter row number: ";
    cin >> input;
    cout << "Pattern 1: " << endl;

    for (int i = 0; i <= input; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl;

    cout << "Enter row number: ";
    cin >> input;
    cout << "Pattern 2: " << endl
         << endl;

    for (int i = 0; i <= input; i++)
    {

        for (int j = input; j > i; j--)
        {

            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}