#include<iostream>
#include<iomanip> //untuk menggunakan fungsi setW()
using namespace std;

int main ()
{
	int ar[10][10]; //Membentuk array 2d 10x10
	for(int a=0;a<=9;a++) //perulangan untuk baris
	{
		for(int b=0;b<=9;b++) //Perulangan untuk kolom
		{
		ar[a][b]=(a+1)*(b+1); //Proses mencari nilai
		}
	}
	
	for(int a=0;a<=9;a++) 
	{
		for(int b=0;b<=9;b++)
		{
		cout<<setw(4)<<ar[a][b]<<" "; //Cetak nilai	
		}
		cout<<endl;
	}
}
