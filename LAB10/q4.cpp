#include<iostream>
using namespace std;

void getInformation(int num);

int main () {
	int num;
	cout <<"input your num"<<endl;
	cin >> num;
	
	getInformation(num);
}
void getInformation (int num) {
	
	int year;
	int month;
	int day;
	
	year = num / 365;
	month =(num  % 365)/30;
	day=(num  % 365)%30;
	cout <<"year = "<<year<<endl;
	cout << "month = "<< month <<endl;
	cout <<"day = "<<day<<endl<<endl;

  cout <<"The information of :"<<num<<" days is "<<year<<" year, "<<month<<" month, "<<day<<" days. "<<endl;
}