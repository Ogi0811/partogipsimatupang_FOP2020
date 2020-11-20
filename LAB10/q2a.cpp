#include <iostream>
using namespace std;

double temp(double C, double F){
  F = (C*9/5) +32;
  return F;
}

int main (){
  double C;
  double F;

  cout << "Input Temperature(celcius) : ";
  cin >> C;

  cout << "Temperatur in Fahrenheit is : ";
  cout << temp(C,F)<<endl;

  return 0;
}