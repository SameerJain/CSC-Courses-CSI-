#include <iostream>
#include <stack>
#include <cmath>
#include <fstream>

using namespace std;

int main (){

stack<double> scores;
stack<string> names;

ifstream inputFile;

inputFile.open("text");

int max = 0;
int count = 0;

double GPA;
string name;

while(inputFile >> GPA >> name){ 

if(max < GPA) {
    max = GPA;
}

scores.push(GPA);
names.push(name);


}

while(!scores.empty()) {

    if(scores.top() == max) {
        cout << scores.top() << endl;
        cout << names.top() << endl;

    }

    scores.pop();
    names.pop();
}


    return 0;

}







/*

Quiz 4 review:

2.

template < class T>
void swap(int&a, int& b){

    int T;
    T = a;
    a = b;
    b = T;
    
}

4a)

strange<int,int> sObj;

template <class T, class U> class A {
    T x;
    T y;
}
public:
    A() { cout << "Constructor Called" << endl;}

int main(){

A<char, char> a;
A<int, double> b;

return 0;

}



~_____();


group project:
1. What is the output, if any, of each of the following C++ statements?
a. cout << p->info;
12 ( p blue box)
b. q = p->link;
cout << q->info << " " << current->info;
92 65 (p links to 92 and gets coutted, then cout current blue box(65))
c. cout << current->link->info;
80 (current links to 80 and thats the data)
d. trail = current->link->link; (from current yellow box move 2 yellow boxes down)
trail->link = nullptr;
cout << trail->info; (blue box at the end of linking)
46
e. cout << last->link->info;

f. q = current->link;
cout << q->link->link->info;
5
2. What is the value of each of the following relational expressions? 
a. p->link->link == current TRUE
b. first->link->link->info == 92 TRUE
c. temp->link == 0  FALSE
d. last->link == nullptr  TRUE
e. list->link == p TRUE
f. p->link->link->link->info == temp->info FALSE

3. What are the effects, if any, of each of the following C++ statements? 
a. trail = temp->link;
trail->link = nullptr;
delete last;
last = trail;
Answer of 3. a
Sets the link field of the node with info 5 to nullptr, deletes the last node from the linked list, and deallocates the memory occupied by the last note, and after deleting the last node sets list point to the last node of the list.
The last node is seen to be completely deleted and replaced as trail as the last mode. The linked list goes from 7 to 8 nodes.
b. temp->link = last;
This would mean that the pointer to show how its the last node in the linked list.
c. first->info = 58;
replaces 47 with 58
d. q = current->link;
current->link = temp;
delete q;

e. q = p->link->link->link;
q->info = 60;
this is now the 80 replaces the 60 as the answers 
f. p->link = temp;
the node for the link is now a temp value 
4. Write C++ statements to do the following. 
a. Set the info of the third node to 24.
p->link->info=24;
b. Make q point to the node with info 80
current->link = q
q -> info = 80
c. Advance first to point to the next node.

d. Make trail point to the node before current.

e. Make p point to an empty list.

f. Set the value of the node before last to 54.

g. Write a while loop to make first point to the node with info 5.

5. Mark each of the following statements as valid or invalid. If a statement is invalid, explain why. 
a. p = list->link;
b. first = list;
c. temp->link = nullptr;
d. current->link = temp->info;
e. p = *last;
f. first = 90;
g. p->link->info = current->info;
h. current->info = temp->link;
i. *list = *temp;
j. temp->link = last->link->link;
k. cout << trail->link->link->info;


6. Write C++ statements to do the following. 
a. Write a C++ code so that first traverses the entire list.
b. Create the node with info 17 and insert after current.
c. Delete the last node of the list and also deallocate the memory occupied by this node. After deleting the node make last point to the last node of the list and the link of the last node must be nullptr.
d. Delete the node with info 92. Also, deallocate the memory occupied by this node.
e. Write a C++ code to move the node with info 46 after current by adjusting the links of nodes in the linked list.

7. What is the output of the following C++ code? 
a. while (first != last)
{
cout << first->info << " ";
first = first->link;
}
cout << last->info << endl;

b. while (current->link != nullptr)
current = current->link;
cout << current->info << " ";
cout << endl;
c. while (p != nullptr)
cout << p->info << " ";
p = p->link;
cout << endl;


8. If the following C++ code is valid, show the output. If it is invalid, explain why. 
q = current;
current = current->link;
current->link = temp->link;
trail = current->link;
current = trail->link;
cout << q->info << " " << trail->info << " " << current->info << endl;

9. If the following C++ code is valid, show the output. If it is invalid, explain why. 
trail = temp->link; //Line 1
temp = temp->link->link; //Line 2
current = temp; //Line 3
current = current->link; //Line 4
trail->link = last->link; //Line 5
cout << current->info << " " << last->info << endl; //Line 6


Code:
nodeType* list, *first, *current, *last, *temp, *trail, *p, *q;
    list=NULL;
    list=new nodeType();
    list->info=47;
    first=list;
    list->link=new nodeType();
    list->link->info=12;
    p=list->link;
    cout<<"a."<<p->info<<endl;
    list->link->link=new nodeType;
    list->link->link->info=92;
    list->link->link->link=new nodeType;
    list->link->link->link->info=65;
    current=list->link->link->link;
    list->link->link->link->link=new nodeType;
    list->link->link->link->link->info=80;
    list->link->link->link->link->link=new nodeType;
    list->link->link->link->link->link->info=46;
    temp=list->link->link->link->link->link;
    list->link->link->link->link->link->link=new nodeType;
    list->link->link->link->link->link->link->info=5;
    list->link->link->link->link->link->link->link=new nodeType;
    list->link->link->link->link->link->link->link->info=78;
    last= list->link->link->link->link->link->link->link;
    last->link=nullptr;
*/