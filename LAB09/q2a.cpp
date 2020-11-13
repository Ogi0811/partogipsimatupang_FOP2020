#include <iostream>
#include<cmath>
using namespace std;

// swap the value
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;

  // In function value
	cout <<"In function value are :" <<endl;
	cout << "x = " << *x <<endl;
	cout << "y = " << *y <<endl<<endl;
}
	int main ( ) {
		int x = 5;
		int y = 2;
		
//before swapping 
	cout << "Before Swapping" <<endl;
	cout << "x = " << x <<endl;
	cout << "y = " << y <<endl;
	cout <<endl;

//after swapping
	swap(&x,&y);
	
	cout <<"After Swapping" <<endl;
	cout <<"x = " << x <<endl;
	cout <<"y = " << y <<endl;
	}
	