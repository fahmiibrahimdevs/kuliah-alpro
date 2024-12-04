// Variabel - Tugas Rumah 4

#include <stdio.h> // Header file untuk input-output

int main() {
    // Deklarasi variabel
    int total_detik, hari, jam, menit, detik;

    // Input jumlah detik dari pengguna
    printf("Masukkan jumlah detik: ");
    scanf("%d", &total_detik);

    // Menghitung jumlah hari
    hari = total_detik / 86400;           // 1 hari = 86400 detik
    total_detik = total_detik % 86400;     // Sisa detik setelah dihitung hari

    // Menghitung jumlah jam
    jam = total_detik / 3600;              // 1 jam = 3600 detik
    total_detik = total_detik % 3600;      // Sisa detik setelah dihitung jam

    // Menghitung jumlah menit
    menit = total_detik / 60;              // 1 menit = 60 detik
    detik = total_detik % 60;              // Sisa detik setelah dihitung menit

    // Menampilkan hasil
    printf("Hasil konversi: %d hari, %d jam, %d menit, %d detik\n", hari, jam, menit, detik);

    return 0; // Mengakhiri program dengan sukses
}
