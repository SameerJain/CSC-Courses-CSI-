#include <iostream>
using namespace std;

void inserter(string &str1, int pos, string str2);

int main()
{
    string str = "Sameer";
    string str2 = "test";
    inserter(str, 2, str2);

    return 0;
}

// definition

void inserter(string &str1, int pos, string str2)
{

    string str3 = "";

    for (int i = 0; i < str1.length(); i++)
    {

        if (i == pos)
        {

            str3 = str3 + str2;

            str3 = str3 + str1[i];
        }

        else
        {

            str3 = str3 + str1[i];
        }

        cout << str3 << endl;
    }

    cout << str3;
}