#include <iostream>
#include <cmath>
using namespace std;

enum triangletype{scalene,isosceles, equilateral, noTriangle};

void triangleshape(double x,double y,double z){



triangletype trianglecheck;

if ( x + y  < x || y + z < x || z + x < y) {

trianglecheck = noTriangle;
}


else if (x == y && y ==z && z ==x )
{

trianglecheck = equilateral;

}



else if( x == y && x != z || y == z && y != x || z == x && x != y ) {
    
    trianglecheck = isosceles;

}

else { trianglecheck = scalene;}

switch( trianglecheck ){

    case noTriangle:
    cout << "No triangle";
    break;

    case equilateral:
    cout << "Equilateral";
    break;

    case isosceles:
    cout << "Isosceles";
    break;

    case scalene:
    cout << "Scalene";
    break;


}

cout << endl;


}


int main()
{


double x,y,z;
int counter = 0;

while( counter < 5) {
cout << "Enter 3 angles: "<< endl;

cin >> x >> y >> z;

triangleshape(x,y,z);
}



    return 0;


}