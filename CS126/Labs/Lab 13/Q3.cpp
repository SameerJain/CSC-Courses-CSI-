#include <iostream>
using namespace std;

int main()
{

    int x[5]{1, 2, 3, 4, 5};
    int y[5];

    for (int i = 0; i < 5; i++)
    {

        y[i] = x[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << y[i];
    }
    return 0;
}