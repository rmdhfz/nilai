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
	
	name: Hafiz Ramadhan
	nik: 191011402923
	kelas: 02TPLE001
	mata_kuliah: algoritma dan pemrograman 2
	source: https://github.com/rmdhfz/nilai.git

	list of :
	1. struct 
	2. pointer
	3. procedure ekternal
	4. procedure in-line

	list of procedure :
	1. BuatSaran
	2. SetGrade
	3. int nilaiAkhir : procedure-in-line
*/
#include <iostream> // load library iostream
using namespace std; // inisialisasi namespace std
/*pembuatan struct (data structure) dengan nama struct DataNilai*/
struct DataNilai{
	char nama[30];	// nama bertipe data char      - member
	int absen; 		// absen bertipe data int (10%) - member
	int tugas; 	    // tugas bertipe data int (20%) member
	int uts; 		// uts bertipe data int (30%) - member
	int uas; 		// uas bertipe data int (40%) - member
};
/*membuat procedure BuatSaran*/
void BuatSaran(int nilai){
	string Saran;
	if (nilai >= 80){
		Saran = "Bagus, terus tingkatkan prestasimu!";
	}else if (nilai >= 70){
		Saran = "Bagus, semangat terus belajarnya!";
	}else if (nilai >= 60){
		Saran = "Bagus, Lebih giat lagi belajarnya!";
	}else if (nilai >= 50){
		Saran = "Kamu harus lebih giat lagi belajarnya!";
	}else{
		Saran = "Nilai kamu jelek, kamu harus lebih giat & rajin lagi belajarnya ya!";
	}
	cout << "\t4) Saran\t: "<< Saran << endl;
}
/*membuat procedure SetGrade*/
void SetGrade(int nilaiAkhir){ 
	char Grade; // deklarasi variabel Grade dengan tipe data char
	string note; // deklarasi variabel note dengan tipe data string
	if (nilaiAkhir >= 80){
		Grade = 'A';
		note = "Anda lulus dengan nilai yang sangat baik";
	}else if (nilaiAkhir >= 70){
		Grade = 'B';
		note = "Anda lulus dengan nilai yang baik";
	}else if (nilaiAkhir >= 60){
		Grade = 'C';
		note = "Anda lulus dengan nilai yang cukup baik";
	}else if (nilaiAkhir >= 50){
		Grade = 'D';
		note = "Nilai anda kurang baik\n";
	}else{
		Grade = 'E';
		note = "\033[1;31mAnda tidak lulus, nilai anda tidak baik\033[0m";
	}
	cout << Grade << endl; 							// cetak grade sesuai dengan kondisi dari parameter nilaiAkhir, yang diberikan pada int main()
	cout << "\t3) Keterangan\t: " << note << endl;	// cetak note sesuai dengan kondisi dari parameter nilaiAkhir, yang diberikan pada int main()
	BuatSaran(nilaiAkhir);							// proses pembuatan point ke-4, yaitu saran dengan menggunakan procedur BuatSaran berdasarrkan nilaiAkhir
}

/*program utama*/
int main(){

	/*deklarasi object struct & object pointer struct*/
	DataNilai data, *pointer; // pembuatan object diluar struct
	pointer = &data; // proses dereference https://stackoverflow.com/questions/4955198/what-does-dereferencing-a-pointer-mean

	printf("-------------------------------------------------\n");
	printf("|      Program Menghitung Nilai Mahasiswa       |\n");
	printf("-------------------------------------------------\n");

	printf("\t1) Masukan nama\t\t: ");
	scanf("%29[^\n]%c", &pointer->nama); // mengalokasikan alamat nama kedalam struct nama ([^\n]: untuk mengizinkan space)
	
	printf("\t2) Masukan nilai absen\t: ");
	scanf("%d", &pointer->absen); // mengalokasikan alamat nama kedalam struct absen

	printf("\t3) Masukan nilai tugas\t: ");
	scanf("%d", &pointer->tugas); // mengalokasikan alamat nama kedalam struct tugas

	printf("\t4) Masukan nilai UTS\t: ");
	scanf("%d", &pointer->uts); // mengalokasikan alamat nama kedalam struct uts

	printf("\t5) Masukan nilai UAS\t: ");
	scanf("%d", &pointer->uas); // mengalokasikan alamat nama kedalam struct uas
    
    printf("--------------------------------------------------\n");
	printf("|         Informasi Data Nilai Mahasiswa         |\n");
    printf("--------------------------------------------------\n");

    printf("\t1) Nama Mahasiswa\t: %s\n", pointer->nama);	// tampilkan informasi nama mahasiswa
    printf("\t2) Nilai Absen\t\t: %d\n", pointer->absen);	// tampilkan informasi nilai absen
    printf("\t3) Nilai Tugas\t\t: %d\n", pointer->tugas);	// tampilkan informasi nilai tugas
    printf("\t4) Nilai UTS\t\t: %d\n", pointer->uts);	// tampilkan informasi nilai uts
    printf("\t5) Nilai UAS\t\t: %d\n", pointer->uas);	// tampilkan informasi nilai uas

    /*procedure in-line (nilaiAkhir)*/
	int nilaiAkhir = (pointer->absen * 10 / 100) + (pointer->tugas * 20 / 100) + (pointer->uts * 30 / 100) + (pointer->uas * 40 / 100);
    
	printf("--------------------------------------------------\n");
	printf("|                Hasil Kalkulasi                 |\n");
	printf("--------------------------------------------------\n");
	printf("\t1) Nilai Akhir\t: %d\n",  nilaiAkhir);

    /*execute procedure eksternal: SetGrade()*/
    cout<<"\t2) Grade\t: "; SetGrade(nilaiAkhir);

    /*keterangan sebagai informatif*/
    printf("--------------------------------------------------\n");
	printf("|              Keterangan Kalkulasi              |\n");
	printf("--------------------------------------------------\n");
	printf("\t- Nilai Absen memiliki bobot\t: 10%\n");
	printf("\t- Nilai Tugas memiliki bobot\t: 20%\n");
	printf("\t- Nilai UTS memiliki bobot\t: 30%\n");
	printf("\t- Nilai UAS memiliki bobot\t: 40%\n");

    return 0; // berikan informasi kepada CPU bahwa program berjalan dengan lancar dan kembalikan nilai 0;
}
