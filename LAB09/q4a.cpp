#include<iostream>
#include<cmath>
using namespace std;

double uhui(int r, double phi) {
	double area;
	area = phi * r * r;
	return area;
}

int main ( ) {
	int r;
	double phi = 3.14;
	cout << "Enter radius : " <<endl;
	cin >> r;
	cout << "Area of Circle = " << uhui(r, phi) <<endl;
}