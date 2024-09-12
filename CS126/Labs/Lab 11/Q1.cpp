#include <iostream>
using namespace std;

int main()
{
    int array[]{5, 10, 14, 23, 23, 26, 0, 23, 84, 67};

    cout << sizeof(array) / sizeof(*array) << endl;

    // sizeof(array) = 4 bytes for each element * num of elements = 50;
    // sizeof(*array) = 4 bytes for int
    return 0;
}