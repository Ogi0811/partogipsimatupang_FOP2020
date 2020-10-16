#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
	int balance = 500,deposit, withdraw;
	
	cout << "SELAMAT DATANG DI ATM SEDERHANA"<<endl;
	
	char A;
	cout <<" \n 1. CekSaldo \n 2. LakukanDeposit \n 3. LakukanWithdraw ";
	cin >>A;
	
	switch(A) {
		case '1' :
			cout <<"Saldo anda adalah" << balance <<endl;
			break;
			
		case '2' :
			cout <<" Masukkan nilai yang ingin di deposit : ";
			cin >>deposit;
			
			balance = balance + deposit;
			
			cout <<"Saldo anda sekarang berjumlah : " <<balance<<endl;
			break;
			
		case '3' :
			cout <<"Saldo anda sekarang adalah : " <<balance<<endl;
			cout <<"Berapa yang ingin anda tarik : ";
			cin >>withdraw;
			
			balance = balance - withdraw;
			
			cout <<"Saldo anda tersisa : "<<balance<<endl;
			break;
			 
	}
	
	cout <<"\nTERIMAKASIH TELAH MAMPIR DI ATM"<<endl;
	return 0;
	
}