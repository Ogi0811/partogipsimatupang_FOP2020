#include <iostream>
using namespace std;
 
int max(int num1, int num2) 
{
  int maxi;

  if (num1 > num2)
    maxi = num1;
  else
    maxi = num2;

  return maxi;
}

int main()
{
  int x=4;
  int y= 1;
  int z = max(x, y);
  cout << "The maximum between " << x <<" and " << y << " is " << z << endl;

  return 0;
}