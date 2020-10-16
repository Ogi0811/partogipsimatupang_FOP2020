#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i=0;
	for ( ;i<100;i+=3) {
		if (i%5==0) {
			continue;
		}
		cout << i <<endl;
	}
	return 0;
}
