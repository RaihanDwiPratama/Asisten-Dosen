#include<iostream>
using namespace std;

int main() {
	// tipe data, nama variabel
	char x[10]; // maks 10 karakter
	char y[30]; // maks 30 karakter
	
	cout << "Masukkan NPM Anda: ";
	cin >> x;
	cout << "Masukkan Nama Anda: ";
	cin >> y;
	
	cout << "NPM Anda adalah: " << x << endl;
	cout << "Nama Anda adalah: " << y;
		
	return 0;
}
