

class counterType {

private:
int counter;


public:

void setZero(){
    counter = 0;
}

int getValue(){

    return counter;
}

void upValue(){

    counter++;

}

void downValue(){

counter--;

}


counterType(int x) {

counter = x;

}

void setValue(){

int y;
cout << "Enter a value: ";
cin >> y;

counter = y;


}


};