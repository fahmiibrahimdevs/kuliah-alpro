// Variabel - Tugas Rumah 6

#include <stdio.h> // Header file untuk input-output

#define C 2.99e8 // Mendefinisikan konstanta c = 2.99 x 10^8 m/s

int main() {
    // Deklarasi variabel untuk massa dan energi
    double massa, energi;

    // Input massa dari pengguna
    printf("Masukkan massa (dalam kilogram): ");
    scanf("%lf", &massa);

    // Menghitung energi menggunakan rumus E = mc^2
    energi = massa * C * C;

    // Menampilkan hasil
    printf("Energi (E) yang dihasilkan adalah: %.2f Joule\n", energi);
}
