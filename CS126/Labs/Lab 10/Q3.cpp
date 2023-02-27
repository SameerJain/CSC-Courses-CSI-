// Gets sum of elements in array
#include <iostream>
using namespace std;

int getsum(int q[], int size)
{

    int x;

    for (int i = 0; i < size; i++)
    {

        x += q[i];
    }

    return x;
}

int main()
{

    int arr[]{1, 5, 6, 4, 8, 7};

    int sum = getsum(arr, 6);

    cout << sum << endl;
    return 0;
}