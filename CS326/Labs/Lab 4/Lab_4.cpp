/* (step 1) g++ Lab_4.cpp list.cpp -o list    (step 2)./list.exe

Output:
Function Calls for part 1

0->NULL
0->5->7->9->11->5->NULL
0->5->7->9->11->5->11->NULL
Value of Element 3 is:7
Element 7 is found in position: 3
Length of List: 7
Value of deleted element is: 5
0->7->9->11->5->11->NULL
Element 7 is found in position: 2
0->7->9->11->5->11->NULL

Resets list for Part 2
Value of deleted element is: 0
Value of deleted element is: 7
Value of deleted element is: 9
Value of deleted element is: 11
Value of deleted element is: 5


Function Calls for part 2:

11->NULL
Element 11 is already in the list
Element 5 is already in the list
11->5->7->9->NULL
Element 11 is already in the list
11->5->7->9->NULL
Value of Element 3 is:7
Element 7 is found in position: 3
Length of List: 4
Value of deleted element is: 5
11->7->9->NULL
Element 7 is found in position: 2

*/
#include <iostream>
using namespace std;

struct node
{

    int data;

    struct node *next;

};

class list
{

public:
    bool SortedIsEmpty(); // Returns true if the list is empty

    int SortedGetLength(); // returns length of the list

    bool SortedFind(int k, int &x); // returns the value of the kth element

    int SortedSearch(int key); // returns the position of the element which is the same as key

    void SortedInsert1(int x); // inserts x to the right postion of the sorted linked list ALLOWING FOR DUPLICATE

    void SortedInsert2(int x); // Inserts WITHOUT ALLOWING FOR DUPLICATE ELEMENT

    void SortedDelete(int k, int &x, bool &success); // deletes the kth element

    void PrintList(); // Prints out the entire linked list

    private:

    node *head = 0;

};



int main()
{

// Linked List Implemented

    list list1;

    int y;
    bool success;   
    
// Function Calls for part 1

        cout << "Function Calls for part 1\n\n";

        list1.PrintList();

        // a)Insert 5
        list1.SortedInsert1(5);
        // b)	Insert 7
        list1.SortedInsert1(7);
        // c)	Insert 9
        list1.SortedInsert1(3);
        // d)	Insert 11
        list1.SortedInsert1(11);
        // e)	Insert 5
        list1.SortedInsert1(5);
        // f)	Print out the list
        list1.PrintList();
        // g)	Insert 7
        list1.SortedInsert1(11);
        // h)	Print out the list
        list1.PrintList();
        // i)	Find the 3rd element
        list1.SortedFind(3,y);
        // j)	Search 7
        list1.SortedSearch(7);
        // k)	Print out the length of the list
        cout << "Length of List: " << list1.SortedGetLength() << "\n";
        // l)	Delete 7
        list1.SortedDelete(2,y,success);
        // m)	Print out the list
        list1.PrintList();
        // n)	Search 7
        list1.SortedSearch(7);
        list1.PrintList();

// Resets list for Part 2

    cout << "\nResets list for Part 2\n";

    for(int p = 0; p < 5; p++) {

        list1.SortedDelete(1,y,success);

    }
    

    cout << "\n\nFunction Calls for part 2:\n\n";

// Function Calls for part 2:

    // a)Insert 5
    list1.PrintList();
    // a)Insert 5
    list1.SortedInsert2(5);
    // b)	Insert 7
    list1.SortedInsert2(7);
    // c)	Insert 9
    list1.SortedInsert2(3);
    // d)	Insert 11
    list1.SortedInsert2(11);
    // e)	Insert 5
    list1.SortedInsert2(5);
    // f)	Print out the list
    list1.PrintList();
    // g)	Insert 7
    list1.SortedInsert2(11);
    list1.SortedInsert2(20);
    // h)	Print out the list
    list1.PrintList();
    // i)	Find the 3rd element
    list1.SortedFind(3, y);
    // j)	Search 7
    list1.SortedSearch(7);
    // k)	Print out the length of the list
    cout << "Length of List: " << list1.SortedGetLength() << "\n";
    // l)	Delete 7
    list1.SortedDelete(2, y, success);
    // m)	Print out the list
    list1.PrintList();
    // n)	Search 7
    list1.SortedSearch(7);

}

bool list::SortedIsEmpty()
{

    node *temp = new node();
    temp = head;

    if (head == NULL)
    {

        return false;
    }

    while (temp != NULL)
    {

        if (temp == NULL)
        {

            return false;
        }

        temp = temp->next;
    }

    return true;
}

int list::SortedGetLength()
{

    int counter = 0;

    node *temp = new node();
    temp = head;

    while (temp != NULL)
    {

        counter++;

        temp = temp->next;
    }

    return counter;
}

bool list::SortedFind(int k, int &x)
{

    node *temp = new node();
    temp = head;

    int counter = 1;

    if (k == 0)
    {

        cout << "Invalid Positon for Find Function " << endl;

        return false;
    }

    if (list::SortedGetLength() < k)
    {

        cout << "Invalid Positon for Find Function " << endl;

        return false;
    }

    while (counter != k)
    {

        temp = temp->next;
        counter++;
    }

    x = temp->data;

    cout << "Value of Element " << k << " is:" << x << "\n";

    return true;

}

int list::SortedSearch(int key)
{

    node *temp = new node();
    temp = head;
    int counter = 1;

    if (head == NULL)
    {

        cout << "List is empty" << endl;
        return -1;
    }

    while (temp != NULL)
    {

        if (temp->data == key)
        {
            cout << "Element " << key << " is found in position: " << counter << "\n";
            return 0;
        }

        else if(temp->data > key) {
            cout << "Doesnt Exist.";
            return -1;
        }

        temp = temp->next;
        counter++;
    }

    if (temp == NULL)
    {

        cout << key << " is not found in list\n";

        return -1;
    }

    return 0;
}

void list::SortedInsert1(int x)
{ 
    node *temp;
    node *s = new node();
    temp = head;
    s->data = x; 

    if (head == NULL){
        head = s;
    }

    else if(x <= head->data){
    s->next = head;
    head = s;
    return; 
    }

    else {


        while (temp->next != NULL){

            if(temp->next->data >= x) {
                s->next = temp->next;
                temp->next = s;
                break;
            }

            else{
            temp = temp->next;
            }
        }

        if(temp->next == NULL){
        s->next = NULL;
        temp->next = s;
        }
    }

}
void list::SortedInsert2(int x)
{

    node *temp;
    node *s = new node();
    temp = head;
    s->data = x; 

    if (head == NULL){
        head = s;
    }

    else if(x <= head->data){
    s->next = head;
    head = s;
    return; 
    }

    else {


        while (temp->next != NULL){

            if(temp->next && temp->next->data == x) {
                cout << x << " Already in list\n";
                break;
            }

            else{
            temp = temp->next;
            }
        }

        if(temp->next == NULL){
        s->next = NULL;
        temp->next = s;
        }
    }

}

void list::SortedDelete(int k, int &x, bool &success)
{

    node *temp = new node();
    node *s = new node();
    temp = head;

    int counter = 0;

    if (head == NULL)
    {
        success = false;

        cout << "List is empty\n";
        return;
    }

    if (k == 1)
    {

        success = true;

        head = temp->next;
    }

    else
    {

        while (temp != NULL)
        {

            temp = temp->next;

            counter++;
        }

        if (k > counter || k <= 0)
        {
            success = false;

            cout << "Invalid position\n";
        }

        else
        {
            success = true;

            temp = head;

            for (int i = 1; i < k; i++)
            {

                s = temp;

                temp = temp->next;
            }

            s->next = temp->next;
        }
    }

    x = temp->data;
    cout << "Value of deleted element is: " << x << "\n";
    delete temp;
}

void list::PrintList()
{

    node *temp = new node();
    temp = head;

    if (head == NULL)
    {
        cout << "List is empty\n";
    }

    else
    {
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL";
        cout << "\n";
    }
}
