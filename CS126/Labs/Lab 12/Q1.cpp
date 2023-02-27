// finds first repeating nums in array
#include <iostream>
using namespace std;

void find_first_repeating_element(int nums[], int length)
{

    bool repeating = false;

    int counter = 0;

    int x = 0;

    for (int i = 0; i <= length - 1; i++)
    {

        counter = 0;

        x = nums[i]; // creates checker value

        for (int j = 0; j <= length - 1; j++)
        { // goes through array for every element, references checker

            if (x == nums[j])
            {

                counter++;
            }

            if (counter == 2)
            { // if the checker num is in array twice, it stops
                repeating = true;
                break;
            }
        }

        if (repeating)
        {
            break;
        }
    }

    if (repeating)
    {
        cout << "First repeating number is: " << x;
    }

    else
    {
        cout << "No repeating numbers.";
    }
}

int main()
{

    int input[9]{8, 8, 5, 1, 5, 7, 9, 7, 9};

    int length = sizeof(input) / sizeof(*input);

    find_first_repeating_element(input, length);
}