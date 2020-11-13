#include <iostream>
#include<cmath>
using namespace std;

//result of sum
int sumnum (int num1, int num2) {
	int result;
	result = num1 + num2;
	return result;
	}
	
//result of substract
int subnum(int num1, int num2){
	int result1;
	result1 = num1 - num2;
	return result1;
}

//result of multiply
int mulnum(int num1, int num2) {
	int result2;
	result2 = num1 * num2;
	return result2;
}
//result of division
int divnum(int num1, int num2) {
	int result3;
	result3 = num1 / num2;
	return result3;
}
	 
	int main ( ) {
		int num1 = 5;
		int num2 = 2;
		cout << "The sum of " <<num1 <<"+"<<num2<<" = "<<sumnum(num1, num2) <<endl;
		cout << "The substract of " <<num1 <<"-"<<num2<<" = " <<subnum(num1, num2) <<endl;
		cout << "The multiply of " <<num1 <<"*"<<num2<<" = "<<mulnum(num1, num2)<<endl;
		cout << "The division of " <<num1 <<"/"<<num2<<" = "<<divnum(num1, num2)<<endl;
		
	}