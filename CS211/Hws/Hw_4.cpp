/*
Enter 1 to convert ARABIC to ROMAN. 
Enter 2 to convert ROMAN to ARABIC.
2
Enter a number in Roman Numerals: MDCLXVI
1676

*/
#include <iostream>
#include <vector>
using namespace std;

class romanType {



public:

    int M = 1000;
    int D = 500;
    int C = 100;
    int L = 50;
    int X = 20;
    int V = 5;
    int I = 1;


    int sum = 0;
};

void arabic(){

    romanType number;

    string input;

    cout << "Enter a number in Roman Numerals: ";

    cin >> input;


    for(int i = 0; i <= input.size(); i++) {

        if(input[i] == 'M') {

        number.sum += number.M;
        }

        if(input[i] == 'D') {

        number.sum += number.D;
        }

        if(input[i] == 'C') {

        number.sum += number.C;
        }

        if(input[i] == 'L') {

        number.sum += number.L;
        }

        if(input[i] == 'X') {

        number.sum += number.X;
        }

        if(input[i] == 'V') {

        number.sum += number.V;
        }

        if(input[i] == 'I') {

            if(input[i+1] == 'X') {
            number.sum += 9;
            i++;
            }

            else if(input[i+1] == 'V') {
            number.sum += 4;
            i++;
            }

            else {
            number.sum += number.I;}
        

        }




    }

    cout << number.sum;
}


void roman (){

romanType roman;

int user;

vector <string>final;

cout << "Enter a number: ";
cin >> user;

while (user > 0) {

    if(user % 1000 <= roman.M) {
        final.push_back("M");

        user%= 1000;

    }

    if(user % 500 <= roman.D) {
        final.push_back("D");

        user%= 500;
    }

    if(user % 100 <= roman.C) {
        final.push_back("C");

        user %= 100;
    }

    if(user % 50 <= roman.L) {
        final.push_back("L");

        user%= 50;
    }
    
    if(user % 20 <= roman.X) {
        final.push_back("X");

        user%= 20;
        
    }

    if(user == 9) {
        final.push_back("IX");
        user-=9;
    }

    if(user % 5 <= roman.V) {
        final.push_back("V");
    }

    if(user == 4) {
        final.push_back("IV");
        user-=4;
    }

    while (user > 0) {
        final.push_back("I");
        user--;
    }

    

}

for(int i = 0; i < final.size(); i++){
    cout << final[i];
}

}



int main () {

int user= 0;

cout << "Enter 1 to convert ARABIC to ROMAN. " << endl;
cout << "Enter 2 to convert ROMAN to ARABIC." << endl;

while (user != 1 || user != 2) {
cin >> user;

if (user == 1) {
roman();
}

else if (user == 2){
    arabic();
}

else {
cout << "Try Again" << endl;
}
}
    return 0;
}