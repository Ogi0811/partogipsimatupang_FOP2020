#include<iostream>
#include<fstream>
using namespace std;

int main() {
  int min,max;
  double average;
  int myArray[100];
  int sum=0;

  ifstream file("lab11_randnum.txt");
  for(int i=0; i<100; i++){
    file >> myArray[i];
  }

  max= myArray[0];
  for(int i=0; i<100; i++){
    if(myArray[i]>max){
      max=myArray[i];
    }
  }

  min=myArray[0];
  for(int i=0; i<100; i++){
    if(myArray[i]<min){
      min=myArray[i];
    }
  }

  sum=0;
  for(int i=0; i<100; i++){
    sum += myArray[i];
  }
  average=sum/100;

  cout << "Max is :"<<max<<endl;
  cout << "min is :"<<min<<endl;
  cout << "Average is :"<<average<<endl;

return 0;

}