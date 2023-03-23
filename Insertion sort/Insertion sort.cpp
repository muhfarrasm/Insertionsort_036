#include <iostream>
using namespace std;

int arr[20];															// Membuat Array dengan panjang data 20
int n;																	// Membuat Variable Inputan n

void input() {					// procedure input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";					// Membuat inputan jumlah element array
		cin >> n;														// Memanggil variable inputan n
		
		if (n <= 20) {													// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; //Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;															// Membuat jarak per baris program
	cout << "================================================" << endl;		// Membuat tampilan susunan data element array
	cout << "===========Masukkan Element Array===============" << endl;
	cout << "================================================" << endl;
	
	for (int i = 0; i < n; i++)										// Menggunakan perulangan for untuk menyimpan  data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";						
		cin >> arr[i];												// Menyimpan nilai data n kedalam array arr
	}
}

void insertionsort(){												// Procedur insertionsort
	int temp;
	int j;

	for (int i = 1; i < n; i++) {			// Looping dengan i dimulai dari 1 hingga n-1
		temp = arr[i];						// simpan nilai arr[i] ke variable sementara temp
		j = i - 1;							// Setting nilai j sama engan i-1

		while (j >= 0 && arr[j] > temp)		//Looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];			// simpan arr[j] kedalam variable arr[j+1
			j--;							// decrement nilai j by 1
		}
		arr[j + 1] = temp;					// simpan nilai temp ke dalam arr[j+1]

		cout << "\nStep" << i << ": ";		// Output ke layar 
		for (int k = 0; k < n; k++) {		// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";			// Output ke layar
		}
	}

}

void display() {						// Prosedur display
	cout << endl;								// Output ke layar baris kosong
	cout << "\n======================" << endl;// Output ke layar
	cout << "\nElement array" << endl;	// Output ke layar
	cout << "\n======================" << endl; // Output ke layar

	for (int j = 0; j < n; j++) {				// Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;				
	}
	cout << endl;
}