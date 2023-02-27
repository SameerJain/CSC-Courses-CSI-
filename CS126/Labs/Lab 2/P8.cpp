// escape sequences
#include <iostream>
using namespace std;
int main()
{

    char char_var1 = '\'';
    char char_var2 = '\\';

    cout << "char_var1 = " << char_var1 << endl;
    cout << "char_var2 = " << char_var2 << endl;

    cout << "Hello World\n";
    cout << "Hello\b World!" << endl;

    cout << "The original message witout \\r won't move the cursor to the begining " << endl;

    cout << "The original message \rwith \\r will move the cursor to the begining " << endl;

    return 0;
}