#include <iostream>
using namespace std;
// make a meters per yard converter
int main()
{

    const float METERS_PER_YARD = 0.9144;

    int yards, meters;

    cout << "This is a unit converter from Meters to Yards!\n";
    cout << "Enter your distance in yards:\n";

    cin >> yards;

    meters = yards * METERS_PER_YARD;

    cout << yards << " Yards = " << meters << " Meters";
}