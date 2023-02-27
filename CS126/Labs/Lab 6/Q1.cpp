// use if-else for given switch
#include <iostream>
using namespace std;

int main()
{

    int alpha;
    cin >> alpha;

    if (alpha == 1 || alpha == 2)
    {
        alpha += 2;
    }

    else if (alpha == 4)
    {
        alpha++;
    }

    else if (alpha == 5)
    {

        alpha *= 3;
        alpha += 6;
        alpha--;
    }

    else if (alpha == 6)
    {

        alpha += 6;
        alpha--;
    }

    else
    {
        alpha--;
    }

    cout << alpha;
    return 0;
}