#include <iostream>
using namespace std;

int main()
{
    int start = 10, end = 21;

    while (start < end && end > 19)
    {
        cout << start << '\t' << end << endl;
        start++;
        end--;
    }

    cout << start << '\t' << end << endl;

    return 0;
}