#include <iostream>
using namespace std;
int main()
{
	int member,member2,member3,member4;
		cout << "Kami akan memberi syarat untuk memenuhi persyaratan member disini " <<endl;
		
		cout << "Syarat-nya adalah agar menjadi member : " <<endl;
		cin >> member;
		
		switch(member == 0){
			case true:
				cout << "Harus membeli lebih dari 5 menu sesajian " <<endl;
		}
		
		cout << " Jika tidak memenuhi persyaratan, maka : " <<endl;
		cin >> member2;
		
		if(member2 == 1){
			cout << " Tidak akan mendapatkan member tersebut karna tidak memenuhi persyaratan " <<endl;
		}
		
		cout << " Tetapi kalau pelanggan memenuhi persyaratan, maka : " << endl;
		cin >> member3;
		
		switch(member3 == 2){
			case false:
				cout << " Pelanggan tersebut mendapatkan member tersebut karna telah memenuhi persyaratan " <<endl;
		}
		
		cout << "Jika anda memesan menu yang berbeda melebihi dari 5, maka : " <<endl;
		
		switch(member4){
			case 3:
				if(member4 == 4){
					cout << "Anda mendapatkan bonus dalam pembelian tersebut " <<endl;
				}
				else if(member4 == 5){
					cout << "Anda tidak akan mendpatkan bonus,karnna memesan menu yg sama " <<endl;
				}
				break;
		}
		
		return 0:
}
