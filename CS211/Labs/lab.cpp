#include <iostream>
using namespace std;

struct studentType {

    char name[26];
    double gpa;

};

int main () {

// 
studentType student;
studentType* studentPtr; // a pointer points to a struct. 
// The pointer is the user defined struct type 

studentPtr = &student;
// a structType pointer points to a structType object

// student.gpa = 3.8; // without using pointer 

student.gpa = 3.8;

(*studentPtr).gpa = 3.8; 
// must have (), because 



// pointers 
int arr[5]{1,2,3,4,5};
int* ptr;
ptr = arr;
for (int i = 0; i < 5; i++) {
    cout << *(ptr + i) << " ";
}





    return 0;

}

