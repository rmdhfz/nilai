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

    printf("\tNama Mahasiswa: %s\n", pointer->nama);	
    printf("\tNilai Absen: %d\n", pointer->absen);	
    printf("\tNilai Tugas: %d\n", pointer->tugas);	
    printf("\tNilai UTS: %d\n", pointer->uts);	
    printf("\tNilai UAS: %d\n", pointer->uas);

    /*procedure in-line*/
	int total = (pointer->absen * 10 / 100) + (pointer->tugas * 20 / 100) + (pointer->uts * 30 / 100) + (pointer->uas * 40 / 100);
    /*procedure in-line*/
    
    printf("--------------------------------------------------\n");
	printf("|                 Hasil Kalkulasi                |\n");
    printf("--------------------------------------------------\n");
    printf("\tHasil : %d\n",  total);

    /*execute procedure eksternal: SetGrade()*/
    cout<<"\tGrade: "; SetGrade(total);

    return 0;
}