#include <iostream>
using namespace std;

int main () {

  //my age this year
  int myagethisyear;
  cout << "My age this year=";
  cin >> myagethisyear;

  //to show my age next year
  int myagenextyear = ++myagethisyear;
  cout << "My age this year=" << myagenextyear <<endl;

   //to show my age last year
  int myagelastyear = myagethisyear - 2;
  cout << "My ange last year=" << myagelastyear <<endl;

  return 0;

}