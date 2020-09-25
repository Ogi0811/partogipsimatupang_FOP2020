#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

  //Random number
  srand(time(NULL));
  float num = rand() % 100 ,answer;

  cout <<"Hello Bro! Welcome to the simple game!" <<endl;
  cout <<"From 1 - 100, You should guess what the number i have" <<endl;
  cout <<"What is your guess?" <<endl;
  cin >> answer;

  //Gueses from the user
  if (answer > 0 && answer <= 100){
    if (answer == num) {
      cout <<"You are Great" <<endl;
    }
    else if (answer < num){
      cout <<"your answer is too low, My number is  " <<num <<endl;
    }
    else  {
      cout <<"your answer is too hight, My number is " <<num <<endl;
    }
  }
  else {
    cout <<"Are you kidding me? I said 1 - 100!" <<endl;
  }
  return 0;
}