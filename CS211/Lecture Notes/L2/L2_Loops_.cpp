#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

    // for up to 10

    for (int i = 0; i < 10; i++)
    {
        cout << "*";
    }

    cout << endl
    << endl;

    // 3

                for (int i = 0; i < 10; i++)
    {

        cout << "**********" << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < 10; i++)
    {

        cout << "**********" << endl;
        cout << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < 10; i++)
    {

        for (int i = 0; i < 10; i++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < 10; i--)
    {

        for (int j = 0; j < i; j--)
        {
            cout << "*";
        }
    }

    for (int i = 10; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Times table

    for (int i = 1; i < 10; i++)
    {

        for (int j = 1; j < i; j++)
        {

            cout << setw(3) << i << 'x' << j << '=' << setw(2) << i * j;
        }

        cout << endl;
    }

    int input;
    cout << "Enter number of rows: ";
    cin >> input;

    for (int i = 0; i <= input; i++)
    {

        for (int z = input; z > i; z--)
        {

            cout << " ";
        }

        for (int j = 1; j < i; j++)
        {

            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    cout << endl;

    for (int i = input; i > 0; i--)
    {

        for (int z = input; z > i; z--)
        {

            cout << " ";
        }

        for (int j = i; j >= 0; j--)
        {

            cout << "*"
                 << " ";
        }

        cout << endl;
    }
}
