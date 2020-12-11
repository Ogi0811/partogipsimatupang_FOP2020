#include <iostream>
#include <fstream>
using namespace std;

//for sortir
void sort(int arr[], int arr_size){
  int guess = arr[1]; 
  for (int i = 0; i < arr_size; i++){ 
    for (int j = i+1; j < arr_size + 1; j++){
      if (arr[i] > arr[j]){
        guess = arr[i];
        arr[i] = arr[j];
        arr[j] = guess;
      }
    }
  }
  for (int i = 0; i < arr_size; i++)
  cout << arr[i] << '\n';
}
//code binary search
void binarysearch(int arr[], int key, int arr_size, int index, int low, int high){
  while(high >= low){
    int mid = (high + low)/2;
    if (key < arr[mid]){
      high = mid - 1;
    }
    else if (key == arr[mid]){
      index = mid;
      break;
    }
    else if (key > arr[mid]){
      low = mid + 1;
    }
  }
  cout << key << '\n' << arr[index];

  if (key == arr[index]){
    cout << '\n' << "CONGRATULATION!! YOU ARE SO LUCKY";
  }
  else{
    cout << '\n' << "SORRY!! TRY AGAIN";
  }
} 

int main(){
  //read the file
  ifstream input;
  input.open("lottery_winner.txt");

  const int arr_size = 7;
  int arr[arr_size];

  for(int i = 0; i < arr_size; i++){
    input >> arr[i];
    
  }

  sort(arr, arr_size);

  int key;
  cout << '\n' << " Enter yours number = ";
  cin >> key;
  int high = arr_size - 1;
  int low = 0;
  int index = 0;

  binarysearch(arr, key, arr_size, index, high,low);

  return 0;
}