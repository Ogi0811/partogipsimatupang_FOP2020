#include <iostream>
using namespace std;

int main () {
  float angka1,angka2;

  cout << "Masukkan angka Pertama" <<endl;
  cin >> angka1;

  cout << "Masukkan angka Kedua" <<endl;
  cin >> angka2;

  char A;
  cout << "/n 1. penjumalahan /n 2. pengurangan /n 3. pembagian /n 4. perkalian";
  cin >> A;

  switch(A) 
  {
    case '1' :
    cout <<"hasil penjumlahan dari " <<angka1<<" + "<<angka2<< "adalah" <<angka1+angka2<<endl;
    break;

    case '2' :
    cout <<"hasil pengurangan dari " <<angka1<<" - "<<angka2<< "adalah" <<angka1-angka2<<endl;
    break;

    case '3' :
    if(angka2 == 0) {
      cout <<"Angka tidak boleh = 0";
    }
    else {
      cout <<"hasil pembagian dari " <<angka1<<" : "<<angka2<< "adalah" <<angka1/angka2<<endl;
    }
    break;

    case '4' :
    cout <<"hasil perkalian dari " <<angka1<<" x "<<angka2<< "adalah" <<angka1*angka2<<endl;
    break;
  
    default :
    cout << "Eror";
    break;
  }
  return 0;
}