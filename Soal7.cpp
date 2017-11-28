#include<iostream>
using namespace std;

int main() {
	int n;
	
	bool flip = false; //merubah nilai yang awalnya menurun ke menaik
	
	cout<<"Masukkan nilai n : ";
	cin>>n; //Input user
	
	int angka = n; //angka awal bernilai variabel n
	
	int t; //Variable pembantu
	
	for(int i = 0; i < (2*n-1); i++) // Perulangan pertama untuk mengulang baris mencari yaitu 2n-1
	{
		if((2*n-1-i) == n - 1) //Flip
		{
			flip = !flip;
			t = n - 2;
		}
			for(int j = 0; j < (2*n-1); j++) // Perulangan kedua untuk mengulang kolom mencari yaitu 2n-1
				{
					if(!flip) //Proses inc atau dec
					{
					if(n - i <= n - j && j > 0)
					{
					angka--;
				}
				else if(j >= (2*n-1) - i) {
					angka++;
				}
			}
			else {
				if(n - t <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - t) {
					angka++;
				}
			}
			cout<<angka;
		}
		
		cout<<endl;
		
		angka = n; //reset nilai angka ke nilai n
		
		t--; //Decrement variabel t
	}
}
