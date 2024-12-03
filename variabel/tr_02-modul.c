// Variabel - Tugas Rumah 2

#include <stdio.h>    // Header file untuk input-output
#define PI 3.14159265 // Definisi konstanta π

int main() {
    // Deklarasi variabel
    float tinggi, diameter, jari_jari, volume;

    // Input dari pengguna
    printf("Masukkan tinggi kerucut (dalam satuan cm): ");
    scanf("%f", &tinggi);
    printf("Masukkan diameter kerucut (dalam satuan cm): ");
    scanf("%f", &diameter);

    // Menghitung jari-jari dari diameter
    jari_jari = diameter / 2;

    // Menghitung volume kerucut
    volume = (1.0/3.0) * PI * jari_jari * jari_jari * tinggi;

    // Menampilkan hasil volume kerucut
    printf("Volume kerucut adalah: %.2f cm^3\n", volume);
}
