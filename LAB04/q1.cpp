#include <iostream>
using namespace std;

int main ( ) {
  int Age;

  //Input your age 
  cout <<"Input your Age: " <<endl;
  cin >>Age;

  //To find the explanation of your age
  if (Age < 0 ) {
    cout <<"Are you serious?" <<endl;
  }
  else if (Age < 12) {
    cout <<"You are so cute, You are Child" <<endl;
  }
  else if (Age < 18) {
    cout <<"You are Teenager" <<endl;
  }
  else {
    cout  <<"You are Adult" <<endl;
  }

  return 0;
 }