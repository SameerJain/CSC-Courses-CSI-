// distance formula
#include <iostream>
#include <math.h>
using namespace std;

int main()

{

    double x1, x2, y1, y2;
    cout << "Please enter the value x1:";
    cin >> x1;

    cout << "Please enter the value y1:";
    cin >> y1;

    cout << "Please enter the value x2:";
    cin >> x2;

    cout << "Please enter the value y2:";
    cin >> y2;

    double square_distance = pow((x1 - x2), 2) + pow((y1 - y2), 2);

    double distance = sqrt(square_distance);

    cout << "The distance between (x1,y1) and (x2,y2) is : " << distance << endl;

    return 0;
}