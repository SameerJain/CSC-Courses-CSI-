/**********
Enter string: dfwfwe
New string:
DFWFWE
 */
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  string input;
  char x;

  cout << "Enter string: ";

  cin >> input;

  cout << "New string: " << endl;

  for (int i = 0; i < input.length(); i++) {
    x = toupper(input[i]);

    cout << static_cast<char>(x);
  }

  return 0;
}