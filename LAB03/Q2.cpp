#include <iostream>
using namespace std;

int main () {

  int time;
  //Input what time now
  cout << "input what time now: " <<endl;
  cin >> time;
  //greting from the server
  if(time >= 0.00 && time <= 11.59) {
    cout << "Good Morning";
  }
  if(time >= 12.00 && time <= 17.59) {
    cout << "Good Afternoon";
  }
  if(time >= 18.00 && time <= 23.59) {
    cout << "Good Evening";
  }
  else if (time > 24){
    cout << "Eror";
  }
  return 0;
}