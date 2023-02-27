/*
WELCOME TO THE C++ STACK IMPLEMENTATION PROGRAM!


Select operation you would like to perform:
1. Evaluate Postfix Expression
2. Convert Inffix Expression to Postfix



Type 1 or 2, then press enter to continue: 1
Enter a Postfix Expression:
 4 6 + 5 / 2 *

Select 1 for Array Based Stack
Select 2 for Pointer Based Stack:
1
4
Select operation you would like to perform:
1. Evaluate Postfix Expression
2. Convert Inffix Expression to Postfix



Type 1 or 2, then press enter to continue: 1
Enter a Postfix Expression:
 4 8 + 7 -

Select 1 for Array Based Stack
Select 2 for Pointer Based Stack:
2

5Select operation you would like to perform:
1. Evaluate Postfix Expression
2. Convert Inffix Expression to Postfix



Type 1 or 2, then press enter to continue: 2
Enter an Infix Expression: a + (c*d) - e
acd*e-+Select operation you would like to perform:
1. Evaluate Postfix Expression
2. Convert Inffix Expression to Postfix



Type 1 or 2, then press enter to continue:

      WELCOME TO THE C++ STACK IMPLEMENTATION PROGRAM!




Select operation you would like to perform:
1. Evaluate Postfix Expression
2. Convert Inffix Expression to Postfix



Type 1 or 2, then press enter to continue: 1
Enter a Postfix Expression:
 100 10 10 + -

Select 1 for Array Based Stack
Select 2 for Pointer Based Stack:
2

100
10
10
80

Select operation you would like to perform:
1. Evaluate Postfix Expression
2. Convert Inffix Expression to Postfix



Type 1 or 2, then press enter to continue:
*/
#include <iostream>
#include <string>
#include <ios>
#include <limits>
using namespace std;

// Array int based implementation of stack
class arrayStack
{

public:
    int stack[20];
    int top = -1; // identifier for the top of the stack
    int MAX = 20; // max size of the stack

    void push(int entry)
    {
        // char x = entry - '0';

        if (isFull())
        {
            cout << "Stack is Full\n";
        }
        else
        {
            top++;              // set new top postion
            stack[top] = entry; // input in value to stack
        }
    }

    void push2(string op) // for user input of 2 digit numbers
    {
        int x = stoi(op); //  converts string to int

        if (isFull())
        {
            cout << "Stack is Full\n";
        }
        else
        {
            top++;
            stack[top] = x;
        }
    }

    void push3(double x)
    { // for operand operation. leaves int value and doesnt convert
        if (isFull())
        {
            cout << "Stack is Full\n";
        }
        else
        {
            top++;
            stack[top] = x;
        }
    }

    int pop() // since its a pop we also want to return the value
    {

        int pop_Entry;
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
        }

        else
        {
            pop_Entry = stack[top]; // input to be dequeued
            stack[top] = '\0';      // reset top postion
            top--;                  // move top postion back down
        }

        return (pop_Entry);
    }

    int priority(char entry) // prioity for algebra operations
    {

        if (entry == '+' || entry == '-') // lower priority for addition and subtraction
        {
            return (1);
        }

        else if (entry == '*' || entry == '/') // higher priority for multiplication and division
        {
            return (2);
        }

        return 0;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int get_top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        else
        {
            return stack[top];
        }
    }

    bool isOperator(char entry)
    {
        if (entry == '+' || entry == '-' || entry == '*' || entry == '/')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void printStack()
    {
        cout << "stack contents: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }

    void clearStack()
    {
        stack[top] = -1; //  sets all values to be null represented
    }

    bool IsNumericDigit(char x)
    {
        if (x >= '0' && x <= '9') // checks ASCII values to make sure its a digit
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
arrayStack s; // declaration for array based stack to be used in main for simplicity

// Pointer Based Struct Implementation.

struct pStack // definition
{
    int top;           // current
    unsigned capacity; // number of elements
    double *array;     // pointer to array
};

struct pStack *createstack(unsigned capacity) // creats new stack, capacity must be positive
{
    // defines size
    struct pStack *stack = (struct pStack *)malloc(sizeof(struct pStack));

    // checks if stack was made
    if (!stack)
    {
        return NULL;
    }
    // default values
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (double *)malloc(stack->capacity * sizeof(double));

    // checks if array was properly made
    if (!stack->array)
    {
        return NULL;
    }

    for (int i = 0; i < stack->capacity; i++)
    { // sets entire stack equal to zero for less memory usage
        stack->array[i] = 0;
    }

    return stack;
}

bool isEmpty(struct pStack *stack)
{
    if (stack->top == -1)
    { // if top is less than index for first element
        return true;
    }
    else
    {
        return false;
    }
}

char peek(struct pStack *stack) // gets the first element of stack without dequeuing
{
    return stack->array[stack->top];
}

void push(struct pStack *stack, int op) // 1 digit values
{

    stack->array[++stack->top] = op; // sets the top pinter up one then assigns it the pushed value
}

void push2dig(struct pStack *stack, string op) //  2 digit values
{
    double x = stoi(op); // converts string to double to then be pushed onto stack
    stack->array[++stack->top] = x;
}

char pop(struct pStack *stack)
{
    if (!isEmpty(stack)) // as long as stack is not empty
    {
        stack->top--;       // move one element down
        int n = stack->top; // take that last one in
        return stack->array[n + 1];
    }
    return '$';
}

bool IsNumericDigit(char x)
{
    if (x >= '0' && x <= '9') // ASCII values
    {
        return true;
    }
    else
    {
        return false;
    }
}

// QUESTION 1: EVALUATE POSTFIX EXPRESSION
// Array Based Evaluation
void evalPostixArray(string input)
{

    s.clearStack(); // clears stack in case it was used before

    for (int i = 0; i < input.length(); i++)
    {
        string twoDig = ""; // used for 2 digit numbers
        int val = 0;
        if (s.IsNumericDigit(input[i]))
        {
            while (s.IsNumericDigit(input[i])) // if its a number
            {
                val = val * 10 + input[i] - '0';
                i++;
            }
            s.push(val);
        }
        else if (input[i] == ' ') // if its a whitespace then moveon
        {
            continue;
        }
        else if (s.isOperator(input[i])) // is its an operator
        {
            if (s.isEmpty()) // move on in case the stack was empty
            {
                continue;
            }
            else
            {
                double val1 = s.pop(); // pop element from stack
                double val2 = s.pop();
                double val3; // perform the operation

                switch (input[i])
                {
                case '+':
                    val3 = val1 + val2; // twp  numbers are combined into num3
                    s.push3(val3);      // then the answer is pushed back
                    break;
                case '-':
                    val3 = val2 - val1;
                    s.push3(val3);
                    break;
                case '*':
                    val3 = val1 * val2;
                    s.push3(val3);
                    break;
                case '/':
                    val3 = val2 / val1;
                    s.push3(val3);
                }
            }
        }
    }
    cout << s.pop() << endl;
}

// Pointer Based Version
int eval_PostfixPointer(string postfix)
{

    // Create stack that can store the entire postfix expression
    struct pStack *stack1 = createstack(postfix.length());

    cout << "\n";

    // checks if creation was succesful
    if (!stack1)
    {
        return -1;
    }

    for (int i = 0; i <= postfix.length() - 1; i++)
    {
        string twoDig = ""; // aux string for 2 digit numbers
        int val = 0;
        if (postfix[i] == ' ')
        {
            continue;
        }
        if (IsNumericDigit(postfix[i])) // if element is a number
        {
            while (IsNumericDigit(postfix[i]))
            {
                val = val * 10 + postfix[i] - '0';
                i++;
            }

            push(stack1, val); // pushes num if 1 digit
        }

        else
        {
            double val1 = pop(stack1); // pops top 2 elements for operation
            double val2 = pop(stack1);

            switch (postfix[i]) //  switch for operations
            {
            case '+':
                push(stack1, val1 + val2);
                break;

            case '-':
                push(stack1, val2 - val1);
                break;

            case '*':
                push(stack1, val1 * val2);
                break;

            case '/':
                push(stack1, val2 / val1);
                break;
            }
        }
    }

    return pop(stack1); // would return the final operation of the stack
}

// QUESTION 2 CONVERT INFIX TO POSTFIX
class arrayStackChar
{

public:
    char stack[20];
    int top = -1; // identifier for the top of the stack
    int MAX = 20; // max size of the stack

    void push(char entry)
    {

        if (isFull())
        {
            cout << "Stack is Full\n";
        }
        else
        {
            top++;              // set new top postion
            stack[top] = entry; // input in value to stack
        }
    }

    char pop() // since its a pop we also want to return the value
    {

        char pop_Entry;
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
        }

        else
        {
            pop_Entry = stack[top]; // input to be dequeued
            stack[top] = '\0';      // reset top postion
            top--;                  // move top postion back down
        }

        return (pop_Entry);
    }

    int priority(char entry) // prioity for algebra operations
    {

        if (entry == '+' || entry == '-') // lower priority for addition and subtraction
        {
            return (1);
        }

        else if (entry == '*' || entry == '/') // higher priority for multiplication and division
        {
            return (2);
        }

        return 0;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int get_top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        else
        {
            return stack[top];
        }
    }

    bool isOperator(char entry)
    {
        if (entry == '+' || entry == '-' || entry == '*' || entry == '/')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void printStack()
    {
        cout << "stack contents: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }

    void clearStack()
    {
        stack[top] = -1; //  sets all values to be null represented
    }

    bool IsNumericDigit(char x)
    {
        if (x >= '0' && x <= '9') // checks ASCII values to make sure its a digit
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
arrayStackChar x;

// Function
string convert_postfix(string infix)
{

    int i = 0;
    string postfix;

    while (infix[i] != '\0') // for the whole loop
    {

        if (infix[i] == '(') // if ( push into stack)
        {
            x.push(infix[i]);

            i++;
        }

        else if (infix[i] == ' ') // if whitespace, continue
        {
            i++;
            continue;
        }

        else if (infix[i] == ')') // if (
        {
            while (x.get_top() != '(' && !x.isEmpty())
            {
                postfix.insert(postfix.end(), x.pop()); // Enter in everything on stack for whats in ( )
            }
            i++;

            if (x.get_top() == '(') // remove ( from stack
            {
                x.pop();
            }
        }
        else if (infix[i] >= 'a' && infix[i] <= 'z' || x.IsNumericDigit(infix[i]))
        {
            postfix.insert(postfix.end(), infix[i]); // insert if a letter
            i++;
        }

        else if (x.isOperator(infix[i])) // if is operator

        {

            if (x.isEmpty())
            {
                x.push(infix[i]); // save it for later if its empty
                i++;
            }
            else
            {
                if (x.priority(infix[i] > x.priority(x.get_top())))
                {
                    x.push(infix[i]); // if priotity is higher than or equal to top of stack then push it in front

                    i++;
                }

                else
                {
                    while ((!x.isEmpty()) && x.priority(infix[i]) <= x.priority(x.get_top()))
                    {

                        postfix.insert(postfix.end(), x.pop()); // if priotity is lower then push whatever is on the stack until its empty
                    }

                    x.push(infix[i]); // push operator onto stack as its next priority
                    i++;
                }
            }
        }
    }

    while (!x.isEmpty())
    {
        postfix.insert(postfix.end(), x.pop()); // pop any remaining expressions form stack
    }

    return postfix;
}

int main()
{
    int userChoice;  // input for initial menu
    int userChoice2; // input for sub menu
    string input;    // string input

    // Intro
    cout << "\n        WELCOME TO THE C++ STACK IMPLEMENTATION PROGRAM!\n\n\n";
    while (true)
    { //  menu

        // Choice between question 1 and question 2
        cout << "\n\nSelect operation you would like to perform:\n";
        cout << "1. Evaluate Postfix Expression\n";
        cout << "2. Convert Inffix Expression to Postfix\n";
        cout << "\n\n\nType 1 or 2, then press enter to continue: ";

        cin >> userChoice;

        switch (userChoice)
        {
        case 1: // question 1

            cout << "Enter a Postfix Expression:\n ";
            cin.ignore();
            getline(cin, input);
            // choice type of stack
            cout << "\nSelect 1 for Array Based Stack\n";
            cout << "Select 2 for Pointer Based Stack:\n";
            cin >> userChoice2;
            cin.ignore();
            switch (userChoice2)
            {
            case 1: // array based stack
                evalPostixArray(input);
                break;
            case 2: // pointer based stack
                cout << eval_PostfixPointer(input);
                break;
            default:
                break;
            }

            break;
        case 2: // question 2
            cout << "Enter an Infix Expression: ";
            cin.ignore();
            getline(cin, input);
            cout << convert_postfix(input);
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
    }

    return 0;
}
