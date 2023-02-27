// figure out the output of given inputs on slides of this program
#include <iostream>
using namespace std;
#include <cmath>

double mystery(int x, double y, char ch)
{

    if (x > 0 && isupper(ch))
    {
        return (sqrt(x * 1.0) + (static_cast<double>(ch) - 65));
    }

    else
    {
        return (pow(y, 3) + x + static_cast<double>(ch));
    }
}
int main()
{

    cout << mystery(-7, 2.5, 'T');
    return 0;
}