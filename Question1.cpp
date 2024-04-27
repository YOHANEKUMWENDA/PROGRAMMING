#include <iostream>
#include <string>
using namespace std;

int main() {
    int* dynamicInt=nullptr;
    string* dynamicString=nullptr;

  
  cout << "Enter an integer: ";
  int userInteger;
  cin >> userInteger;

  
  dynamicInt = new int;

  
  *dynamicInt = userInteger;

  
  cout << "Enter a string: ";
  string userString;
  cin.ignore(); 
  getline(std::cin, userString);


  dynamicString = new string;

  *dynamicString = userString;

  
 cout<< "The value of the dynamically allocated integer: " << *dynamicInt << endl;
 cout<< "The value of the dynamically allocated string: " << *dynamicString << endl;

  
  delete dynamicInt;
  delete dynamicString;

  return 0;
}