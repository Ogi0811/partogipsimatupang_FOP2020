#include <iostream>
using namespace std;

int main() {
	int i,j,k;
	
	cout <<"Input number : ";
	cin >>k;
	
	cout << "Multiplication table from 1 to " << k <<endl;
	for (i=1;i<=k;i++) {
		for (j=1;j<=k;j++){
			cout << i * j << " ";
		}
		cout << endl;
	}
	return 0;
}