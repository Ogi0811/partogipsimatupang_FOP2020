#include<iostream>
using namespace std;

int pow(int inNum, int powNum) {
	int result = inNum;
	
	for(int i = 1; i < powNum; i++) {
		result *= inNum;
	}
	return result;
}

double sqrt(double n) {
	double x = n;
	double y = 1;
	
	while (x > y) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}

int ceil(double inNum) {
	int returnNum;
	returnNum = inNum;
	returnNum += 1;
	
	return returnNum;
}

int floor(double inNum) {
	int returnNum;
	returnNum = inNum;
	
	return returnNum;
}

int main ( ) {
	double num;
	int num2;
	cout <<"Enter the num you want "<<endl;
	cin >> num >> num2;
	
	cout << "Pow(" <<num<<", "<<num2<<")  is " << pow(num, num2) <<endl;
	cout << "Sqrt of " << num2 << " is " << sqrt(num2) <<endl;
	cout << "ceil of " << num << " is " << ceil(num) <<endl;
	cout << "Floor of " << num << " is " << floor(num) <<endl;
 } 

