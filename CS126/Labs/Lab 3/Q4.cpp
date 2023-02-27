// stock program
#include <iostream>
using namespace std;

int main()
{

    double teslaStock;
    bool hold = false;

    while (!hold)
    {

        cin >> teslaStock;
        if (teslaStock >= 800)
        {
            hold = true;
        }
        break;
    }

    if (hold)
    {

        cout << "Keep holding your shares";
        return 0;
    }

    cout << "Sell";
    return 0;
}
