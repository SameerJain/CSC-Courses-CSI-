/* Program uses a function to find sum of both digits
 in a 2 digit number */

#include <iostream>
using namespace std;

int sumfinder(int input)
{

    int sum = 0; // where both digits are added

    sum += input / 10; // tens digit
    sum += input % 10; // ones digit
    return sum;
}

int main()
{

    int input;

    cout << "Enter a two digit number:\n";
    cin >> input;
    cout << "Sum of both digits are: " << sumfinder(input);

    return 0;
}