// function for substring feature
#include <iostream>
using namespace std;

void substr_func(string str1, int pos, int len)
{

    string str2 = str1.erase(0, pos);

    str2 = str1.erase(len, str1.length());

    cout << str2;
}

int main()
{
    string name = "Sameer";
    cout << name.substr(2, 1) << endl; // function must have same output as .substr function

    substr_func("Sameer", 2, 1);
}