// Enter in grid and print out sum of rows
#include <iostream>
using namespace std;

int main()
{
    int inStock[6][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 10}, {12, 10, 9, 5, 12}, {16, 6, 13, 8, 3}, {10, 7, 12, 6, 4}, {9, 4, 7, 12, 11}};
    string companynames[6]{"GM", "Ford", "Toyota", "BMW", "Nissan", "Volvo"};

    int rowtotal;
    int k = 0;
    for (int i = 0; i <= 5; i++)
    {

        rowtotal = 0;

        for (int j = 0; j <= 4; j++)
        {
            rowtotal += inStock[i][j];
        }

        cout << "Number of " << companynames[k] << " cars is: " << rowtotal << endl;
        k++;
    }

    return 0;
}