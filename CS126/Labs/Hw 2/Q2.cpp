#include <iostream>
using namespace std;

int main () {

char c;

cout << "Enter a letter to convert to ASCII (Case Sensitive): ";
cin >> c ;

cout << static_cast<int> (c);


    return 0;
}