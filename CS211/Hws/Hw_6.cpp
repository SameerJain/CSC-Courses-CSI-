/*
13
13
425162338
650574555
1075736893
1726311448
3
34
514229
63245986
102334155
165580141

First, I was getting dif values for each, 8 would print either 13 or 21. Fixed the gien recursive solution on the sheet to match the position. Then at 403 the amount of memory for the value runs out, giving a negative value. 
*/
#include <iostream>
using namespace std;

int method1(int x){

int t1 = 0;
int t2 = 1;
int nextTerm;

for(int i = 2; i < x; i++){

nextTerm = t1 + t2;

t1 = t2;
t2= nextTerm;

}



return nextTerm;

}


int method2(int x){




if ( x == 0) {

        return 0;}


if ( x == 1) {

        return 0;}


if ( x == 2) {

        return 1;}



    return method2(x-1) + method2(x-2);
}

int main () {

cout << method1(8) << endl;
cout << method2(8) << endl; 


cout << method1(400) << endl;
cout << method1(401) << endl;
cout << method1(402) << endl;
cout << method1(403) << endl;


cout << method2(5) << endl; 
cout << method2(10) << endl; 
cout << method2(30) << endl; 
cout << method2(40) << endl; 
cout << method2(41) << endl; 
cout << method2(42) << endl;




    return 0;
}