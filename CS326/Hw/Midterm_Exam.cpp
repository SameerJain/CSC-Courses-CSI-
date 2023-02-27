#include <iostream>
using namespace std;


struct raining {
    // 1b: 7-byte "raining" objects
    char month[3]; // store 3 letter abbreviations for this one month, 3-byte array (char == 1 byte)
    float rainfall; // store amount of rainfall for given month, 4-byte float
};

/*
union raining {
    // 1e: 'raining' objects are either 3-byte or 4-byte depending on ehich of the values the union will hold
    char month[3]; // store 3 letter abbreviations for this one month, 3-byte array (char == 1 byte)
    float rainfall; // store amount of rainfall for given month, 4-byte float
};
*/

int zoc(int m, int n){

    int x,y;
    if(m ==0 || n == 0) {
        return (m+n);
    }
    x = zoc(m-1,n);
    y = zoc(m,n-1);

    return (x+y);
}


int binarySearch(int arr[], int H, int L, int key){

    int mid = (L + H)/2;

    if( L > H){
        return -1;
    }

    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid] > key ) {
        return binarySearch(arr,H, mid + 1,key);
    }

    else if(arr[mid] < key ) {
        return binarySearch(arr,mid-1,L,key);
    }

    return -1;

}

int geniusSearch(int arr[], int H, int L, int key) {
    // instead of comparing w/ midpoint (50th percentile), compare with 33rd percentile and 66th percentile 
    // (one-third point, two-thirds point)
    int one_third = (L+H)/3 ; // one-third point: 33rd percentile, 8/3 = 2.66667 ~ 2, element is @ index 2
    int two_thirds = H - one_third ; // two-thirds point: 66th percentile, 2 * (8/3) = 2 * (2.66667) ~ 2*2 = 4, element is @ index 4

    cout << one_third << " " << two_thirds << "\n";
    if (L > H)
        return -1; 
    else if (arr[one_third] == key) 
        return one_third; // if 33rd percentile == key, return its index b/c it's a match
    else if (arr[two_thirds] == key)
        return two_thirds; // if 66th percentile == key, return its index b/c it's a match
    // in binary search, the array is assumed to be sorted
    // here, it's like binary search, but 3 intervals: [L, one_third-1], [one_third+1, two_thirds-1], [two_thirds+1, H]
    // if we reach this point, then 'key' is in one of these three intervals

    else if(arr[one_third] > key){
        return geniusSearch(arr, one_third - 1, L, key); // if the 1/3 element is greater than 'key', the key should be in the smallest third (before the 1/3 element)
    }
    else if (arr[one_third] < key) {
        // if 'key' is above the 1/3 element, it should be in either of the other two intervals (middle third, largest third)
        // to find which interval, we'll compare 'key' w/ 2/3 element
        if(arr[two_thirds] > key)
            return geniusSearch(arr, two_thirds-1, one_third+1, key); // if 2/3 element is greater than 'key' here, then 'key' should be in middle third
        else if (arr[two_thirds] < key)
            return geniusSearch(arr, H, two_thirds+1, key); // if 2/3 element is less than 'key' here, then 'key' should be in largest third

    }
    
    return -1;
    

    /*
    else if(arr[two_thirds] > key) {
        return geniusSearch(arr,H, two_thirds + 1, key);
    }

    else {
        return geniusSearch(arr,one_third + 1, two_thirds-1,key);
    }
    */
}

/* *2 7 (10) 17 23 (40) 56 *70        
    2 7 ((10)) *17 *23 40 56 70
      2 ((7)) **10 17 23 40 56 70
      2 7 *10 *17 23 40 56 70    //-1
*/

/*

geniusSearch(arr,7,0,16);
geniusSearch(arr, 4, 3, 16);
            2,2
            2,3

arr: 2, 7, 10, 17, 23, 40, 56, 70
length: 8
key: 16
L: 0, H: 7
one_third: (0+7)/3 = 7/3 = 2.33333 ~ 2. 1/3 element should be @ index 2.
two-thirds: 7 - (one_third) = 7-2 = 5. 2/3 element should be @ index 5.
- *2 7 10 17 23 40 56 *70
- L > H? No, 0 isn't > 7. 
- is arr[one_third] == key? arr[2] = 10, key = 16. 10 != 16. No, skip
- is arr[two_thirds] == key? arr[5] = 40, key = 16. 40 != 16. No, skip
- is arr[one_third] > key? arr[2] = 10, key = 16. 10 is not > 16. No, skip
- is arr[one_third] < key? arr[2] = 10, key = 16. 10 < 16. Yes, go to nested if-statement here
    - is arr[two_thirds] > key? arr[5] = 40, key = 16. 40 > 16. Yes, we'll search in middle third (one_third+1, two_thirds-1), aka b/w (3, 4)
    - however, 'key' isn't in that third
    
- return -1
*/
int main() {
    raining *year_rainfall = new raining[12]; // 1c: allocates enough 'raining' objects for 12 months, aka a year
    // each "raining" object should have 7 bytes, (12 objects) * (7 bytes/object) = 84 bytes

    // 1d: assign 108.44 to "rainfall" property of new "raining" object p
    raining *p = new raining;
    p->rainfall = 108.44;

    // 2a: find result of zoc() where m == 2 and n == 3 => 15
    int result_2a = zoc(2, 3);
    int arr[9]{1,2,3,4,5,6,7,8,9};

    cout << geniusSearch(arr,8,0,6);

    return 0;
}