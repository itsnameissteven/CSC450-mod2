#include <iostream>
#include <string>

using namespace std;

int main() {
  string stringOne, stringTwo;
  int count = 0;

  // Repeat process three times
  while (count < 3)
  {
  cout << "Type  a string" << endl; 
  getline(cin, stringOne); // get entire line
  cout << "Type another string" << endl;
  getline(cin, stringTwo);

  cout << "\nConcatenation output" << endl;
  cout << stringOne + stringTwo + "\n" << endl; // output response

  count++; // update count
  };
  
  

  return 0;
}