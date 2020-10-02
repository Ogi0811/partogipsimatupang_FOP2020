#include <iostream>
using namespace std;

int main ( ) {
  float w,h,H,BMI;

  //input your weight(dalam Kg)
  cout <<"Input your weight: " <<endl;
  cin >>w;

  //input your hight(dalam meter) 
  cout <<"Input your hight: " <<endl;
  cin >>h;

  H= h * h;
  BMI = w / H;

  //to find out your explanation from your BMI
  if (BMI < 18.5) {
    cout <<"Underweight" <<endl;
  }  
  else if (BMI >= 18.5 && BMI <= 24.9) {
    cout <<"Normal" <<endl;
  }
  else if (BMI >= 25 && BMI <= 29.9) {
    cout <<"Overweight" <<endl;
  }
  else if (BMI >= 30) {
    cout <<"Obesity" <<endl;
  }
  return 0;
}