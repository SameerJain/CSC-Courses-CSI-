/**
Welcome to Johnny's Resturaunt
Plain_Egg         1.45
Bacon_and_Egg     2.45
Muffin            0.99
French_Toast      1.99
Fruit_Basket      2.49
Cereal            0.69
Coffee            0.50
Tea               0.75

Enter the items you would like to recieve, as well as their quantitity:
Plain_Egg         1
Bacon_and_Egg     2
Muffin            3
French_Toast      4
Fruit_Basket      5
Cereal            6
Coffee            7
Tea               8

Enter the corresponding number of the item: 5
Enter the quantity of the number: 7
Enter y to continue, n to stop:n


Item              Quantity          Cost

Cereal            7                 1.45

Subtotal:                           4.83
Tax:                                0.24
Total:                              5.07
 * 
 */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int counter = 0;
vector<string> boughtItems;
vector<int>    numofItems;
int itemtype;
int itemnum;
double subtotal = 0;
char addMore;


bool done = false;
struct menutypes{

string menuList;
double menuCost;


};


//Reads in data from text file
    void getData(menutypes *menu) {

    ifstream inputFile;
    inputFile.open("menu.txt");

    

        // Makes sure read worked 
        if (!inputFile)
            {
                cout << "the input file is not opened." << endl;
                exit(1);
            }


    while(inputFile >> menu[counter].menuList >> menu[counter].menuCost) {

    counter++;

    }

    }


void showMenu(menutypes *menu) {

    cout << "Welcome to Johnny's Resturaunt" << endl;


for(int i = 0; i < counter; i ++) {

        cout << setw(18) << left << menu[i].menuList  << setprecision(2) << fixed <<  menu[i].menuCost << right << endl;

    
    }


cout << endl;

}


void printCheck(menutypes *menu) {


double taxrate = 0.05;
double taxed = subtotal * taxrate;
double total = subtotal * (taxrate + 1);


cout << endl << endl;


cout << setw(18) << left << "Item " << setw(18) << "Quantity" << setw(18) << "Cost" <<endl;


cout << endl;
    
for(int i = 0; i < boughtItems.size(); i++)
{ 
    
    
    
    cout << setw(18) << left << boughtItems[i] << setw(18) << numofItems[i] <<  setw(18) << menu[i].menuCost << right << endl;}






cout << endl;


cout << setw(18) << left << "Subtotal: " << setw(18) << " " << setw(18) << subtotal <<  endl;


cout << setw(18) << left << "Tax: " << setw(18) << " " << taxed << endl;


cout  << setw(18) << left << "Total: " << setw(18) << " " << setw(18) << total << endl;
}



int main () {

menutypes menu[10];

getData(menu);

showMenu(menu);

cout << "Enter the items you would like to recieve, as well as their quantitity: \n";

for(int i = 0; i < counter;i++) {

    cout << setw(18) << left << menu[i].menuList << i + 1 << right << endl;


}


while (!done) {

cout << "Enter the corresponding number of the item: ";
cin >> itemtype ;

boughtItems.push_back(menu[itemtype].menuList);

cout << "Enter the quantity of the number: ";

cin >> itemnum;

numofItems.push_back(itemnum);


subtotal = subtotal + menu[itemtype].menuCost * itemnum ;


cout << "Enter y to continue, n to stop:";

cin >> addMore;

if (addMore == 'n') {

    done = true;
    break;

    }

}


printCheck(menu);


return 0;


}