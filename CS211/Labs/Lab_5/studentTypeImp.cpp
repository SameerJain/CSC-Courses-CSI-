#include <iostream>
#include "ClassNameImp.hpp"
#include "studentType.h"
#include <string>
using namespace std;

int main () {

studentType applicant;

string x{"Robert"};
string y{"Le"};

applicant.setFirstName(x);
applicant.setLastName(y);
applicant.setGPA(4.0);
applicant.print();





}