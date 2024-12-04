// Variabel - Tugas Rumah 7

#include <stdio.h> // Header file untuk input-output
#define G 6.67430e-11 // Konstanta gravitasi G dalam satuan Nm^2/kg^2

int main() {
    // Deklarasi variabel untuk massa benda dan jarak antar benda
    double m1, m2, m3;
    double r12, r23, r13;
    double F12, F23, F13;

    // Input massa benda dari pengguna
    printf("Masukkan massa benda 1 (kg): ");
    scanf("%lf", &m1);
    printf("Masukkan massa benda 2 (kg): ");
    scanf("%lf", &m2);
    printf("Masukkan massa benda 3 (kg): ");
    scanf("%lf", &m3);

    // Input jarak antar benda dari pengguna
    printf("Masukkan jarak antara benda 1 dan 2 (meter): ");
    scanf("%lf", &r12);
    printf("Masukkan jarak antara benda 2 dan 3 (meter): ");
    scanf("%lf", &r23);
    printf("Masukkan jarak antara benda 1 dan 3 (meter): ");
    scanf("%lf", &r13);

    // Menghitung gaya gravitasi antara masing-masing pasangan benda
    F12 = (G * m1 * m2) / (r12 * r12); // Gaya antara benda 1 dan 2
    F23 = (G * m2 * m3) / (r23 * r23); // Gaya antara benda 2 dan 3
    F13 = (G * m1 * m3) / (r13 * r13); // Gaya antara benda 1 dan 3

    // Menampilkan hasil gaya gravitasi
    printf("\nGaya gravitasi antara benda 1 dan 2 adalah: %.10e Newton\n", F12);
    printf("Gaya gravitasi antara benda 2 dan 3 adalah: %.10e Newton\n", F23);
    printf("Gaya gravitasi antara benda 1 dan 3 adalah: %.10e Newton\n", F13);
}
