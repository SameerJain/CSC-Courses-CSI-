// Using do while loop to print integer numbers 1 to 5.

#include <iostream>
using namespace std;

int main()
{

    int x = 1;

    do
    {

        cout << x << endl;
        x++; // adds 1 to x every time its run

    } while (x <= 5);

    return 0;
}