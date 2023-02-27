// expontent grid
#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 3; i++)
    { // column nums

        for (int j = 1; j <= 1; j++)
        { // rows

            for (int k = 1; k <= 1; k++)
            { // times each line is printed

                cout << i << " " << i * i << " " << i * i * i << endl;
            }
        }
    }
    return 0;
}
