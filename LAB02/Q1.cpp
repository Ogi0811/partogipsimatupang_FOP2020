#include <iostream>
using namespace std;

int main () {
  int p,l,area,perimeter;

  //input rectangle's length
  cout <<"Input rectangle's length=";
  cin >>p;

  //Input rectangle's width
  cout << "Input rectangle's width=";
  cin >>l;

  //area of rectangle
  area= p * l;
  cout << "area=" << area <<endl;

  //perimeter of rectangle
  perimeter= 2*p + 2*l;
  cout << "perimeter =" << perimeter <<endl;

  return 0;
}