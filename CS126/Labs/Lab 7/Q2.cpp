// factorial finder
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
int main()
{
    bool discountAllowed = true;
    int items = 4;
    double x = 4.5;

    if (items > 0 && discountAllowed)
    {
        items = items * 2;
        if (items < 10)
            discountAllowed = false;
    }
    else if (items > 0)
    {
        items++;
    }
    cout << "Items: " << items << ' ' << items % 3 << ' ' << items / 3 << endl;
    if (!discountAllowed && 6 - 1.5 == x || 6 + x == 0)
    {
        cout << "Good Day!";
    }
    else
    {
        cout << "See you later!";
    }
    system("PAUSE");
    return 0;
}
factorial(int input)
{

    int product = 1;

    for (int i = 1; i <= input; i++)
    {

        product = product * i;
    }

    return product;
}

int main()
{

    int input;

    cout << "Enter num:\n";
    cin >> input;
    cout << input << "!(factorial) is: " << factorial(input);
    return 0;
}