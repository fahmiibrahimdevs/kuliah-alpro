// Variabel - Tugas Rumah 5

#include <stdio.h> // Header file untuk input-output
#define PHI 3.14159 // Mendefinisikan konstanta PHI

int main() {
    // Deklarasi variabel untuk radius, luas, dan keliling
    float radius, luas, keliling;

    // Input radius dari pengguna
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    // Menghitung luas dan keliling lingkaran
    luas = PHI * radius * radius;        // Rumus luas lingkaran: π * r^2
    keliling = 2 * PHI * radius;         // Rumus keliling lingkaran: 2 * π * r

    // Menampilkan hasil
    printf("Luas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);
}
