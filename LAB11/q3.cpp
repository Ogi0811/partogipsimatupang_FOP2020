#include<iostream>
using namespace std;

int myList[5] = {4, 7, 12, 5, 2};

void get() {
	for (int i = 0; i < 5; i++) { 		//Looping
    	if(myList[i]%2 ==0)
    		cout<<myList[i] << " It's even" <<endl;   //If myList is even
    	else
    		cout <<myList[i] << " It's odd "<<endl;   //If myList is odd
}
}

int main () {
	
	get();
	
	return 0;
}