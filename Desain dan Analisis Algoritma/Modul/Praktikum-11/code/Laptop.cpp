#include <iostream>

using namespace std;

class Laptop {
	private:
		string pemilik;
		string merk;
		
	public:
		Laptop(string var1, string var2) {
			pemilik = var1;
			merk = var2;
			
			cout << "Paket Laptop " << merk << " milik " << pemilik << " sudah dikirim" << endl;
		}
};

int main() {
	Laptop laptopDani("Dani", "Asus");
	Laptop laptopBanu("Banu", "Hp");
	Laptop laptopAyu("Ayu", "Acer");
	
	return 0;
}
