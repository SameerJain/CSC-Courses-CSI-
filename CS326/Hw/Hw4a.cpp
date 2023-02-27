#include <iostream>
using namespace std;

void f(int theArray[], int n)
{
    for (int j = 0; j < n; ++j)
    {

        int i = 0;
        while (i <= j)
        {

            if (theArray[i] < theArray[j])
            {

                swap(theArray[i], theArray[j]);
            }
            ++i;
        } // end while
    }     // end for
} // end f

void printArray(int arr[], int n)
{
    cout << "(";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i];
        if (i != n - 1)
        {
            cout << ",";
        }
    }
    cout << ")"
         << "\n";
}

void bubbleSort(int arr[], int n)
{
    cout << "Start\n";
    printArray(arr, n);

    for (int i = 0; i < n - 1; i++)
    { // for the entire array

        for (int j = 0; j < n - 1 - i; j++)
        { // until the last element that isnt ran thru
            if (arr[j] > arr[j + 1])
            {                             // if the the current element is greater than
                                          // the one after it
                swap(arr[j], arr[j + 1]); // swap the element with the one after it
            }
            printArray(arr, n);
        }
        cout << endl;
    }

    cout << "End\n";
    printArray(arr, n);
}

void max_heap(int arr[], int n, int i)
{

    // make largest element the root of tree
    int largest = i;

    // left child index is twice the parent's
    int l = 2 * i;

    // right child index is the parent's + 1
    int r = 2 * i + 1;

    //  if left child exists in the array and is larger than root
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    // if right child exists in the array and is larger than root
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    // if current largest element is not the root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // then keep recursively heapifying until it is the largest
        max_heap(arr, n, largest);
    }
}
void min_heap(int arr[], int n, int i)
{

    // make smallest element the root of tree
    int smallest = i;

    // left child index is twice the parent's
    int l = 2 * i;

    // right child index is the parent's
    int r = 2 * i + 1;

    // if left child exists in the array and is smaller than root
    if (l < n && arr[l] < arr[smallest])
    {
        smallest = l;
    }
    // if right child exists in the array and is smaller than root
    if (r < n && arr[r] < arr[smallest])
    {
        smallest = r;
    }

    // if current smallest element is not the root
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);

        // then keep recursively heapifying until it is the smallest

        min_heap(arr, n, smallest);
    }
}

void heapSort(int arr[], int n)
{
    printArray(arr, n);
    // Build initial heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        max_heap(arr, n, i);
        printArray(arr, n);
    }

    // until the loop goes thru all elements in the array
    for (int i = n - 1; i >= 0; i--)
    {
        // move the max element to the back as its sorted
        swap(arr[0], arr[i]);
        printArray(arr, n);
        // then heapify the rest of the array
        max_heap(arr, i, 0);
        printArray(arr, n);
    }
}

void insertionSort(int arr[], int n)
{
    cout << "Start\n";
    int key, i, j;          // key is needed for insertion sort
    for (i = 1; i < n; i++) // i is the index of the current key
    {

        printArray(arr, n);

        key = arr[i]; // key is from arr[1] to arr[n-1]
        j = i - 1;    // j is for element before the current key

        while (j >= 0 && arr[j] > key) // this loop sorts elements BEFORE key
        {
            arr[j + 1] = arr[j]; // j + 1 shifts the element to the place after
            j = j - 1;           // decriment to compare the element we are sorting with the
            // previous elements
        }
        arr[j + 1] = key;
        // makes the key the location that was just emptied via
        // the shift on line 36 // this is the swapping of a key
        // and element that is larger then the key
    }
    cout << "End\n";
    printArray(arr, n);
}

void merge(int arr[], int start, int mid, int end)
{
    int arrOneSize = mid - start + 1; // gives size of first subarray
    int arrTwoSize = end - mid;

    int *arrOne = new int[arrOneSize]; // using the size to create arrays
    int *arrTwo = new int[arrTwoSize];

    for (int i = 0; i < arrOneSize; i++)
    {
        arrOne[i] = arr[start + i]; // copys data from arr to first sub arr, i
                                    // because we are operating on it
    }

    for (int i = 0; i < arrTwoSize; i++)
    {
        arrTwo[i] = arr[mid + 1 + i]; // copys data from arr to second sub arr
    }

    int arrOneIndex = 0;
    int arrTwoIndex = 0;
    int mergedArrIndex = start;

    while (arrOneIndex < arrOneSize && arrTwoIndex < arrTwoSize) // iterate over both subarrs
    {
        if (arrOne[arrOneIndex] <= arrTwo[arrTwoIndex]) // if first subarray has smaller or equal value
        {
            arr[mergedArrIndex] = arrOne[arrOneIndex]; // copy data over
            arrOneIndex++;                             // increment index of first subarr
        }
        else
        {
            arr[mergedArrIndex] = arrTwo[arrTwoIndex]; // copy data from second subarray over
            arrTwoIndex++;
        }
        mergedArrIndex++;
    }

    while (arrOneIndex < arrOneSize) // copy the remaining elements of left if there are any
    {
        arr[mergedArrIndex] = arrOne[arrOneIndex];
        arrOneIndex++;
        mergedArrIndex++;
    }
    while (arrTwoIndex < arrTwoSize) ////copy the remaining elements of right if there are any
    {
        arr[mergedArrIndex] = arrTwo[arrTwoIndex];
        arrTwoIndex++;
        mergedArrIndex++;
    }
    delete[] arrOne;
    delete[] arrTwo;
}

void mergeSort(int arr[], int start, int end)
{ // must do size - 1
    printArray(arr, end + 1);

    if (start >=
        end) // base case, if start is >= end we have proccessed all the indexes
    {

        return;
    }
    int mid = start + (end - start) / 2; // gives midpoint in subarr

    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1,
              end); // +1 so we dont operate on same index in both subarrs
    merge(arr, start, mid, end);
}

int partition(int arr[], int start, int end)
{ // Hoarse
    
    int pivot = arr[start];
    int i = start, j = end;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[start], arr[j]);

    return j;
}
void quickSort(int arr[], int start, int end)
{
    
    if (start < end)
    {
        int pivot = partition(arr, start, end);

        quickSort(arr, start, pivot);
        quickSort(arr, pivot + 1, end);
    }
    printArray(arr, end);
}

void selectionSort(int arr[], int n)
{ // selection sort algorithm
    cout << "Start\n";
    for (int i = 0; i < n; i++)
    {
        printArray(arr, n);
        int smallest = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[smallest])
                smallest = j;
        }
        if (smallest != i)
            swap(arr[i], arr[smallest]);
    }
    cout << "End\n";
    printArray(arr, n);
}

int main()
{

    int arr4[6]{20, 80, 40, 25, 60, 40};
    int arr5[6]{7, 12, 24, 4, 19, 32};
    int arr6[5]{12, 23, 5, 10, 34};
    int arr7[6]{20, 80, 40, 25, 60, 30};
    int arr8[7]{20, 80, 40, 25, 60, 10, 15};

    cout << "=======INSERTION SORT:============\n";
    insertionSort(arr4, 6);
    cout << "=======SELECTION SORT:============\n";
    selectionSort(arr5, 6);
    cout << "=======BUBBLE SORT:============\n";
    bubbleSort(arr6, 5);
    cout << "=======MERGESORT:================\n";
    mergeSort(arr7, 0, 6);
    cout << "=======QUICKSORT:================\n";
    quickSort(arr8, 0, 7);
    return 0;
}