// Operator - Latihan 3
// Sebelum Diperbaiki
#include <stdio.h>

Int main() {
  Float a, b, c, d, e = 0;
  printf(“Masukkan Nilai A: ”); scanf(“ % f”, % a);
  printf(“Masukkan Nilai B: ”); scanf(“ % f”, % b);
  printf(“Masukkan Nilai C: ”); scanf(“ % f”, % C);
  printf(“Masukkan Nilai D: ”); scanf(“ % f”, % D)
  e = (a + b) * c / d;
  printf(“Nilai dari e adalah % f”, e);
}

// Setelah Diperbaiki
#include <stdio.h>

int main() {
    float a, b, c, d, e = 0;
    printf("Masukkan Nilai A: "); scanf("%f", &a);
    printf("Masukkan Nilai B: "); scanf("%f", &b);
    printf("Masukkan Nilai C: "); scanf("%f", &c);
    printf("Masukkan Nilai D: "); scanf("%f", &d);
    e = (a + b) * c / d;
    printf("Nilai dari e adalah: %f\n", e);
}
