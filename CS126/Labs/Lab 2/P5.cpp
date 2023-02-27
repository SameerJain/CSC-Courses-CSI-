// number of shares bot
#include <iostream>
using namespace std;

int main()

{

    int Number_Of_Shares;
    cout << " Please enter the number of shares you purchase: ";
    cin >> Number_Of_Shares;

    double purchase_price, current_price, profit;
    cout << " Please enter the price of the stock (per share) when you purchased it:";
    cin >> current_price;

    cout << " Please enter the current price of the stock (per share): ";
    cin >> current_price;

    profit = Number_Of_Shares * (current_price - purchase_price);
    cout << " You have made a profit of $" << profit << " dollars since you bought " << Number_Of_Shares << " shares of this stock!" << endl;

    return 0;
}
