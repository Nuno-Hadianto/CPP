#include <iostream>
using namespace std;

int main () {
	int x;
	cout << " Kondisi Air ke - 3 " << endl;
	cin >> x;
	if ( x == 0 ) {
		cout << " Air Penuh " << endl;
	} else if ( x == 1) {
		cout << " Air Kosong " << endl;
	} else if ( x != 1 && x != 0) 
		cout << " Air Hanya Tersisa Setengah Masih Bisa Dipakai " << endl;
	
	return 0;
	
}
