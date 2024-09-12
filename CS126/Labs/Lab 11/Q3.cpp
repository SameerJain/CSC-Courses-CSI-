#include <iostream>
using namespace std;

void count_occurences(int nums[], int length, int n)
{

    int occurrences = 0;

    for (int i = 0; i <= length; i++)
    {
        if (nums[i] == n)
        {
            occurrences++;
        }
    }
    cout << n << " is in the array " << occurrences << " times" << endl;
}

int main()
{

    int nums[]{5, 7, 8, 8, 5, 8, 7, 7};

    int length{7};

    int n{7};

    count_occurences(nums, length, n);

    return 0;
}