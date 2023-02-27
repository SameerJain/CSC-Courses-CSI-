#include <iostream>
using namespace std;

int main()
{
    int k = 10;
    int i = 1;

    while (i != 5)
    {
        int j = 4;
        while (j >= i)
        {

            cout << k << " ";
            k--;
            j--;
        }

        i++;
        cout << endl;
    }

    return 0;
}