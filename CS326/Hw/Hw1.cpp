#include <iostream>
using namespace std;

// 1
int sumFind(int n)
{

    if (n == 1)
    {
        return n;
    }

    else
        return n + sumFind(n - 1);
}

// 2
int getValue(int a, int b, int n)
{
    int returnValue;
    cout << "test" << endl;
    cout << "Enter : a =" << a << "b =" << b << endl;
    int c = (a + b) / 2;
    if (c * c <= n)
    {
        cout << "test3" << endl;
        returnValue = c;
    }
    else
    {
        cout << "test4" << endl;
        returnValue = getValue(a, c - 1, n);
    }

    cout << "Leave : a =" << a << "b =" << b << endl;
    cout << "test2" << endl;
    return returnValue;
}

// 3

int binarySearch(int arr[], int L, int H, int key)
{

    if (L > H)
    {
        return -1;
    }

    int mid = (L + H) / 2;

    cout << L << " " << H << " " << key << " " << mid << endl;
    if (arr[mid] == key)
    {
        cout << "test" << arr[mid] << " " << key << endl;
        return mid;
    }

    else if (arr[mid] > key)
    {
        return binarySearch(arr, L, mid - 1, key);
    }

    else
    {
        return binarySearch(arr, mid + 1, H, key);
    }

    return -1;
}
// int arr[]{5, 9, 12, 15, 21, 29, 31};
// cout << binarySearch(arr, 0, 6, 13) << endl;

// 4

int power1(int x, int n)
{

    int product = 1;

    while (n != 0)
    {
        product *= x;
        n--;
    }

    return product;
}
// cout << power2(2,5) << endl;

int power2(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }

    else
    {
        return x * power2(x, n - 1);
    }
}

int power3(int x, int n)
{

    int y;

    if (n == 0)
    {
        return 1;
    }

    else
    {
        y = power3(x,n / 2) ;

        if (n % 2 == 0)
        {
            return y * y;
        }

        else
        {
            return y * y * x;
        }
    }
    return -1;
}

int main()
{

    cout << power3(2, 3) << endl;

    return 0;
}
