#include<iostream>
#include<iomanip> //untuk menggunakan fungsi setw()
using namespace std;

int main()
{
	int angka = 3
	
	for(int i = 1; i <= 10; i++)//perulangan untuk 10 baris
	{
		for(int j = 0; j < i; j++)//perulangan ke 2 menampilkan i kolom tiap 1 baris jumlah kolom = i
		{
			cout<<setw(2)<<angka + j<<" "; //menampilkan nilai  
		}
		cout<<endl;
		angka += 2;//setelah melakukan perulangan kolom,tambah 2 nilai variable angka
	}

}
