#include <iostream>
using namespace std;

int arr[20]; //mrmbuat array dengan panjang data 20
int n;       //membuat variable inputan n

void input()
{  // produk input
	while (true)
	{ 
		cout << "memasukkan jumlah data pada array : ";
		cin >> n;

		if (n <= 20)
		{ //membuat kondisi n tidak lebih dari 20
			break;

		}
		else
		{
			cout << "\nArray yang anda masukan maksi al 20 elemen. \n";   //menampilkan pesan jika data  
		}

	}
}