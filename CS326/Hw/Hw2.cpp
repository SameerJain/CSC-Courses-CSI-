#include <iostream>
using namespace std;

const int MAX = 10;

class AList
{

public:
    void Retrieve(int &x, bool &success);
    void Delete(int &x, bool &success);
    void Insert(int x, bool &success);
    void PrintAll();
    void swap(int i, int j);

private:
    int list[MAX];
    int size;
};

// B2

void AList::swap(int i, int j)
{
    if (i < 0 || j < 0 || j >= size || i >= size)
    {
        cout << "Invalid\n";
        return;
    }
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}
void AList::Retrieve(int &x, bool &success)
{

    if (size == 0)
    {
        cout << "List is Empty\n";
        success = false;
    }

    else
    {
        x = list[size - 1];
        success = true;
    }
}

void AList::Insert(int x, bool &success)
{
    if (size == MAX)
    {
        cout << "List is Full\n";
        success = false;
    }

    else
    {
        size++;
        list[size - 1] = x;
        success = true;
    }
}

void AList::Delete(int &x, bool &success)
{
    if (size == 0)
    {
        cout << "List is Empty\n";
        success = false;
    }
    else
    {
        size--;
        list[size] = x;
        success = true;
    }
}

void AList::PrintAll()
{
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << "done\n";
}

AList x;

/*
bool z;
    int y;
    x.PrintAll();
    x.Insert(2, z);
    x.PrintAll();
    x.Delete(y,z);
    x.PrintAll();
    x.Insert(2, z);
    x.Insert(1, z);
    x.Insert(3, z);
    x.PrintAll();
    x.swap(0,2);
    x.PrintAll();
    x.Retrieve(y,z);
    x.PrintAll();
    cout << "\n\n\n" << y;
*/

struct Node
{
    int data;
    Node *next;
};

void deleteLargest(Node *&head)
{
    Node *temp = head->next;
    Node *largest = head;
    Node *prev = head;
    Node *prevlargest = NULL;

    if (head == NULL)
    {
        cout << "List is Empty\n";
    }

    else
    {

        if (head->next == NULL)
        {

            head = head->next;
        }

        else
        {

            while (temp != NULL)
            {

                if (temp->data > largest->data)
                {
                    prevlargest = prev;
                    largest = temp;
                }
                prev = temp;
                temp = temp->next;
            }

            if (largest == head)
            {

                head = head->next;
            }
            else
            {

                prevlargest->next = prevlargest->next->next;
            }
        }

        delete largest;
    }
}

void insertNode(Node *&head, int x)
{

    Node *temp = head;
    Node *newNode = new Node();

    newNode->data = x;

    if (head == NULL)

    {

        head = newNode;
    }

    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

struct dubNode
{

    int data;
    dubNode *next;
    dubNode *prev;
};

void insertStart(dubNode *&dubHead, int x)
{

    dubNode *tempa = new dubNode();
    tempa->data = x;
    tempa->next = NULL;
    tempa->prev = NULL;

    if (dubHead == NULL)
    {

        dubHead = tempa;
        cout << dubHead->data << endl;
    }

    else
    {

        tempa->next = dubHead;
        dubHead->prev = tempa;
        dubHead = tempa;
    }
}

void insertEnd(dubNode *&dubHead, int x)
{
    dubNode *newNode = new dubNode();
    newNode->data = x;

    newNode->next = NULL;
    newNode->prev = NULL;
    dubNode *temp = dubHead;

    if (dubHead == NULL)
    {
        dubHead = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}

void printList(dubNode *head)
{
    cout << "printing\n";
    if (head == NULL)
    {
        cout << "List Empty\n";
    }

    else
    {
        dubNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

int main()
{
    Node *head = NULL;
    dubNode *dubHead = NULL;

    insertStart(dubHead, 99);
    insertStart(dubHead, 11);
    insertEnd(dubHead, 1234);
    printList(dubHead);

    return 0;
}