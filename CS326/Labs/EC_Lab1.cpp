/* Array 1: Subset of integers exists.
Sequence:
6 8 1
Array 2: Subset of integers does not exist. 




 Asymptotic complexity in terms of size of `arr` `n`:
* Time: O(2^n).
* Auxiliary space: O(n).
* Total space: O(n).
"""

def check_if_sum_possible(arr, k):
    length = len(arr)

    def _check_sum_possible(curr_index, sum_so_far, at_least_one):
        if curr_index >= length:
            # Base condition: we have handled all the numbers in arr.
            # Some of those numbers we included in our group, others we left out.

            # Now let us check if the group of numbers that we picked
            # sums up to exactly k or not. We make sure not to consider the
            # empty group, checking at_least_one takes care of that:
            return at_least_one and sum_so_far == k

        # We explore both cases: either we include arr[curr_index] in the group or we don't.
        # Returning True if either choice finds a group that sums up to exactly k.
        return  _check_sum_possible(curr_index + 1, sum_so_far + arr[curr_index], True) or \
                _check_sum_possible(curr_index + 1, sum_so_far, at_least_one)

    return _check_sum_possible(0, 0, False)







*/
#include <iostream>
#include <vector>
using namespace std;

bool partition(int arr[], int n, int target);

vector<int> seqBank; // stores sequence of integers for target

int main()
{

    // Array 1
    int arr1[5]{5, 10, 6, 8, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]); // number of elements in the array
    int arr1_halfSize = 0;

    // Array 2
    int arr2[20]{1, 5, 7, 34, 76, 54, 23, 19, 22, 81, 44, 77, 29, 40, 11, 42, 43, 31, 57, 61};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr2_halfSize = 0;

    // return halfsize of the arrays
    for (int i = 0; i < n1; i++)
    {
        arr1_halfSize += arr1[i];
    }
    arr1_halfSize /= 2;
    for (int i = 0; i < n2; i++)
    {
        arr2_halfSize += arr2[i];
    }
    arr2_halfSize /= 2;

    // Output
    // partition 1
    if (partition(arr1, n1, arr1_halfSize) == true)
    {

        cout << "Array 1: Subset of integers exists. Sequence: \n";
        for (int i = seqBank.size() - 1; i >= 0; i--)
        {
            cout << seqBank[i] << " "; // print sequence of answers
        }
        cout << endl;
    }
    else
    {

        cout << "Array 1: Subset of integers does not exist.\n";
    }


    seqBank.clear(); // clear answer bank
    // partiton 2
    if (partition(arr2, n2, arr2_halfSize) == true)
    {

        cout << "Array 2: Subset of integers exists. Sequence: \n";
        for (int i = seqBank.size() - 1; i >= 0; i--)
        {
            cout << seqBank[i] << " ";
        }
    }

    else
    {

        cout << "Array 2: Subset of integers does not exist.\n";
    }

    return 0;
}

bool partition(int arr[], int n, int target) // Checks if there exists a subset of intergers that equal half the sum
{
\
    if (target == 0)
    { // if target has reached 0, then a subset was found
        return true;
    }

    else if (n == 0)
    { // or there wasnt a subset in which this was the case
        seqBank.clear();
        return false;
    }

    // if the next element is greater than the amount left, you know that you need to move on

    else if (target < arr[n - 1])
    {
        
        return partition(arr, n - 1, target);
    }

    else
    {
        seqBank.push_back(arr[n - 1]);
        return partition(arr, n - 1, target - arr[n - 1]) || partition(arr,n-1,target); // run thru array, and also check if it can be achieved from that same element
    }
}