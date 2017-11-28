#include<iostream>
#include<iomanip> //untuk menggunakan fungsi setw()
using namespace std;

int main()
{
	for(int i = 1; i <= 10; i++)//perulangan untuk baris
	{
		for(int j = 1; j <= i; j++)//perulangan untuk kolom
			{
			cout<<setw(3)<<i * j<<" ";//mencetak nilai dan memberikan fungsi setw agar output menjadi rapi
			}
			cout<<endl;
	}
}
