// prints number of spaces from last word to end of string
#include <iostream>
using namespace std;

void last_word(string str1)
{
    char x = ' '; // single whitespace to know when word ends
    int a = 1;    // counter for special symbols

    char cases[10] = {'.', '!', '?', '@', '#', '$', '%', '^', '&', '*'};

    for (int i = str1.length() - 1; i >= 0; i--) // reverse loop, starts from back
    {

        // this loop is to check for symbols.
        // Goes through cases array
        for (int j = 0; j < 10; j++)
        {

            if (cases[j] == str1[i])
            {
                a++; // if symbol is there, it adds 1 to the counter
            }
        }

        if (str1[i] == x) // if element is a space
        {

            cout << (str1.length() - a) - i << endl;
            // num of elements in string - element number of whitespace = length of last word

            break;
        }
    }
}

int main()
{
    last_word("Staten Island is a borough in New York City.");

    return 0;
}