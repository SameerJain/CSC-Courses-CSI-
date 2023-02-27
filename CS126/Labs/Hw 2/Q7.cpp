#include <iostream>
using namespace std;
#include <string>

int main()
{

    string first_name, last_name, month;

    int day, year;

    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Enter your last name: ";
    cin >> last_name;

    cout << "Enter your date of birth:" << endl;
    cout << "Month: ";
    cin >> month;

    cout << "Day: ";
    cin >> day;

    cout << "Year: ";
    cin >> year;

    cout << first_name << " " << last_name << " was born on " << month << " " << day << ", " << year << ".";

    return 0;
}