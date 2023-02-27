// finds index of first unique character in string
#include <iostream>
using namespace std;

void first_unique_character(string x)
{

    int k = 0;
    int m;

    bool same = false;

    for (int i = 0; i <= x.length(); i++)
    {

        k = 0;

        for (int j = 0; j <= x.length(); j++)
        {

            if (x[i] == x[j])
            {
                k++;

                if (k == 2)
                {
                    same = true;
                    m = i;
                    break;
                }
            }
        }

        if (same)
        {
            cout << m << ' ' << x[m] << endl;
            break;
        }

        if (i == x.length())
        {
            cout << "-1";
            break;
        }
    }
}

int main()
{

    first_unique_character("Staten Island is a borough in NYC");

    return 0;
}