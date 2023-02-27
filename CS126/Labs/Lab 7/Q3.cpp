// number swapper
#include <iostream>
using namespace std;

void swapper(int &x1, int &y1)
{

    int z = y1;

    y1 = x1;

    x1 = z;

    cout << "\n\nNum 1 is " << x1 << "\nNum 2 is " << y1;
}

int main()
{

    int x, y;

    cout << "This is a Number Swapper.\nEnter 2 Nums:\n";

    cout << "Num 1 = ";
    cin >> x;

    cout << "Num 2 = ";
    cin >> y;

    swapper(x, y);

    return 0;
}