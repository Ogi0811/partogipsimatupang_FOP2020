#include<iostream>
using namespace std;

int main () {
  char H;
  cout<<"masukkan huruf = ";
  cin>>H;

  if (H == 'a' || H == 'e' || H == 'i' || H == 'u' || H == 'o') {
  cout<<"huruf vokal";
  }
  else {
  cout<<"huruf konsonan "<<endl;
  }

  return 0;
}
