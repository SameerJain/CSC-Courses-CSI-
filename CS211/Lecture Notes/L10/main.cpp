
//listType.h
#include <iostream>
#include <cassert>
using namespace std;
template <class elemType>
class listType
{
public:
	bool isEmpty() const;
	//Function to determine whether the list is empty.
	//Postcondition: Returns true if the list is empty,
	// otherwise it returns false.
	bool isFull() const;
	//Function to determine whether the list is full.
	//Postcondition: Returns true if the list is full,
	// otherwise it returns false.

	int getLength() const;
	//Function to return the number of elements in the list.
	//Postcondition: The value of length is returned.
	int getMaxSize() const;
	//Function to return the maximum number of elements
	//that can be stored in the list.
	//Postcondition: The value of maxSize is returned.
	void sort();
	//Function to sort the list.
	//Postcondition: The list elements are in ascending order.
	void print() const;
	//Outputs the elements of the list.
	void insertAt(const elemType& item, int position);
	//Function to insert item in the list at the location
	//specified by position.
	//Postcondition: list[position] = item; length++;
	// If position is out of range, the program
	// is aborted.
	listType(int listSize = 50);
	//Constructor
	//Creates an array of the size specified by the
	//parameter listSize; the default array size is 50.
	//Postcondition: list contains the base address of the
	// array; length = 0; maxsize = listSize;
	~listType();
	//Destructor
	//Deletes all the elements of the list.
	//Postcondition: The array list is deleted.
private:
	int maxSize; //variable to store the maximum size
	//of the list
	int length; //variable to store the number of elements
	//in the list
	elemType* list; //pointer to the array that holds the
	//list elements
};

template <class elemType>
bool listType<elemType>::isEmpty() const
{
	return (length == 0);
}
template <class elemType>
bool listType<elemType>::isFull() const
{
	return (length == maxSize);
}
template <class elemType>
int listType<elemType>::getLength() const
{
	return length;
}
template <class elemType>
int listType<elemType>::getMaxSize() const
{
	return maxSize;
}
//Constructor; the default array size is 50
template <class elemType>
listType<elemType>::listType(int listSize)
{
	maxSize = listSize;
	length = 0;
	list = new elemType[maxSize];
}
template <class elemType>
listType<elemType>::~listType() //destructor
{
	delete[] list;
}
template <class elemType>
void listType<elemType>::sort() //selection sort
{
	int min;
	elemType temp;
	for (int i = 0; i < length; i++)
	{
		min = i;
		for (int j = i + 1; j < length; ++j)
			if (list[j] < list[min])
				min = j;
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}//end for
}//end sort
template <class elemType>
void listType<elemType>::print() const
{
	for (int i = 0; i < length; ++i)
		cout << list[i] << " ";
	cout << endl;
}//end print

template <class elemType>
void listType<elemType>::insertAt(const elemType& item,
	int position)
{
	assert(position >= 0 && position < maxSize);
	list[position] = item;
	length++;
}

 
//Sort an int list and a string list
//Create a dynamic list and then sort it
//This program shows the use of class template, dynamic array, and destructor
 
#include <iostream> //Line 1
#include "myString.h" //Line 2
#include "listType.h" //Line 3
using namespace std; //Line 4
int main() //Line 5
{ //Line 6
	listType<int> intList(100); //Line 7
	listType<newString> stringList; //Line 8
	int index; //Line 9
	int number; //Line 10
	cout << "List 11: Processing the integer list"
		<< endl; //Line 11
	cout << "List 12: Enter 5 integers: "; //Line 12

	for (index = 0; index < 5; index++) //Line 13
	{ //Line 14
		cin >> number; //Line 15
		intList.insertAt(number, index); //Line 16
	} //Line 17
	cout << endl; //Line 18
	cout << "List 19: intList: "; //Line 19
	intList.print(); //Line 20
	cout << endl; //Line 21
	//Sort intList
	intList.sort(); //Line 22
	cout << "Line 23: After sorting, intList: "; //Line 23
	intList.print(); //Line 24
	cout << endl; //Line 25
	newString str; //Line 26
	cout << "Line 27: Processing the string list"
		<< endl;

	cout << "Line 28: Enter 5 strings: "; //Line 28
	for (index = 0; index < 5; index++) //Line 29
	{ //Line 30
		cin >> str; //Line 31
		stringList.insertAt(str, index); //Line 32
	} //Line 33
	cout << endl; //Line 34
	cout << "Line 35: stringList: "; //Line 35
	stringList.print(); //Line 36
	cout << endl; //Line 37
	//Sort stringList
	stringList.sort(); //Line 38
	cout << "Line 39: After sorting, stringList: "; //Line 39
	stringList.print(); //Line 40
	cout << endl; //Line 41

	int intListSize; //Line 42
	cout << "Line 43: Enter the size of the integer "
		<< "list: "; //Line 43
	cin >> intListSize; //Line 44
	cout << endl; //Line 45

	listType<int> intList2(intListSize); //Line 46
	cout << "Line 47: Processing the integer list"
		<< endl; //Line 47
	cout << "Line 48: Enter " << intListSize
		<< " integers: "; //Line 48
	for (index = 0; index < intListSize; index++) //Line 49
	{ //Line 50
		cin >> number; //Line 51
		intList2.insertAt(number, index); //Line 52
	} //Line 53
	cout << endl; //Line 54
	cout << "Line 55: intList2: "; //Line 55
	intList2.print(); //Line 56
	cout << endl; //Line 57
	//Sort intList2
	intList2.sort(); //Line 58
	cout << "Line 59: After sorting, intList2: "; //Line 59
	intList2.print(); //Line 60
	cout << endl;

	cout << "Line 62: Length of intList2: "
		<< intList2.getLength() << endl; //Line 62
	cout << "Line 63: Maximum size of intList2: "
		<< intList2.getMaxSize() << endl; //Line 63
	return 0; //Line 64
}
