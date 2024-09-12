/*
 Q1 ARRAY BASED QUEUE


Displaying Queue:

Position 1 out of 1:
Customer Name:  Tom
Arrival Time:   1
Service Time:   0
Finish Time:    0



Displaying Queue:

Position 1 out of 2:
Customer Name:  Tom
Arrival Time:   1
Service Time:   0
Finish Time:    0
Position 2 out of 2:
Customer Name:  Bob
Arrival Time:   3
Service Time:   0
Finish Time:    0

(Dequeue Operation)  Leaving: Tom
(Dequeue Operation)  Leaving: Bob
(Dequeue Operation)  Leaving:


            Q2 CIRCULAR ARRAY BASED QUEUE


Displaying Queue:

Customer Name:  Tom
Arrival Time:   1
Service Time:   0
Finish Time:    0




Displaying Queue:

Customer Name:  Tom
Arrival Time:   1
Service Time:   0
Finish Time:    0

Customer Name:  Bob
Arrival Time:   3
Service Time:   0
Finish Time:    0


(Dequeue Operation)  Leaving: Tom
(Dequeue Operation)  Leaving: Bob
(Dequeue Operation)  Queue is empty

Q3 CIRCULAR POINTER BASED QUEUE


  Customers in Circular Linked List Queue:


Customer Name: Tom
Arrival Time: 1
Service Time: 0
FinishTime: 0


  Customers in Circular Linked List Queue:


Customer Name: Tom
Arrival Time: 1
Service Time: 0
FinishTime: 0

Customer Name: Bob
Arrival Time: 3
Service Time: 0
FinishTime: 0


Tom is leaving
Bob is leaving



Q4: PALINDROME CHECKER USING STACK AND QUEUE


Enter a word:fsadfg
fsadfg is not a palindrome

*/
#include <iostream>
#include <iomanip>
using namespace std;

// Default size of queue
#define SIZE 25

// Customer struct for Q1
struct Customer
{
    string CustomerName;
    int ArrivalTime;
    int ServiceTime;
    int FinishTime;
};

// ARRAY BASED QUEUE IMPLEMENTATION
// ABQ Class definition
class Queue
{
    Customer list[SIZE]; // stores elements
    int head = 0;        // stores the head of the queue
    int tail = -1;       // stores the tail of the queue

public:
    bool isEmpty();
    bool isFull();
    int getLength();
    void Enqueue(Customer data);
    Customer Dequeue();
    Customer getHead();
    void displayQueue();
};
Queue aQueue; // declares class in global as such for lab implementation
// ABQ Functions
bool Queue::isEmpty()
{
    if (tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Queue::getLength()
{
    return tail + 1; // tail represents array index
}

void Queue::Enqueue(Customer data)
{

    if (isFull())
    {
        cout << "Queue is full" << endl;
    }
    else
    {

        tail++;

        list[tail] = data; // move tail pointer up and store data in it
    }
}

Customer Queue::Dequeue()
{
    cout << "(Dequeue Operation)  ";
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        Customer x;
        x.CustomerName = "invalid";
        return x;
    }

    else // have start of queue point to next element in queue.
    {
        // Shift elements
        head++;
        cout << "Leaving: " << list[head - 1].CustomerName << "\n";
        return list[head - 1];
    }
}

bool Queue::isFull()
{
    if (tail == SIZE - 1) // if tail is maxed out in array index
    {
        return true;
    }
    else
    {
        return false;
    }
}

Customer Queue::getHead() // returns value of start of queue without removing it
{
    if (tail == -1)
    {
        cout << "Queue is empty" << endl;
        Customer x;
        x.CustomerName = "Empty";

        return x;
    }
    else
    {
        return list[head];
    }
}

void Queue::displayQueue()
{
    cout << "\n\nDisplaying Queue:\n\n";
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }

    else
    {
        for (int i = head; i <= tail; i++) // uses setw for cleaner output
        {
            cout << "Position " << i + 1 << " out of " << tail + 1 << ":\n";
            cout << setw(16) << left << "Customer Name: " << list[i].CustomerName << endl;
            cout << setw(16) << left << "Arrival Time: " << list[i].ArrivalTime << endl;
            cout << setw(16) << left << "Service Time: " << list[i].ServiceTime << endl;
            cout << setw(16) << left << "Finish Time: " << list[i].FinishTime << right << endl;
        }
        cout << endl;
    }
}

// CIRCULAR ARRAY BASED QUEUE IMPLEMENTATION
// Class definition
class CircularQueue
{
private:
    struct Customer list[SIZE];
    int front, rear, count; // iterm arra, front and rear identifier
public:
    CircularQueue()
    {               // constructor that intializes indexs for front and back
        front = -1; // points to where next popped element will be
        rear = -1;
        count = 0; // point to where bottom of queue is
    }

    bool isFull()
    {

        if (front == 0 && rear == SIZE - 1)
        { // if the array has a full amount of elements in each index from 0 to the end
            return true;
        }

        if (front == rear + 1)
        {
            return true; // circ queue has all elements fulled when rear flips back around
        }

        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enQueue(Customer data)
    {
        if (isFull()) // case if queue is full
        {
            cout << "Queue is full" << endl;
        }

        else
        {
            count++;
            if (isEmpty())
            { // if its empty, move front node to arr[0]. dont do this if its not empty since we will lose an element
                front++;
            }
            rear = (rear + 1) % SIZE; // rear is the remainder of its value div by size. ele 26 div by 25 is rem 1, so back to 1
            list[rear] = data;        // insert in element
        }
    }

    Customer Dequeue()
    {
        cout << "(Dequeue Operation)  ";
        Customer val;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            Customer x;
            x.CustomerName = "Empty";
            return x;
        }

        else
        {
            count--;
            val = list[front]; // set value equal to front of queue
            cout << "Leaving: " << list[front].CustomerName << endl;
            if (front == rear)
            { // make the queue empty if there is only one element
                front = -1;
                rear = -1;
            }
            else // move the front over 1
            {
                front = (front + 1) % SIZE;
            }

            return val;
        }
    };
    Customer getHead()
    {
        if (rear == -1)
        {
            cout << "Queue is empty" << endl;
            Customer x;
            x.CustomerName = "Empty";
            return x;
        }
        else
        {
            return list[front];
        }
    }
    void displayQueue()
    {
        cout << "\n\nDisplaying Queue:\n\n";
        int c = count;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int i = front;
            while (c > 0)
            {

                cout << setw(16) << left << "Customer Name: " << list[i].CustomerName << endl;
                cout << setw(16) << left << "Arrival Time: " << list[i].ArrivalTime << endl;
                cout << setw(16) << left << "Service Time: " << list[i].ServiceTime << endl;
                cout << setw(16) << left << "Finish Time: " << list[i].FinishTime << right << endl
                     << endl;
                c--;
                i++;
                if (i > SIZE)
                {
                    i = (i + 1) & SIZE;
                }
            }
            cout << endl;
        }
    }
};
CircularQueue cQueue;

// Circular Pointer Based Queue
struct Node
{
    Node *next;

    string CustomerName;
    int ArrivalTime;
    int ServiceTime;
    int FinishTime;
};

void inputNodeData(Node *input, string name, int arrivalTime, int serviceTime, int finishTime) // function to setup node values for a cleaner main function
{

    input->CustomerName = name;
    input->ArrivalTime = arrivalTime;
    input->ServiceTime = serviceTime;
    input->FinishTime = finishTime;
}
// Q3 Linked List Based Circular Queue
class CircPointerQueue
{
public:
    struct Node *head = NULL; // start construction of LL queue with head and tail pointers
    struct Node *tail = NULL;

    void Enqueue(Node *cus);
    Node *Dequeue();
    void displayQueue();
    Node *getHead();
};

void CircPointerQueue::Enqueue(Node *cus)
{

    Node *temp = head;

    if (head == NULL) // if list is empty
    {
        head = cus; // set head and tail equal to each other
        tail = cus;
    }
    // else if (head == tail) // if theres only one node
    // {
    //     head->next = cus; // make new node the one after head
    //     tail = cus;       // set tail equal to new last node
    // }
    else
    {
        tail->next = cus; // else make new node after tail then change tail
        tail = cus;
    }

    tail->next = head; // make tail next equal to head to keep Linked list circular
}
CircPointerQueue pQueue;

Node *CircPointerQueue::Dequeue()
{
    Node *temp;

    if (head == NULL)
    {

        return NULL;
    }

    else
    {
        if (head == tail) // if there is only 1 element in the array
        {
            temp = head;
            cout << head->CustomerName << " is leaving\n";
            head = NULL;
            tail = NULL; // set both head and tail to NULL
        }

        else
        {                // if there are more than one nodes
            temp = head; // make temp equal to first node

            head = head->next; // more head over one
            tail->next = head; // keep list circular and depoints the dequeue node out of list
            cout << temp->CustomerName << " is leaving\n";
        }

        // print out statments
        // return the old head
        return temp;
    }
}

void CircPointerQueue::displayQueue()
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "Queue is empty";
    }

    else // print out all node data and keep moving down
    {
        cout << "  Customers in Circular Linked List Queue:\n\n\n";
        do
        {

            cout << "Customer Name: " << temp->CustomerName << "\nArrival Time: " << temp->ArrivalTime << "\nService Time: " << temp->ServiceTime << "\nFinishTime: " << temp->FinishTime << "\n\n";

            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
}

Node *CircPointerQueue::getHead()
{
    // returns head node
    Node *temp = head;
    if (head == NULL) // edge case for when list os empty
    {
        cout << "Queue is empty" << endl;
    }

    return head;
}

// Q4: PALINDROME CHECKER USING STACK AND QUEUE

class Stack
{

public:
    char arr[20];
    int head = -1; // top of stack
    int size = 20;

    void push(char input)
    {

        if (head == size - 1) // if top of stack is capped
        {
            cout << "Stack is full" << endl;
            return;
        }
        else if (head == -1) // if stack is empty
        {
            head++;            // move head up 1
            arr[head] = input; // put int data
            head++;            //  move to new epmty top position
        }
        else
        {
            arr[head] = input;
            head++;
        }
    }

    char pop()
    {
        if (head == -1) // if stack is empty
        {
            cout << "Stack is empty" << endl;
            return '$';
        }

        else // move head down one postion and return it
        {
            head--;
            return arr[head]; // when value is pushed, the previously poped value is re-written
        }
    }
};
Stack q4Stack;

class queue
{
public:
    char arr[20];
    int head = -1; // front of queue
    int tail = -1; // back of queue
    int size = 20;

    void enqueue(char input)
    {
        if (tail == size) // if queue is full
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (tail == -1) // if queue is empty
        {
            head++;            // move head up 1 to declare is has at least one value
            tail += 2;         // move tail up 2 since it was -1(empty) then to last position
            arr[head] = input; // enter into new head position
        }
        else // if queue is not empty
        {
            // move last position up
            tail++;
            arr[tail - 1] = input; // return one before last position
        }
    }

    char dequeue()
    {
        char temp;

        if (tail == -1) // edge case if queue is empty
        {
            cout << "Queue is empty" << endl;
            return '$';
        }

        else
        {

            temp = arr[head]; // return start of queue
            head++;           // move head up 1 so the previous head is lost
        }

        return temp;
    }
};
queue q4Queue;

bool isPalindrome(string input)
{

    string result;

    for (int i = 0; i < input.size(); i++) // loop enters string to both stack and queue
    {

        q4Stack.push(input[i]);
        q4Queue.enqueue(input[i]);
    }

    for (int i = 0; i < input.size(); i++) // loop dequeues all values from stack and queue
    {
        // if there is a difference, you know its not a palindrome
        if (q4Stack.pop() != q4Queue.dequeue()) // this works because stacks and queues exit values in an opposite fashion
        {

            return false;
        }
    }

    return true;
}

main()
{
    // Q1 Array based queue

    cout << "            Q1 ARRAY BASED QUEUE" << endl;
    Customer Tom; // struct data entry
    Tom.CustomerName = "Tom";
    Tom.ArrivalTime = 1;
    Tom.ServiceTime = 0;
    Tom.FinishTime = 0;

    aQueue.Enqueue(Tom);

    // 2
    aQueue.displayQueue();

    // 3
    Customer Bob;
    Bob.CustomerName = "Bob";
    Bob.ArrivalTime = 3;
    Bob.ServiceTime = 0;
    Bob.FinishTime = 0;

    aQueue.Enqueue(Bob);
    // 4
    aQueue.displayQueue();
    // 5
    aQueue.Dequeue();
    // 6
    aQueue.Dequeue();
    // 7 Output is Empty
    aQueue.Dequeue();

    // Q2 Array Based Queue
    cout << "\n\n            Q2 CIRCULAR ARRAY BASED QUEUE" << endl;
    cQueue.enQueue(Tom);
    cQueue.displayQueue();
    cQueue.enQueue(Bob);
    cQueue.displayQueue();
    cQueue.Dequeue();
    cQueue.Dequeue();
    cQueue.Dequeue();

    // Q3 Circular Array Based Queue

    cout << "\n           Q3 CIRCULAR POINTER BASED QUEUE\n\n"
         << endl;
    // create new Node struct for Tom and Bob to fit inside of circular array based queue

    Node *TomNode = new Node();
    Node *BobNode = new Node();

    inputNodeData(TomNode, "Tom", 1, 0, 0);
    pQueue.Enqueue(TomNode);
    pQueue.displayQueue();

    inputNodeData(BobNode, "Bob", 3, 0, 0);
    pQueue.Enqueue(BobNode);
    pQueue.displayQueue();

    pQueue.Dequeue();

    pQueue.Dequeue();

    pQueue.Dequeue();

    // Q4 PALINDROME CHECKER
    string inputWord;
    cout << "\n\n\n         Q4: PALINDROME CHECKER USING STACK AND QUEUE\n\n\nEnter a word:";
    cin >> inputWord;
    if (isPalindrome(inputWord) == true)
    {
        cout << inputWord << " is a palindrome\n ";
    }

    else
    {
        cout << inputWord << " is not a palindrome\n ";
    }

    return 0;
}
