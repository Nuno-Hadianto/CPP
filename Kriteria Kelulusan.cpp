#include<iostream>
using namespace std;
int main (){
	// Soal Ke-4 //
	// Mohammed Noeno Hadianto //
	// X-TKJ-1 //
	cout << "Menentukan kriteria Kelulusan Siswa Smkn7 Samarinda....." <<endl;
	int lulus,syarat,tidaklulus,luluss;
	
	 cout << "Persyaratan siswa lulus nilainya diatas kkm 80 pada semua mata pelajaran : " <<endl;
	 cin >> syarat;
	 
	 if (syarat == 0 ){
	 	cout << "Siswa akan lulus jika nilai berada diatas kkm 80 " <<endl;
	 }
	
	cout << "Jika siswa tidak mencapai nilai diatas kkm 80 maka....";
	cin >> tidaklulus;
	
	if (tidaklulus == 1){
		cout << "Tidak akan lulus karena tidak mencapai nilai diatas kkm 80 " <<endl;
	}
	
	cout << "Persyaratan naik kelas jika nilai siswa dibawah kkm adalah : ";
	cin >> lulus;
	
	if(lulus == 2){
		cout << "Siswa harus menuntaskan semua tugas yang kosong di kd mata pelajaran " <<endl;
	}else if (lulus == 3){
		cout << "Siswa tidak dapat naik kelas karna tidak menuntaskan semua tugas yang di-kerjakan......" <<endl;
	}
	
	cout << "Nama siswa yang lulus : " << endl;
	cin >> luluss;
	
	if(luluss == 4){
		cout << "Mohammed Noeno Hadianto Dari X-TKJ-1 "<< endl;	
	}
	cout << " Selesai ^W^ " <<endl;
	cin.get();
	return 0;
	
}
