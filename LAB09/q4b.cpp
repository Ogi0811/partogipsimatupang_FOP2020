#include<iostream>
#include<cmath>
using namespace std;

double uhui(int r, double phi) {
	double volume;
	volume = (4 * phi * r * r * r) / 3;
	return volume;
}

int main ( ) {
	int r;
	double phi = 3.14;
	cout << "Enter radius : " <<endl;
	cin >> r;
	cout << "Volume  of sphere = " << uhui(r, phi) <<endl;
}