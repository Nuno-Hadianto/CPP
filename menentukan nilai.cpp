#include <iostream>
using namespace std;

int main () {
	int nilai;
	cout << "NILAI" << endl;
	cout << "Masukkan Nilai : " << endl;
	cin >> nilai;
	if ( nilai >= 90 && nilai <= 100 ) {
		cout << "Nilai Anda A " << endl;
	} else if ( nilai >= 70 && nilai <= 80 ) {
		cout << " Nilai Anda B " << endl;
	} else if ( nilai <= 60 ) 
		cout << " Nilai Anda C " << endl;
	
	return 0;
}
