#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ( ){
  srand(time(0));
  int answer,count,number;
  int point=0;
  
	while(count <10){
	float x=rand()%10, y=rand()%10;
	
	number = x+y;
	
	cout <<"How many " << x <<"+"<< y <<endl;
    cin >>answer;
    count++;
    
    if (answer == number) {
    	cout <<"correct"<<endl;
    	point++;
	}
	else {
		cout <<"incorrect"<<endl;
	}
	
  }
  cout <<"\nTotal point : " << point <<endl;

  return 0;
}