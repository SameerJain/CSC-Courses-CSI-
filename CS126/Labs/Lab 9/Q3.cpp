// string reverser
#include <iostream>
using namespace std;

void reversed_string(string str1)
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

    cout << str2;
}

int main()
{

    string str1;
    cout << "Enter a string to be reversed:\n";
    cin >> str1;

    reversed_string(str1);

    return 0;
}