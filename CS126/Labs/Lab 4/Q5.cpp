// random number game
#include <iostream>
#include <stdlib.h> // for randomizer
using namespace std;

int main()
{

    srand(time(NULL)); // brings in srand

    int num = rand() % 100;
    int guess;
    cout << "I have selected a number from 1-100\n";
    cout << "Guess what it is:\n";

    while (guess != num)
    {

        cin >> guess;

        if (guess > num)
        {

            cout << "Guess Lower\n";
        }

        else if (guess < num)
        {

            cout << "Guess Higher\n";
        }

        else if (guess == num)
        {

            cout << "Correct!\n";
        }

    } // for
    return 0;
}