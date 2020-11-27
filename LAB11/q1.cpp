#include<iostream>
#include<cstdlib>
using namespace std;

int myList[5] = {4, 7, 12, 5, 2};

void printel(int first,int last,int fourth){
	cout << "First element : " << myList[first] <<endl;		//the first elemen
	cout << "Last element : " << myList[last] <<endl;		//the last element 
	cout << "4th element : " << myList[fourth] <<endl;		//the fourth element
}

int main ( ) {
	
	printel(0,4,3);
	
	return 0;
}