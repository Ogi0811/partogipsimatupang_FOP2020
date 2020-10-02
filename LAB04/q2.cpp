#include <iostream>
using namespace std;

int main ( ) {

  //user input the date 
  int month;
  int year;
  cout << " Input month" <<endl;
  cin >>month;
  cout << "Input year" <<endl;
  cin >>year;

  switch (month) {
    //if user enter January
    case 1 :
      cout <<"It's January, " << "It has 31 days";
      break;

    //if user enter February
    case 2 :
      if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "It's February, " << "It has 29 days" <<endl;
      }
      else {
        cout << "It's Febbruary, " << "It has 28 days" <<endl;
      }
      break;

    //if user enter March
    case 3 :
      cout << "It's March, " << "It has 31 days";
      break;
    
    //if user enter April
    case 4 :
      cout << "It's April, " << "It has 30 days";
      break;

    //if user enter May 
    case 5 :
      cout << "It's May, " << "It has 31 days";
      break;

    //if user enter June
    case 6 :
      cout << "It's June, " << "It has 30 days";
      break;

    //if user enter July
    case 7 :
      cout << "It's July, " << "It has 31 days";
      break;

    //if user enter August
    case 8 :
      cout << "It's August, " << "It has 31 days";
      break;

    //if user enter September
    case 9 :
      cout << "It's September, " << "It has 30 days";
      break;

    //if user enter Octoberr
    case 10 :
      cout << "It's October, " << "It has 31 days";
      break;

    //if user enter November
    case 11 :
      cout << "It's November, " << "It has 30 days";
      break;

    //if user enter December 
    case 12 :
      cout << "It's December, " << "It has 31 days";
      break;

    //if user input >12
    default :
      cout << "The last month on year is December ";
      break;
    
  }

  return 0;
}