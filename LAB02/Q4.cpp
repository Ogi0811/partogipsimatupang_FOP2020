#include <iostream>
using  namespace std;

int main () {

  //enter degree in celcius
  double celcius;
  cout << "enter degree in celcius = ";
  cin >> celcius;

  //fahrenheit degree
  double fahrenheit = ( celcius * 9 / 5) + 32;

  //result
  cout << "celcius after change = " << fahrenheit << "Fahrenheit degree" <<endl;

  return 0;

}