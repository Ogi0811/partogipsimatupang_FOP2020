#include<iostream>
using namespace std;

int myList[5] = {4, 7, 12, 5, 2};

int kuy(){
	int sum=0;
	for (int i = 0; i < 5; i++) { 		//Looping to find the sum of array
        sum += myList[i];
}
return sum;
}

double average(){
	double av=kuy()/5;
	return av;
}

int main () {
	cout << "Sum of array elements : " << kuy()<<endl;
	cout << "Average of array is : " <<average() <<endl;
    return 0;
}