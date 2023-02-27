/*
3
3
*/

#include <iostream>
using namespace std;

void vowels(string x){

char check[10]{'A','E','I','O','U','a','e','i','o','u'};

int counter = 0;

for(int i=0; i<x.length(); i++){

    for(int j = 0; j <=10; j++) {

        if(x[i] == check[j]){

            counter++;

        }

    }

}


cout << counter;

}

bool check(char z){

    return (z == 'A' || z == 'E' || z =='I' || z =='O' || z =='U' || z =='a' || z== 'e' || z == 'i' || z == 'o' || z == 'u');

}

int vowelsrec(string x, int y) {


if(y == 1) {

    return check(x[y-1]);

}

return vowelsrec(x,y-1) + check(x[y-1]);
} 



int main () {

vowels("Whaleboy");

cout << endl << vowelsrec("Whaleboy",8);


    return 0;
}