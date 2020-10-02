#include <iostream>
using namespace std;

int main ( ) {
  float x,y,z,av;

  //input your score 
  cout <<"Input your first score : " <<endl;
  cin >>x;
  cout <<"Input your second score : " <<endl;
  cin >>y;
  cout <<"Input your third score : " <<endl;
  cin >>z;

  av=(x+y+z)/3;

  //to find out your grade
  if (av>=80) {
    cout <<"Your Grade is A" <<endl;
  }
  else if (av>=75 && av<80) {
    cout <<"Your Grade is AB" <<endl;
  }
  else if (av>=70 && av<75) {
    cout <<"Your Grade is B" <<endl;
  }
  else if (av>=65 && av<70) {
    cout <<"Your Grade is BC" <<endl;
  }
  else if (av>=60 && av<65) {
    cout <<"Your Grade is C" <<endl;
  }
  else if (av>=40 && av<60) {
    cout <<"Your Grade is D" <<endl;
  }
  else if (av<40) {
    cout <<"Your Grade is F" <<endl;
  }
  return 0;
}