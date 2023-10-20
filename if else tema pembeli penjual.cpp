#include <iostream>
using namespace std;
int main (){
	int minuman,makanan,keduanya,member,pembelian,selesai;
	cout << "Selamat Datang di Angkringan DjogjaKarta" << endl;
	
	cout << "Apa yang mau Anda pesan ? " << endl;
	cin >> minuman;
	
	if (minuman == 1) {
		cout << "Minuman Tersebut memiliki diskon 5 %" << endl;	
	}
	cout << "Apa yang anda mau pesan lagi ? " << endl;
	cin >> makanan;
	
	if (makanan == 2){
		cout << "Makanan Tersebut memiliki diskon 10 %" << endl;
	}
	cout << "Jika Membeli kedua tersebut maka......." << endl;
	cin >> keduanya;
	
	if (keduanya == 3){
		cout << "Anda Mendapatkan Diskon 15 %" << endl;
	}
	cout << "Anda adalah member angkringan ini maka.........." << endl;
	cin >> member;
	
	if (member == 4){
		cout << "Dapat Plus tambahan diskon 5% all pesanan" << endl;
	}
	cout << "Diskon Berlaku jika pembelian ke-2"<< endl;
	cin >> pembelian;
	
	if (pembelian == 5){
		cout << "Anda mendapatkan diskon jika pembelian ke-2"<< endl;
	}else if (pembelian == 6){
		cout << "Anda tidak mendapatkan diskon karna tidak melakukan pembelian ke-2"<< endl;
	}
	cout << "Siapa Nama Anda?,Karna telah mengunjungi angkringan disini!" << endl;
	cin >> selesai;
	
	if(selesai == 7){
		cout << "Mohammed Noeno Hadianto X-TKJ-1" << endl;
	}	
	cout << "Terimakasih Mengunjungi :)" << endl;
	cin.get();
	return 0;
}


