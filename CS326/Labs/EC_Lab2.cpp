/*
5->7->11->5->7->5->NULL
5->7->11->5->7->NULL
11 is not duplicate
5->7->11->5->7->NULL
5->7->11->5->7->11->7->NULL
7->11->5->7->11->7->NULL
7->11->5->11->7->NULL
*/

#include <iostream>
using namespace std;

// linked list implementation
struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertList(int data)
{
    Node *temp = new Node(); // temp node to iterate and new node to be passed into the end
    temp = head;
    Node *newNode = new Node();
    newNode->data = data;

    if (head == NULL) // if list is empty make head the new node
    {
        head = newNode;
    }

    else
    {
        while (temp->next != NULL) // iterate to the end and make the new node the last node
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList()
{
    Node *temp = head; // iteration node

    if (head == NULL) // case if the list is empty
    {
        cout << "empty list" << endl;
    }

    while (temp != NULL)
    { // iterate to the end and print null after last node
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteLastDup(int val)
{

    Node *temp = head;        // iteration node
    Node *lastDup = NULL;     // last dulicate
    Node *prevDup = NULL;     // second to last duplicate
    Node *lastDupPrev = NULL; // node before the last duplicate

    if (head == NULL) // if the list is empty
    {
        cout << "empty list" << endl;
    }

    else if (head->next == NULL) // case if theres only one element in the list
    {
        cout << "No Duplicate";
    }

    else
    {
        while (temp->next != NULL)
        { // iterate through the list
            if (temp->next->data == val)
            {                       // if the next node is a duplicate
                lastDupPrev = temp; // make this node the node before the last duplicate

                if (lastDup == NULL)
                {
                    lastDup = temp->next; // if this is the first duplicate then make it the next one
                }

                else
                {
                    prevDup = lastDup;    // if its not the first duplicate to appear, then make the last final duplicate the second to last,
                    lastDup = temp->next; // make the next one equal to the last duplicate
                }
            }

            temp = temp->next; // continue iterating
        }
    }

    if (prevDup != NULL) // if theres 2 duplicates
    {
        lastDupPrev->next = lastDup->next; // make the node before the last duplicate point to the one after, as we are deleting

        delete lastDup; // delete the node
    }

    else // if there arent two instances then the number is not a duplicate
    {
        cout << val << " is not duplicate\n";
    }
}

void deleteSecondLastDup(int val)
{

    Node *temp = head;
    Node *lastDup = NULL;
    Node *prevDup = NULL;
    Node *prevDupPrev = NULL;

    if (head == NULL)
    {
        cout << "empty list" << endl;
        return;
    }

    else if (head->next == NULL)
    {
        cout << val << " not Duplicate\n";
        return;
    }

    if (head->data == val)
    {
        // if the head is a duplicate then make the frist dup the head
        lastDup = head;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {

            if (lastDup == NULL)
            {
                // if theres only one duplicate then the next one is last dup
                lastDup = temp->next;
            }

            else
            { // if there is more than one duplicate the previous lastdup is now the second to last, and new one is the new last
                prevDup = lastDup;
                lastDup = temp->next;
            }
        }

        temp = temp->next; // iterate
    }

    if (prevDup == head) // if the second to last dup is head then delete and move over the head
    {

        head = head->next;
        delete prevDup;
    }

    else if (prevDup != NULL)
    {

        // if the second to last dup is not the head, iterate until you fing the node before it and then move the arrow, delete it
        prevDupPrev = head;

        while (prevDupPrev->next != prevDup)
        {
            prevDupPrev = prevDupPrev->next;
        }

        prevDupPrev->next = prevDupPrev->next->next;
        delete prevDup;
    }

    else if (prevDup == NULL) // if theres only 1 instance of the duplicate number then its not a dup
    {

        cout << val << " is not Duplicate\n";
    }
}

int main()
{

    insertList(5);
    insertList(7);
    insertList(11);
    insertList(5);
    insertList(7);
    insertList(5);
    printList();

    // delete last dup of 5
    deleteLastDup(5);
    printList();

    // delete last dup of 11
    deleteLastDup(11);
    printList();

    insertList(11);
    insertList(7);
    printList();

    // delete second last dup of 5
    deleteSecondLastDup(5);
    printList();
    // delete second last dup of 7
    deleteSecondLastDup(7);
    printList();
    return 0;
}