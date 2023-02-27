/*
Question 1:
Enter number of calculations: 5
Enter base and then exponent: 1
5
Function Call
Base case. N= 0
Recursive Call. N= 1
Recursive Call. N= 2
Recursive Call. N= 5
1
Enter base and then exponent: 45
4
Function Call
Base case. N= 0
Recursive Call. N= 1
Recursive Call. N= 2
Recursive Call. N= 4
4100625
Enter base and then exponent: 3
13
Function Call
Base case. N= 0
Recursive Call. N= 1
Recursive Call. N= 3
Recursive Call. N= 6
Recursive Call. N= 13
1594323
Enter base and then exponent: 4
4
Function Call
Base case. N= 0
Recursive Call. N= 1
Recursive Call. N= 2
Recursive Call. N= 4
256
Enter base and then exponent: 3
12
Function Call
Base case. N= 0
Recursive Call. N= 1
Recursive Call. N= 3
Recursive Call. N= 6
Recursive Call. N= 12
531441

Question 2:
Enter number of Sorts: 3

Enter array length: 2
Enter the number of integers to sort: 2
33
3
3 33
Enter array length: 8
Enter the number of integers to sort: 7
8
7
6
5
4
3
3
1
3 3 4 5 6 7 8 1
Enter array length: 10
Enter the number of integers to sort: 10
43
54
34
543
33
46
34
53
32
15
15 32 33 34 34 43 46 53 54 543

Towers of Hanoi:
Move disk 1 from rod A to rod C  mid:B
Move disk 2 from rod A to rod B  mid:C
Move disk 1 from rod C to rod B  mid:A
Move disk 3 from rod A to rod C  mid:B
Move disk 1 from rod B to rod A  mid:C
Move disk 2 from rod B to rod C  mid:A
Move disk 1 from rod A to rod C  mid:
*/
#include <iostream>
#include <cmath>
using namespace std;

// Global Variables 
int length{};
int* arr{new int[length]{} };

// Q1 Compute the exponent of a number

int exponent(int x, int n) {

    int y;


	if(n == 0){

        cout << "Base case. N= " << n <<  endl;

		return 1;

	}

    y = exponent(x,n/2);

    if( n > 0 ) {

		if (n % 2 == 0) {

            cout << "Recursive Call. N= " << n << endl;

			return  y * y ;

		}

		else {

            cout << "Recursive Call. N= " << n << endl;

            return x * y * y ;

        }

	}
    
    cout << "Number of multiplications = " << n << endl;

    
    return n; 
    
}

// Q2 Resursive Insertion Sort

void sort (int arr[], int z) {

if ( z <= 1) {

    return;
}

// Recursive Call

sort( arr, z - 1);

int key = arr[z -1]; 

int j = z - 2;

while (j >= 0 && arr[j] > key) {

    arr[j+1] = arr[j];

    j--;

}

arr[j + 1] = key;

}

//Q3 

void towers(int n, char start, char end, char mid)
{

    if (n == 0) {
        return;
    }

    towers(n - 1, start, mid , end);

    cout << "Move disk " << n << " from rod " << start << " to rod " << end << "  mid:" << mid <<  endl;

    towers(n - 1, mid, end , start );


}



int main () {

double x;
double n;
int counter;


//Q1


cout << "Question 1: " << endl;

cout << "Enter number of calculations: " ;
cin  >> counter;

while (counter > 0) {

cout << "Enter base and then exponent: " ;

cin >> x >> n ;

cout << "Function Call" << endl;

cout << exponent(x,n) << endl;

counter--;

}


//Q2

cout << endl << "Question 2: " << endl;

int length{};
int* arr{new int[length]{} };
int sortSum;


cout << "Enter number of Sorts: " ;

cin >> counter;

while(counter > 0) {

cout << endl << "Enter array length: ";

cin >> length;

cout << "Enter the number of integers to sort: " ;

cin >> sortSum;


for(int i=0; i<length; i++) {
    cin >> arr[i];
}


sort(arr, sortSum); 


for(int i = 0; i < length; i++) {
    cout << arr[i] << " ";
}

counter--;

}


//Q3

    cout << endl << endl << "Towers of Hanoi: " << endl;

    towers(3, 'A', 'C', 'B');


    return 0;

}