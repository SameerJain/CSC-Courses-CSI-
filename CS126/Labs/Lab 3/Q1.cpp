/* Using while loop to write a program to find the sum of positive numbers (using cin to get the numbers), if the user enters a negative number, the loop ends.
Output the value of sum after the loop.
*/
#include <iostream>
using namespace std;

int main()
{

    int i;
    int total;

    cout << "Enter numbers:\n";

    while (i >= 0)
    {

        cin >> i;

        if (i >= 0)
        {
            total = total + i;
        }

        else
        {
            cout << "Total: " << total;
        }
    }

    return 0;
}