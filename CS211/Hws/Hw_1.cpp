// Number of pairs: 3
#include <iostream>
#include <vector>
using namespace std;


// Finds number of pairs in an array.
void sockMerchant(int arr[],int x){


double ar = 0; // number of pairs
bool repeat; // checks if element was already tested 

vector <int> check;  //stores tested elements

for(int i=0;i < 9;i++){

repeat = false; 

int sum = 0; // number of repeats of element

    // iterates thru vector to check for tested elements:
    for (int k = 0;k < check.size();k++){  

            if (check[k] == arr[i]) {
                repeat = true;
            }
    
    }

    if (repeat == false) {

        for (int j = 0;j < 9; j++){
            
            if (arr[i] == arr[j] ) {
                
                if ( i != j ) {

                    sum++; 

                }
            
            }

        }

        // if sum is even 
        if (sum % 2 == 0 ) {

            ar += sum  / 2;


        }

        // else if its odd 

        else if (sum % 2 == 1) {

            ar += (sum + 1) / 2;

        }

        }
        
    // adds element to vector 
    check.push_back(arr[i]); 
    }


cout << "Number of pairs: " << ar << endl;

}

int main () {

int pairs[9]{10,20,20,10,10,30,50,10,20};

sockMerchant(pairs,9);
// sort the array
//in a for loop, if arr[i] == arr[i+1], pairs++ and move i over 2 

    return 0;
}