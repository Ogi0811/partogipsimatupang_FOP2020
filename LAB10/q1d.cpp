#include <iostream>
using namespace std;
 
double min(double num1, double num2, double num3) 
{
	double mini;
	if ((num1 < num2) && (num1 < num3))
		mini = num1;
	else if ((num2 < num1) && (num2 < num3)) 
		mini = num2;
	else
		mini = num3;
		
	return mini;
}

int main ( ) 
{
	double x;
	double y;
	double z;
	cout <<"Input 3 Number "<<endl;
	cin >> x >> y >> z;
	double A = min(x, y, z);
	cout << "The Minimun between " << x <<", "<< y <<" and " << z << " is " << A << endl;
	
	return 0;
}