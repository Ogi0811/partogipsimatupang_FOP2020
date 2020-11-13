#include<iostream>
using namespace std;

void repeat(string ulangan, int n) {
	for(int i=0; i < n; i++){
		cout <<ulangan<<endl;
	}
}

int main(){
	
	string input;
	int Input;
	
	cout <<"masukkan string: ";
	cin >> input;
	cout <<"berapa banyak pengulangannya : ";
	cin>> Input;
	
	repeat(input, Input);
}