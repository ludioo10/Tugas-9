#include<iostream>
using namespace std;

int main() {
	int n;
	
	bool flip = false; //Variabel untuk merubah nilai yang awalnya menurun ke menaik
	
	cout<<"Masukkan nilai n : ";
	cin>>n; //Input user
	
	int angka = n;//Angka awal bernilai variable n
	

	for(int i = 0; i < (2*n-1); i++) // Perulangan pertama untuk mengulang baris mencari yaitu 2n-1
	{
		for(int j = 1; j <= (2*n-1); j++)// Perulangan kedua untuk mengulang kolom mencari yaitu 2n-1
		{			
			cout<<angka; //cetak angka
		}
		cout<<endl;
		if(angka == 1) //Mengecek nilai, jika angka == 1, maka prosesnya diubah menjadi menaik (increment)
			flip = !flip;
		
		
		if(!flip) //Jika tidak flip (false) Maka nilai angka menurun (decrement)
			angka--;
		
		else
			angka++; //Maka nilai angka menaik (increment)
	}
}
