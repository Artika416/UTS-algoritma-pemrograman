#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string nMahasiswa[100], jMahasiswa[100], kMahasiswa[100];
	int	npm[100], bayarAwal[100], bayarCicilan[100], besaran[100], uangKuliah[100], bayar[100], terbayar[100], sisaBayar[100], i = 0;
	char entry = 'y';
		
	cout << setprecision(10);

	while(entry == 'Y' || entry == 'y')
	{
		cout << "--------------------------------------------\n";
		cout << "Nama Mahasiswa" << ":"; cin >> nMahasiswa[i];
		cout << "NPM" << ":"; cin >> npm[i];
		cout << "Kode" << ":"; cin >> kMahasiswa[i];
		
		if(kMahasiswa[i] == "SI"){
			jMahasiswa[i] = "Sistem Informasi";
			bayarAwal[i] = 2100000;
			bayarCicilan[i] = 7;
			besaran[i] = 300000;
			uangKuliah[i] = bayarAwal[i] + (bayarCicilan[i] * besaran[i]);
		}else if(kMahasiswa[i] == "TI"){
			jMahasiswa[i] = "Teknik Informatika";
			bayarAwal[i] = 2500000;
			bayarCicilan[i] = 7;
			besaran[i] = 300000;
			uangKuliah[i] = bayarAwal[i] + (bayarCicilan[i] * besaran[i]);
		}else if(kMahasiswa[i] == "KA"){
			jMahasiswa[i] = "Komputer Akuntansi";
			bayarAwal[i] = 1750000;
			bayarCicilan[i] = 6;
			besaran[i] = 200000;
			uangKuliah[i] = bayarAwal[i] + (bayarCicilan[i] * besaran[i]);
		}else if(kMahasiswa[i] == "MI"){
			jMahasiswa[i] = "Manajemen Informatika";
			bayarAwal[i] = 1500000;
			bayarCicilan[i] = 6;
			besaran[i] = 250000;
			uangKuliah[i] = bayarAwal[i] + (bayarCicilan[i] * besaran[i]);
		}
		
		cout << "Jurusan" << ":" << jMahasiswa[i] << endl;
		cout << "Pembayaran Awal" << ":" << bayarAwal[i] << endl;
		cout << "Jumlah Cicilan" << ":" << bayarCicilan[i] << endl;
		cout << "Besar Cicilan" << ":" << besaran[i] << endl;
		
		cout << "Pembayaran Ke" << ":"; cin >> bayar[i];
		
		if(bayar[i] <= bayarCicilan[i])
		{
			terbayar[i] = bayarAwal[i] + (bayar[i] * besaran[i]);
			sisaBayar[i] = uangKuliah[i] - terbayar[i];
		}
		else
		{
			terbayar[i] = uangKuliah[i];
			sisaBayar[i] = 0;
		}
		
		cout << "Uang Kuliah" << ":" << uangKuliah[i] << endl;
		cout << "Uang Kuliah Terbayar" << ":" << terbayar[i] << endl;
		cout << "Sisa Uang Kuliah" << ":" << sisaBayar[i] << endl;
		
		cout << "Masih ingin menghitung [Y/T]" << ":"; cin >> entry;
		
		i++;
	}
	
	return 0;
}
