#include <iostream>
#include <iomanip>
using namespace std;


/*  
                                             1  
                                          2  1  2  
                                       3  2  1  2  3  
                                    4  3  2  1  2  3  4  
                                 5  4  3  2  1  2  3  4  5  
                              6  5  4  3  2  1  2  3  4  5  6  
                           7  6  5  4  3  2  1  2  3  4  5  6  7  
                        8  7  6  5  4  3  2  1  2  3  4  5  6  7  8  
                     9  8  7  6  5  4  3  2  1  2  3  4  5  6  7  8  9 
*/

void triangle ( int x){



for(int i = 1; i <= x; i++ ) {

    // Triangle for spaces
    for (int k = (x*2) - 2; k > i ;k--) {
        cout << "    ";
        
    }



    // First triangle
    for(int m = i; m > 1; m--){
        cout <<  setw(4)  << m;
    } 


    // Second triangle
    for(int j = 1; j < i; j++) {
        cout << setw(4) << j  ;
    }



    cout << endl;

}

}

int main()
{

int input;
bool valid = false;

// Check if input is valid (1 - 15)

    while(valid == false) {
    cout << "Enter row num from 1 - 15: ";
    cin >> input;

    if(input < 1 || input > 15) {
        cout << "Invalid. Try again." << endl;
    }

    else{

    valid = true;

    }



} 

triangle(input);




    return 0;
}