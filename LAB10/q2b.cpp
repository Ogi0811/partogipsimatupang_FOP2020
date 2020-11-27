#include <iostream>
using namespace std;

double temp(double C, double F){
  C = (F-32) * 5/9;
  return C;
}

int main (){
  double C;
  double F;

  cout << "Input Temperature(Fahrenheit) : ";
  cin >> F;

  cout << "Temperatur in Celcius is : ";
  cout << temp(C,F)<<endl;

  return 0;
}