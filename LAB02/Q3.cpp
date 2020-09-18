#include <iostream>
#include <math.h>
using namespace std;

int main () {

  //input the value
  double radius;
  double pi = 3.14;
  cout << " Value of radius=";
  cin >> radius;

  //Show the result of volume
  cout << "volume=" << 1.33 * pi * pow(radius,3) <<endl;

  //Show the surface area
  cout << "surface area=" << 4 * pi * pow(radius,2) <<endl;

  return 0;
}