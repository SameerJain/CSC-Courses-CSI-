#include <iostream>
using namespace std;

int main()
{

    float fahrenheit, celsius;

    cout << "This is a F* to C* converter.\nEnter the Degrees in F:\n";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << celsius;

    return 0;
}