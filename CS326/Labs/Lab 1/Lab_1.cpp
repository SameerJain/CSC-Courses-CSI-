#include <iostream>
#include <fstream>
#include <iomanip>
#include "Lab_1.h"
using namespace std;


int main () {

// set all values to 0 

for (int i = 0; i < 10; i++) {
    Programmers[i].code = 0;
    Programmers[i].comment = 0;
}


// read in files
    ifstream inputFile;

    inputFile.open("program.txt");

    if(!inputFile){
    cout << "Error while opening. << '\n'";
    return 0;
    }


  // programmer number, lines of code, lines of comments
    int a,b,c;
    int winner = 0;
    int sum = 0;
    int arr[10];
    int min;
    int counter = 0;

cout << "Start of reading in files" << endl;

while (inputFile >> a >> b >> c ) {

Programmers[a-1].code += b;
Programmers[a-1].comment += c;

cout << a << " " << b << " " << c << endl;

if (Programmers[a-1].code >= 1000 && winner < 1000) {

    winner = a - 1 ;
}

arr[a] = Programmers[a-1].code;

}

cout << "End of reading in files" << endl << endl;

cout << "PROGRAMMER PROGRESS" << endl;
cout << left << setw(20) <<  "Programmer  " << setw(20) <<  "Lines of code  " << setw(20) << "Lines of comments  " << endl;

for(int i = 1; i <= winner; i++){

min = i;

for(int j = i + 1; j < 10; j++) {

if(arr[j] < arr[min]){
    min = j;
} 

swap(arr[min], arr[i]);

}

cout << left << setw(20) << i << " " << setw(20) <<  Programmers[i -1].code << " " << setw(20) << Programmers[i-1].comment << endl;
}



while(sum <= 1000){

sum += arr[counter];

counter++;


}

cout << endl << "It took programmers 1 through " << counter << " to beat programmer " << winner << endl;   

return 0;

}