#include<iostream>
using namespace std;

int main() 
{
	
	for(int i = 2; i <= 6; i++) //perulangan pertama untuk menampilkan 5 baris dimulai dari 2 <= 6
	{
		for(int j = 0; j < 5; j++) //perulangan kedua untuk menampilkan 5 kolom tiap 1 baris
		{		
			cout<<i + j<<" ";//Menampilkan nilai
		}
		cout<<endl;
	}
}
