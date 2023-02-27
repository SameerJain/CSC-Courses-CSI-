#include <iostream>
#include "stackImp.h"
#include <stack>
using namespace std;

int main () {

stack<int> stack;
int temp;
stack.push(28);
stack(16);

temp = stack.top();

stack.push(temp - 3);
cout << stack.top() << endl;

stack.push(2* temp);
stack.push(50);

temp = stack.top();

stack.pop();
stack.push(32);

while(!stack.isEmptyStack()){
    cout << stack.top() << " ";
    stack.pop();
}

cout << endl;

cout << "temp = " << temp << endl;


    return 0;
}