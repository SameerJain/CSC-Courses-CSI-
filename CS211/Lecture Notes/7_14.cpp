#include <iostream>
using namespace std;

typedef struct nodeType{

    int info;
    nodeType*link;

}Node;



nodeType* buildlistForward(){

    nodeType *first, *NewNode, *last;
    int num;

    cout << "Enter a list of integers ending with -999." << endl;

    cin >> num;

    first = nullptr;

    while (num != -999) {

        newNode = new NodeType;
        newNode->info = num;
        newNode->link = nullptr;

        if(first == nullptr){
            first = newNode;
            last = newNode;

        }

        else {

            last-> = newNode;
            last = newNode;

        }

        cin >> num;


    } // end while

    return first;

} // end buildlistForward


int main () {


    return 0;

}