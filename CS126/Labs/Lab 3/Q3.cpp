// q1 with do-while
#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    int total = 0;

    cout << "Enter numbers:\n"; // Must be outside of loop to only print once

    do
    {

        cin >> i;

        if (i < 0)
        {

            cout << "Total: " << total;
        }
        // For when i is negative

        total = total + i;

    } while (i >= 0); // As long as i is positve

    return 0;
}