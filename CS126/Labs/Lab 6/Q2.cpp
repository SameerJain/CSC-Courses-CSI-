// rewrite given prgram with for loops
// final count will always be 275 since there is a break statement

#include <iostream>
using namespace std;

int main()
{

    int count;
    for (count = 270; count < 277; count++)
    {

        if (count == 275)
        {
            break;
        }

        cout << count << " Good Luck!" << endl;
    }

    cout << "The value of count is: " << count << endl;
    return 0;
}