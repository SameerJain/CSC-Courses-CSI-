// Gets sum of elements in array, but only even numbers
#include <iostream>
using namespace std;

int getevens(int q[], int size)
{

    int x;

    for (int i = 0; i < size; i++)
    {

        if (q[i] % 2 == 0)
        {
            x += q[i];
        }
    }

    return x;
}

int main()
{

    int arr[]{1, 5, 6, 4, 8, 7};

    int sum = getevens(arr, 6);

    cout << sum << endl;
    return 0;
}