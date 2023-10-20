#include <iostream>
using namespace std;
int main ()
{
	int Hari;
	
	cout << " Mengetahui Hari-Hari = ";
	cin >> Hari;
	
	switch(Hari){
		case 1:
			cout <<"Hari Senin Adalah Hari Pertama " << endl;
			break;
		case 2:
			cout << "Hari Selasa Adalah Hari Kedua " << endl;
			break;
		case 3:
			cout << "Hari Rabu Adalah Hari Ketiga " << endl;
			break;
		case 4:
			cout << "Hari Kamis Adalah Hari Keempat " << endl;
			break;
		case 5:
			cout << "Hari Jum'at Adalah Hari Kelima " << endl;
			break;
		case 6:
			cout << "Hari Sabtu Adalah Hari Keenam " << endl;
			break;
		case 7:
			cout << "Hari Minggu Adalah Hari Ketujuh " << endl;
			break;
		
		
	}
	
	return 0;
}
