#include <iostream>
using namespace std;


enum day { Sun = 1, Mon, Tue, Wed, Thur, Fri, Sat};

class dayType {

    day name;

    string getDay(int d){

        return "Tuesday";
    }

    public:

    dayType(){

        name = Mon;

    }

    dayType(day dname){

        setDay(dname);

    }

    string getDay(int d){

        return getDay(name);
    }

    int getDayNumber(){
        return name;
    }

    void setDay(day dname){
        name = dname;
    }

    void print(){
        cout << getDay(name);
    }

    string nextDay(){
        int next = name + 1;
        if(next>7){
            next = 1;

        }

        return getDay(next);

    }

    string previousDay(){
        int prev = name -1;
        if(prev < 1){
            prev = 7;
        }

        return getDay(prev);
    }

};

int main () {


    return 0;

}