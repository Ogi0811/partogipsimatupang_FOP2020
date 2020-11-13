#include <iostream>
#include <string>
using namespace std;

void greeting(string name){
	cout << "It was nice to know your name " <<name;
}
 
int main()
{
  // user input his 
    string a;
    cout << "What is your name? ";
    cin >>a;
    greeting(a);
}