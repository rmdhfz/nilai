#include <iostream>
using namespace std;

/*
	MIT License

	Copyright (c) 2020 Hafiz Ramadhan

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
	
	github: https://github.com/rmdhfz/nilai
	name: Hafiz Ramadhan

*/

/*pembuatan struct (data structure) - dengan nama Nilai*/
struct DataNilai{
	char nama[30];
	int absen; 		// absen (10%) - member
	int tugas; 	    // tugas (20%) member
	int uts; 		// uts (30%) - member
	int uas; 		// uas (40%) - member
};
/*membuat procedur SetGrade*/
void SetGrade(int total){ 
	char Grade;
	if (total >= 80){
		Grade = 'A';
	}else if (total > 70){
		Grade = 'B';
	}else if (total > 60){
		Grade = 'C';
	}else if (total > 50){
		Grade = 'D';
	}else{
		Grade = 'E';
	}
	cout << Grade << endl;
}
/*program utama*/
int main(){

	/*deklarasi object struct & object pointer struct*/
	DataNilai data, *pointer; // pembuatan object diluar struct
	pointer = &data; // proses dereference https://stackoverflow.com/questions/4955198/what-does-dereferencing-a-pointer-mean

	printf("--------------------------------------------------\n");
	printf("------  Program Menghitung Nilai Mahasiswa  ------\n");
	printf("--------------------------------------------------\n");

	printf("\t1) Masukan nama Mahasiswa : ");
	scanf("%29s", &pointer->nama); // mengalokasikan alamat nama kedalam struct nama
	
	printf("\t2) Masukan absensi Mahasiswa - 10% : ");
	scanf("%d", &pointer->absen); // mengalokasikan alamat nama kedalam struct absen

	printf("\t3) Masukan nilai tugas - 20% : ");
	scanf("%d", &pointer->tugas); // mengalokasikan alamat nama kedalam struct tugas

	printf("\t4) Masukan nilai UTS - 30% : ");
	scanf("%d", &pointer->uts); // mengalokasikan alamat nama kedalam struct uts

	printf("\t5) Masukan nilai UAS - 40% : ");
	scanf("%d", &pointer->uas); // mengalokasikan alamat nama kedalam struct uas
    
    printf("--------------------------------------------------\n");
	printf("|         Informasi Data Nilai Mahasiswa         |\n");
    printf("--------------------------------------------------\n");

    printf("\t1) Nama Mahasiswa: %s\n", pointer->nama);	
    printf("\t2) Nilai Absen: %d\n", pointer->absen);	
    printf("\t3) Nilai Tugas: %d\n", pointer->tugas);	
    printf("\t4) Nilai UTS: %d\n", pointer->uts);	
    printf("\t5) Nilai UAS: %d\n", pointer->uas);

    /*procedure in-line*/
	int total = (pointer->absen * 10 / 100) + (pointer->tugas * 20 / 100) + (pointer->uts * 30 / 100) + (pointer->uas * 40 / 100);
    
	printf("--------------------------------------------------\n");
	printf("|                Hasil Kalkulasi                 |\n");
	printf("--------------------------------------------------\n");
	printf("\t1) Nilai Akhir\t: %d\n",  total);

    /*execute procedure eksternal: SetGrade()*/
    cout<<"\t2) Grade\t: "; SetGrade(total);

    return 0;
}