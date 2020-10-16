#include <iostream>
using namespace std;

int main ( ) {
	int i,j,row;
	
	cout <<"Input number of row :" <<endl;
	cin >>row;
	
	for(i=0;i<=row;i++){
		for(j=0;j<=i;j++){
			cout <<"*";
		}
		cout <<endl;
	} 
		for(i=row-1;i>=0;i--) {
		for(j=0;j<=i;j++){
			cout <<"*";
		}
		cout <<endl;
		}
}