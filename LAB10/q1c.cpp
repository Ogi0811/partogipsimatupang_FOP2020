#include <iostream>
using namespace std;
 
double min(double num1, double num2) 
{
	double mini;
	if (num1 < num2) 
		mini = num1;
	else 
		mini = num2;
		
	return mini;
}

int main ( ) 
{
	double x=1.23;
	double y=3.45;
	double z = min(x, y);
	cout << "The Minimun between " << x <<" and " << y << " is " << z << endl;
	
	return 0;
}