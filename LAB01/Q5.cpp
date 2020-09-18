#include <iostream>
using namespace std;

int main() {

//Variable
int waktu1 = 14;
int waktu2 = 21;
int waktu1baru = waktu1 % 12;
int waktu2baru = waktu2 % 12;

//mengubah ke format 12 jam
cout << "waktu" << waktu1 << ":00" << "diubah ke format 12 jam = " << waktu1baru << ":00" << endl;
cout << "waktu" << waktu2 << ":00" << "diubah ke format 12 jam = " << waktu2baru << ":00" << endl;
return 0;

}