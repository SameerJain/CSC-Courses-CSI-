#include <iostream>
using namespace std;

/* Output

1 is located in the array.
a two digit number is NOT located in the array.
9 is in the array 2 times.
There are 1 3 digit numbers.

*/

// Q1 - if there is a certain value in an int type array

void search1(int a[], int size, int num)
{
bool found = true;

    for (int i = 0; i < size; i++)
    {

        if (a[i] == num)
        {

            found = true;
            break;
        }

        else
        {

            found = false;
        }
    }

    if (found)
    {

        cout << num << " is located in the array.\n";
    }

    else
    {
        cout << num << " is NOT located in the array\n";
    }
}

// Q2 - if there is any 2-digit value in an int type array
void search2(int a[], int size)
{
    bool found = true;
    for (int i = 0; i < size; i++)
    {

        if (a[i] >= 10 && a[i] < 100)
        {

            found = true;
            break;
        }

        else
        {

            found = false;
        }
    }

    if (found)
    {

        cout << "a two digit number is located in the array.\n";
    }

    else
    {

        cout << "a two digit number is NOT located in the array.\n";
    }
}

// Q3-how many of a certain value in an int type array

void search3(int a[], int size, int num)
{

    int counter = 0;

    for (int i = 0; i < size; i++)
    {

        if (a[i] == num)
        {

            counter++;
        }
    }

    cout << num << " is in the array " << counter << " times." << endl;
}

// Q4 - how many 3-digit values in an int type array

void search4(int a[], int size)
{

    int counter = 0;

    for (int i = 0; i < size; i++)
    {

        if (a[i] >= 100 && a[i] < 1000)
        {

            counter++;
        }
    }

    cout << "There are " << counter << " 3 digit numbers. " << endl;
}

int main()
{

    int ary[10]{4, 1, 9, 0, 3, 9, 8, 989, 0, 0};

    search1(ary, 10, 1);
    search2(ary, 10);
    search3(ary, 10, 9);
    search4(ary, 10);

    return 0;
}