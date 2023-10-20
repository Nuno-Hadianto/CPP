#include <iostream>
using namespace std;

int main()

{
	//Kecapatan
	
	cout << "Kecepatan " << endl;
	int x,y,z,c;
	int sum;
	cout << "Rumus : V = S/t " << endl;
	cout << "S : ";
	cin >> y;
	cout << "T : ";
	cin >> x;
	sum = x/y;
	cout << "Hasilnya : " << sum << endl;
	
	//Energi Kinetik
	
	cout << "Energi Kinetik " << endl;
	cout << "Rumus : Ek = 1/2 x M x V 2 " << endl;
	cout << "Berapa Energi Kinetik-Nya : ";
	cin >> y;
	cin >> x;
	cin >> z;
	cin >> c;
	sum = x/y*z*c;
	cout << "Hasilnya : " << sum << endl;
	return 0;
	
}
