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
	cout << endl;                              // membuat jarak perbaris program
	cout << "======================" << endl;  // membuat tampilan susunan data element aray
	cout << "Masukan Element Aray" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-n" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
// prosedure insertionsort
void insertionshort()
{
	int temp; // membuat variable daya temporer atau penyimpanan sementara 
	int j; // membuat variable j sebagai panda 

	for (int i = 1; i < n; i++) // membuat loping dengan i di mulai dari 1 hingga n-1
	{
		temp = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;

		cout << endl;
		cout << "\nPass" << i << ": ";
		for (int k =0 ; k < n; k++)
		{
			cout << arr[k] << n; " ";  // output ke layat
		}

	}
}

void display()
{
	cout << endl;
	cout << "TOTAL ELEMENT MOVEMENT" << n - 1 << endl;
	cout << "\n======================" << endl;
	cout << "EELEMENT ARRAY YANG TELAH TERSUSUN" << endl;
	cout << "========================" << endl;

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << endl; 

	}
	cout << endl;

}

int main()
{
	input(); // memanggil display 
	insertionshort(); // memanggil insertionshort
	display(); // memangigiil display
}