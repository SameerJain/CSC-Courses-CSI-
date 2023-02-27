/*
5321
1256
Enter highest degree for 1st term:
5
Enter highest degree for 2nd term:
2
Enter coefficients for 1st term:
1
0
0
0
1
0
Enter coefficients for 2nd term:
1
0
0
x^5+x
Enter x: 3

246243166
x^5+x^2+x
*/

#include <iostream>
#include <vector>
using namespace std;

// Part 1

int numReverse1(int x)
{

    int reversed = 0;

    while (x > 0)
    {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }

    return reversed;
}

void numReverse2(int x)
{

    if (x < 10)
    {

        return;
    }

    else
    {
        cout << x % 10;
        numReverse2(x / 10);
    }
}

int main()
{

    // Prints method 1
    cout << numReverse1(1235) << endl;
    // Prints method 2
    numReverse2(26521);
    cout << endl;

    int top1;
    int top2;

    cout << "Enter highest degree for 1st term:\n";
    cin >> top1;

    cout << "Enter highest degree for 2nd term:\n";
    cin >> top2;

    int *coefficient1 = new int[top1 + 1];
    int *coefficient2 = new int[top2 + 1];

    // enter coefficients
    cout << "Enter coefficients for 1st term:\n";

    for (int i = 0; i <= top1; i++)
    {

        cin >> coefficient1[i];
    }

    cout << "Enter coefficients for 2nd term:\n";

    for (int i = 0; i <= top2; i++)
    {

        cin >> coefficient2[i];
    }

    // Print degree

    int degree = top1;

    for (int i = 0; i <= top1; i++)
    {

        if (degree > 0)
        {

            if (coefficient1[i] != 0)
            {

                if (coefficient1[i] != 1)

                {

                    cout << coefficient1[i];
                }

                cout << "x";

                if (degree > 1)
                {
                    cout << "^" << degree;
                }
            }

            if (coefficient1[i + 1] != 0)
            {

                cout << "+";
            }
        }

        else if (degree == 0)
        {

            if (coefficient1[i] != 0)
            {

                cout << coefficient1[i];
            }
        }

        degree--;
    }

    cout << endl;

    // find value of polynomial

    int sum = 0;
    degree = top1;
    int x;

    cout << "Enter x: ";
    cin >> x;

    for (int i = 0; i <= top1; i++)
    {

        int y = 1;

        if (degree >= 1)
        {

            for (int k = 0; k < degree; k++)
            {

                y = y * x;
            }

            sum += y * coefficient1[i];

            degree--;
        }

        else if (degree == 0)

            sum += coefficient1[i];
    }

    cout << endl
         << sum << endl;

    // adds 2 polynomials

    int highestCoE = 0;

    if (top1 > top2)
    {
        highestCoE = top1;
    }

    else if (top1 < top2 || top1 == top2)
    {
        highestCoE = top2;
    }

    int j = 0;
    int k = 0;

    for (int i = highestCoE; i >= 0; i--)
    {

        if (top1 == top2)
        {

            if (coefficient1[j] + coefficient2[k] != 0)
            {

                if (coefficient1[j] + coefficient2[k] != 1 && highestCoE > 1)
                {

                    cout << coefficient1[j] + coefficient2[k];
                }

                if (i >= 1)
                {

                    cout << "x";

                    if (i > 1)
                    {

                        cout << "^" << i;
                    }

                    if (coefficient1[j + 1] + coefficient2[k + 1] > 0)
                    {

                        cout << "+";
                    }
                }
            }

            j++;
            k++;
        }

        else if (top1 > top2)
        {

            if (coefficient1[j] != 0)
            {

                if (coefficient1[j] != 1)
                {

                    cout << coefficient1[j];
                }

                cout << "x^" << i << "+";
            }

            top1--;
            j++;
        }

        else if (top2 > top1)
        {

            if (coefficient2[k] != 0)
            {

                if (coefficient2[k] != 1)
                {

                    cout << coefficient2[k];
                }

                cout << "x^" << i << "+";
            }

            top2--;
            k++;
        }
    }

    return 0;
}
