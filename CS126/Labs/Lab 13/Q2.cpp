#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char word[20] = "Holidays!";
    int x;

    x = strlen(word);

    if (word[3] == 'i' || x == 18)
        cout << "----\n";

    else
        cout << 'X' << endl;

    if (6 > 15 && 45 % 3 == 1 || 'Y' > 'a')
        cout << "*****\n";

    else
        cout << '0' << endl;

    cout << word << ' ' << x << endl;

    return 0;
}