#include <iostream>
using namespace std;
 
int min(int num1, int num2) 
{
	int mini;
	if (num1 < num2) 
		mini = num1;
	else 
		mini = num2;
		
	return mini;
}

int main ( ) 
{
	int x=5;
	int y=2;
	int z = min(x, y);
	cout << "The Minimun between " << x <<" and " << y << " is " << z << endl;
	
	return 0;
}