// Sebelum Diperbiki
 
#include <stdio.h>
 
void main() {
  float Alas, Tinggi, Luas_Segitiga;
  printf("Masukan Nilai Alas Segitiga : ");
  scanf("%f", Alas);
  printf("\nMasukan Nilai Tinggi Segitiga : ");
  scanf("%f", Tinggi);
  Luas_Segitiga = 0.5 * Alas * Tinggi;
  printf("\nNilai Luas Segitiga adalah : %f", Luas_Segitiga);
}
 
// Setelah Diperbaiki
 
#include <stdio.h>
 
int main() {
  float Alas, Tinggi, Luas_Segitiga;
  printf("Masukan Nilai Alas Segitiga : ");
  scanf("%f", &Alas);  // Menambahkan tanda & di depan Alas
  printf("\nMasukan Nilai Tinggi Segitiga : ");
  scanf("%f", &Tinggi);  // Menambahkan tanda & di depan Tinggi
  Luas_Segitiga = 0.5 * Alas * Tinggi;
  printf("\nNilai Luas Segitiga adalah : %f", Luas_Segitiga);
  return 0;  // Mengembalikan 0 untuk menunjukkan program sukses
}
