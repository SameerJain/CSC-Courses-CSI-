#include <iostream>
using namespace std;

int main()
{
    int k = 10;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {

            cout << k << " ";
            k--;
        }
        cout << endl;
    }

    return 0;
}