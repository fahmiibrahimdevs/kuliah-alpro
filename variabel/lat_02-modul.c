/*
* 1. Identifikasi kode program di bawah ini. manakah yang termasuk variabel, konstanta, komentar, header file? Tipe data apa saja yang
* digunakan?
*/
 
#include <stdio.h>
#include <math.h>
 
int main() {
  double p, result;
  float param = 6.5;
  result = log(param);
  printf("ln(%lf) = %lf\n", param, result); /* mencetak ke layar */
  return 0;
}
 
/*
* 2. Identifikasi kesalahan syntax penulisan kode program di bawah ini.
* Kemudian tulislah kembali dengan syntax yang benar.
*/
 
// Belum Diperbaiki
#include (stdio.h)
void main()
{
    long break = 0L; /* A whole number of feet //
    printf("Enter long: ");
    scanf("%ld", &break)
    printf("your input is %ld", break);
}
 
// Sudah Diperbaiki
#include <stdio.h>
 
int main()
{
    long panjang = 0L; /* A whole number of feet */
    printf("Enter Panjang: ");
    scanf("%ld", &panjang);
    printf("your input is %ld\n", panjang);
}
