#include <iostream>
using namespace std;

int main()
{

    char input;
    double total;
    int lines;

    cout << "Enter P for Plus, U for Unlimited: ";
    cin >> input;
    cout << "Enter amount of lines: ";
    cin >> lines;

    if (input == 'U')
    {
        total = 125;
    }

    else if (input == 'P')
    {
        total = 155;
    }

    if (lines > 2)
    {
        total += (lines - 2) * 20;
    }

    total *= 1.188;

    cout << total;

    return 0;
}