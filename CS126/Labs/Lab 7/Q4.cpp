// num triangle printer for given num of lines
#include <iostream>
using namespace std;

void loop(int x)
{

    int k = 1;

    for (int i = 1; i <= x; i++)
    {

        for (int j = 1; j <= i; j++)

        {
            cout << k << " ";
            k++; // actual numbers
        }

        cout << endl;
    }
}

int main()
{

    int x;

    cout << " Enter number of lines:";
    cin >> x;

    loop(x);

    return 0;
}