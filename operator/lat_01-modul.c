// Sebelum Diperbaiki
#include <iostream.h>
#include <conio.h>

int main() {
  int a = 82, b = 26;
  print(a“ + ”b, “ = ”a + b);
  cout << a << " + " << b << "" << a + b << endl;
  cout << a << " - " << B << " = " << a - b << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << A << " / " << b << " = " << a / b << endl;
  cout << a << " % " << b << " = " << a % b << endl:
  getch();
}

// Setelah Diperbaiki
#include <stdio.h>

int main() {
    int a = 82, b = 26;

    // Menampilkan hasil operasi aritmatika
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
}
