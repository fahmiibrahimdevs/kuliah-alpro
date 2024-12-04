// Operator - Latihan 2
// Sebelum Diperbaiki
#include<stdio.h>

main() {
  int A, B;
  printf("A = "); scanf("%f", & A);
  printf("B = "); scanf("%d", & B)
  A = B;
  printf("New value\n");
  printf("%d\n", A);
  printf("%d", B);
}

// Setelah Diperbaiki
#include <stdio.h>

int main() {
    int A, B;
    // Input nilai A dan B
    printf("A = "); scanf("%d", &A);  // Mengubah %f menjadi %d untuk tipe data int
    printf("B = "); scanf("%d", &B);  // Menambahkan titik koma di akhir pernyataan ini

    // Menyalin nilai B ke A
    A = B;

    // Output hasil akhir
    printf("New value\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
}
