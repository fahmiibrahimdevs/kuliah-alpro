// Variabel - Tugas Rumah 3

#include <stdio.h> // Header file untuk input-output

int main() {
    // Deklarasi variabel untuk data diri
    char nama[50], nim[20], prodi[50];
    int nilai1, nilai2, nilai3, totalNilai;

    // Input data diri dari pengguna
    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin); // Menggunakan fgets agar bisa menerima spasi
    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Masukkan Program Studi: ");
    fgets(prodi, sizeof(prodi), stdin);

    // Input tiga nilai dari pengguna
    printf("Masukkan nilai pertama: ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &nilai2);
    printf("Masukkan nilai ketiga: ");
    scanf("%d", &nilai3);

    // Menghitung total nilai
    totalNilai = nilai1 + nilai2 + nilai3;

    // Menampilkan data diri dan total nilai
    printf("\n--- Data Diri ---\n");
    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Program Studi: %s", prodi);

    printf("\n--- Nilai Mahasiswa ---\n");
    printf("Nilai 1: %d\n", nilai1);
    printf("Nilai 2: %d\n", nilai2);
    printf("Nilai 3: %d\n", nilai3);
    printf("Total Nilai: %d\n", totalNilai);
}
