// palindrome checker
#include <iostream>
using namespace std;

string str3;

bool reversed_string(string str1)
{
    int j = 0;
    string str2 = "";

    int x = str1.length();

    for (int i = 0; i < str1.length(); i++)
    {
        str2 = str2 + "x";
    }

    for (int i = str1.length() - 1; i >= 0; i--)
    {
        while (j <= str1.length() - 1)
        {
            str2[j] = str1[i];
            j++;
            break;
        }
    }

    str3 = str2;

    if (str1 == str2)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{

    string str1;
    cout << "Will check if inputted string is palindrome\n";
    cout << "Enter a string:\n";
    cin >> str1;

    if (reversed_string(str1) == true)
    {

        cout << "The word is a palindrome.\n";
    }

    else
    {
        cout << "This word is NOT a palindrome.\n";
    }

    cout << "Reversed: " << str3;

    return 0;
}