#include <iostream>
using namespace std;

int total_bill(int x);

int main()
{

    int phone_total;

    cout << "Enter Phone Total:\n";
    cin >> phone_total;

    cout << "Total bill: " << total_bill(phone_total) << endl;
    return 0;
}

int total_bill(int x)
{

    return 180 + x * 30;
}