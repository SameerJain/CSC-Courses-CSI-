#include <iostream>
#include "functions.hpp"
#include "header.h"
using namespace std;


int main () {

counterType input(5);

 input.setZero() ;

cout << input.getValue() << endl;

input.upValue();

cout << input.getValue() << endl;

input.downValue();

  cout << input.getValue() << endl;

input.setValue();
  


    return 0;
}