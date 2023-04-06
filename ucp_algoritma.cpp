//jawaban no 1. Karena algorithma dapat menyelesaikan masalah secara berturut turut dan bertahap tahap tanpa melewatkan satu tahapanpun, dengan menggunakan bahasa komputer
//jawaban no 2.static -> Array dan Dynamic -> Linked list 
//jawaban no 3.kecepatan waktu, penerjemah, tergantung system, bahasa pemrograman
//jawaban no 4. bubble sort Algoritma yang paling sederhana digunakan kepada data yang kecil atau tidak banyak
//jawaban no 5. yang termasuk dalam quadrastic adalah Quicksort yang termasuk dalam loglinear adalah insertsort
//jawaban no 6.Dibawah ini
#include <iostream>
using namespace std;

int Agn[39];                         // Membuat Array dengan panjang data 39
int n;                               // Membuat Variable inputan n

void input() {						//Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
		cin >> n;									 // memanggil variable inputan n

		if (n <= 39) {								 // membuat kondisi n tidak lebih dari 39
			break;
		}
		else
		{
			cout << "\n Array yang anda masukkan maksimal 8 elemen. \n"; // Menampilkan Pesan Jika  data lebih dari 39
		}
	}
	cout << endl;									 // Membuat jarak perbaris program 
	cout << "=====================" << endl;		 // Membuat tampilan susunan data elemen array
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)						 // Mengguanakan perualangan for untuk menyimpan data pada Agn
	{
		cout << "Data ke- " << (i + 1) << ": ";		 // Memasukan atau menginputkan nilai data n 
		cin >> Agn[i];							 // Menyimpan nilai data n kedalam array Agn
	}
}

void insertionsort() {							// Procedure Insertionsort

	int temp;									// Membuat variable data temporer atau penyimpanan sementara
	int Ag;										// Membuat variable Ag sebagai penanda

	for (int i = 1; i < n; i++) {				// Looping dengan i dimulai dari 1 hingga n-1

		temp = Agn[i];							// simpan nilai Agn[i] ke variable sementara temp

		Ag = i - 1;								// setting nilai Ag sama dengan i-1;

		while (Ag >= 0 && Agn[Ag] > temp)      // Looping while dimana nilai Ag lebih besar sama dengan 0 dan
			// Agn[Ag] lebih besar daripada temp
		{
			Agn[Ag + 1] = Agn[Ag];			 // simpan Agn[Ag] ke dalam variable Agn[Ag+1]
			Ag = Ag - 1;						 // Decrement nilai Ag by 1
		}
		Agn[Ag + 1] = temp;					// simpan nilai temp ke dalam Agn[Ag+1]

		cout << "\nStep " << i << ": ";		// Output ke layar
		for (int k = 0; k < n; k++) {		// Looping nilai k dimulai dari 0 hingga n-1
			cout << Agn[k] << " ";			// Output ke layar
		}
	}
}

void display() {												// Procedure Display
	cout << endl;												// Output baris kosong 
	cout << "\n=================================" << endl;		// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// Output ke layar
	cout << "=================================" << endl;		// Output ke layar

	for (int Ag = 0; Ag < n; Ag++) {								// Looping dengan Ag dimulai dari 0 hingga n-1
		cout << Agn[Ag] << endl;									// Output ke layar
	}
	cout << endl;												// Output baris kosong
}

int main()
{
	input();							// memanggil input 
	insertionsort();					// memanggil insertionsort
	display();							// memanggil display
}