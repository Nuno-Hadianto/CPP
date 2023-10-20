#include <iostream>
using namespace std;
int main()
{
	int minuman,makanan,keduanya,member,pembelian,selesai;
	cout << "Minuman Tersebut memiliki diskon = " << endl;
	cin >> minuman;
	
	switch(minuman == 0){
		case true:
			cout << "minuman tersebut memiliki diskon 5 % " << endl;
	}
	
	cout << "Makanan Tersebut memiliki diskon = " << endl;
	cin >> makanan;
	
	switch(makanan == 1){
		case true:
			cout << "makanan tersebut memiliki diskon 10% " << endl;
	}
	
	cout << "Jika Anda membeli keduanya maka = " << endl;
	cin >> keduanya;
	
	switch(keduanya){
		case 2:
			cout << "Mendapatkan diskon 15% " << endl;
		case 3:
			cout << "Jika tidak,anda tidak mendapatkan diskon 15% " << endl;
	}
	
	cout << "Jika anda member maka = " << endl;
	cin >> member;
	
	switch(member){
		case 4:
			cout << "mendapatkan plus tambahan diskon 5% all pesanan " << endl;
		case 5:
			cout << "Jika tidak,anda tidak mendapatkan plus tambahan diskon 5% all pesanan " << endl;
	}
	
	cout << "Jika anda member maka = " << endl;
	cin >> pembelian;
		
	switch(pembelian){
		case 6:
			cout << "Anda mendapatkan diskon jika pembelian ke-2 " << endl;
		case 7:
			cout << "Jika tidak,Anda tidak mendapatkan diskon jika pembelian ke-2 " << endl;
	}
	
	cout << "Kami para waiters mengatakan = " << endl;
	cin >> selesai;
		
	switch(selesai){
		case 8:
			cout << "Terimakasih Atas Kunjungan-nya UwU " << endl;
		case 9:
			cout << "Tolong kembali kesini kapan-kapan!!! " << endl;
	}
	
	return 0;
}
