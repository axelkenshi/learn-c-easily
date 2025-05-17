#include <stdio.h>
int main() {
  int angka = 9;
  
  // cetak nilai angka
  printf("%d", angka);

  // sekedar menampilkan ukuran tipe data
    printf("Ukuran int: %lu bytes\n", sizeof(angka));
  return 0;
}