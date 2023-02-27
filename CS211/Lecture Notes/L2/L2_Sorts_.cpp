#include <iostream>
#include <fstream>
using namespace std;

// ----------------------------------------------------------------
void selectionsort(int arr[], int n)
{

    for (int i = 0; i < n ; i++) {

	for(int j = 0; j  < n ; j++) {

	if ( arr[j] > arr[j +1 ] ) {
    swap (arr[j], arr[j + 1]);
    }


    


}

}


for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


}

int main()
{

    int arr[8]{16, 30, 24, 7, 62, 45, 5, 55};

    selectionsort(arr, 8);
}