// adds dash in between 2 odd numbers in string
#include <iostream>
using namespace std;

void insert_dash(string &input)
{

    for (int i = 0; i <= input.size() - 1; i++)
    {

        if (input[i] % 2 == 1)
        {

            if (input[i + 1] % 2 == 1)
            {
                input.insert(i + 1, "-");
                i++;
            }
        }
    }

    cout << input;
}

int main()
{

    string x;

    cout << "This is a dash inserter!\nEnter several numbers: ";
    cin >> x;

    insert_dash(x);

    return 0;
}