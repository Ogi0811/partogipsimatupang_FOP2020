#include<iostream>
using namespace std;

// To get information
string kuy(int a) {
	if ( a % 2 == 0) {
		return "even";
	}
	else {
		return "odd";
	}
}

int main ( ) {
	int a;
	cout <<"Input an integer " <<endl;    //user input
	cin >>a;
	cout << "your number is " << kuy(a) <<endl;     //output the information 
	return 0;
}