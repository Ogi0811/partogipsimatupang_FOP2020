#include <iostream>
using namespace std;

int main () {
  int number;

  //Input the any number
  cout << " input any number: " <<endl;
  cin >> number;

  //if the number even
  if (number % 2 == 0) {
    cout << "Its even number";
  }
  else {
    cout << "Its odd number";
  }
  return 0;

}