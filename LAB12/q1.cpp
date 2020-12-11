#include <iostream>
using namespace std;


int my_arr[] = {1, 4, 7, 2, 6, 3, 5};
int main () {
  
  const int array_size = 7;
  cout<<"=====DESCENDING====="<<endl;
  for(int i=0; i<array_size-1; i++) {
    for(int j=i+1; j<array_size; j++) {
      if(my_arr[i]<my_arr[j]) {
        int temp = my_arr[i];
        my_arr[i] = my_arr[j];
        my_arr[j] = temp;
      }
    }
  }
  for(int i=0; i< array_size; i++) {
    cout <<"my_arr"<<"["<<i<<"]"<<" = "<<my_arr[i] <<endl;
  }
  cout <<endl;

cout<<"=====ASCENDING====="<<endl;
  for(int i=0; i<array_size-1; i++) {
    for(int j=i+1; j<array_size; j++) {
      if(my_arr[i]>my_arr[j]) {
        int temp = my_arr[i];
        my_arr[i] = my_arr[j];
        my_arr[j] = temp;
      }
    }
  }
  for(int i=0; i< array_size; i++) {
    cout <<"my_arr"<<"["<<i<<"]"<<" = "<<my_arr[i] <<endl;
  }
  return 0;
}
