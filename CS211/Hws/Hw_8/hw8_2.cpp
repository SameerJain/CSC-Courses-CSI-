
/* 
Enter String: sameer
SAMEER
 */

#include <iostream>
#include <cstring>
using namespace std;



int main () {

string x;
cout << "Enter String: ";
cin >> x;

char y;


int* bank = new int[x.length()];


for(int i=0;i<=x.length();i++){

bank[i] = static_cast<int>(x[i]);

}

for(int i= 0;i<= x.length();i++){
    

y = toupper(bank[i]);

    cout << static_cast<char>(y);
}




}


