#include <iostream>
using namespace std;


int largest(int arr[], int t){


int x = 1;
int y = 0;

int max = arr[0];

if(x < t){

    y = largest(arr + x, t - 1);
}

if (y > max){

max = y;

}

return max;

}

int largest(int list[],int size){ 

if (size == 1){

 return list[0];
}
  
  else if (size > 1){
  
  int max = 0;
  max= largest(list,size -1);
  
  if(max > list[size -1]){
  return max;
  
  }
  
  }

  else {return list[size -1];}
  }



int main () {

int arr[5]{0,1,2,3,4};

cout << largest(arr,5);

    return 0;

}


