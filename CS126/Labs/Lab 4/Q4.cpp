// make mult table as shown
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 9; i++)
    {

        for (int j = 1; j <= 9; j++)
        {

            if (j <= i)
            {
                cout << i << "x" << j << "=" << (j * i) << " ";
            }
        }

        cout << endl;

    } // top for

    return 0;
}
