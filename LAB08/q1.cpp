#include <iostream>
#include <cmath>
using namespace std;

int main ( ) {
  double pi;
	double a=37;
	pi = M_PI;
	double jawaban1;
	jawaban1 = sin (a * (pi / 180));
	cout << "sin 37 is " <<jawaban1 <<endl;
	
	double b=53;
	double jawaban2;
	jawaban2 = cos (b * (pi / 180));
	cout << "cos 53 is " << jawaban2<<endl;
	
	double c=60;
	double jawaban3;
	jawaban3 = tan (c * (pi / 180));
	cout << "tan 60 is " <<jawaban3<<endl;

	double degree1;
	double rad1;
	
	rad1 = asin(0.58);
	cout <<rad1 <<endl;
	
	degree1 = rad1 * (180 / pi);
	cout << "sin = "<<degree1 <<endl;  //The value of sin
	
	double degree2;
	double rad2;
	rad2 = acos(0.29);
	cout << rad2 <<endl;
	
	degree2 = rad2 * (180 / pi);
	cout << "cos = "<<degree2 <<endl;   //The value of cos
	
	double degree3;
	double rad3;
	rad3 = atan(0.72);
	cout << rad3 <<endl;
	
	degree3 = rad3 * (180 / pi);
	cout << "tan = "<<degree3 <<endl;   //The value of tan
	
	cout << "jawD = "<<sqrt(156-12)<<endl;   //the value of sqrt
	
  	return 0;
	}