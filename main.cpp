#include <iostream>

using namespace std;

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
	if (total >= 90){
		Grade = 'A';
	}else if (total > 80 && total <= 89){
		Grade = 'B';
	}else if (total > 70 && total <= 79){
		Grade = 'C';
	}else if (total > 60 && total <= 69){
		Grade = 'D';
	}else{
		Grade = 'E';
	}
	cout << Grade << endl;
}
/*program utama*/
int main(){

	struct DataNilai data, *pointer; // pembuatan object diluar struct
	pointer = &data; // proses dereference https://stackoverflow.com/questions/4955198/what-does-dereferencing-a-pointer-mean

    printf("--------------------------------------------------\n");
	printf("------  Program Menghitung Nilai Mahasiswa  ------\n");
    printf("--------------------------------------------------\n");

	printf("Masukan nama Mahasiswa : ");
	scanf("%29s", &pointer->nama); // mengalokasikan alamat nama kedalam struct nama
	
	printf("Masukan absensi Mahasiswa - 10% : ");
	scanf("%d", &pointer->absen); // mengalokasikan alamat nama kedalam struct absen

	printf("Masukan nilai tugas - 20% : ");
	scanf("%d", &pointer->tugas); // mengalokasikan alamat nama kedalam struct tugas

	printf("Masukan nilai UTS - 30% : ");
	scanf("%d", &pointer->uts); // mengalokasikan alamat nama kedalam struct uts

	printf("Masukan nilai UAS - 40% : ");
	scanf("%d", &pointer->uas); // mengalokasikan alamat nama kedalam struct uas
    
    printf("--------------------------------------------------\n");
	printf("|         Informasi Data Nilai Mahasiswa         |\n");
    printf("--------------------------------------------------\n");

    printf("Nama Mahasiswa: %s\n", pointer->nama);	
    printf("Nilai Absen: %d\n", pointer->absen);	
    printf("Nilai Tugas: %d\n", pointer->tugas);	
    printf("Nilai UTS: %d\n", pointer->uts);	
    printf("Nilai UAS: %d\n", pointer->uas);

    /*procedure in-line*/
	int total = (pointer->absen * 10 / 100) + (pointer->tugas * 20 / 100) + (pointer->uts * 30 / 100) + (pointer->uas * 40 / 100);
    /*procedure in-line*/
    
    printf("----------------\n");
    printf("Hasil : %d\n",  total);

    /*execute procedure eksternal: SetGrade()*/
    cout<<"Grade of : "; SetGrade(total);

    return 0;
}