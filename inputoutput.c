#include <stdio.h>

int main() {
    // menyimpan input ke dalam variabel nama
  char nama[20]; //dengan panjang 20 karakter huruf

  // perintah input
  printf("Masukkan nama anda: ");
  scanf("%s", nama);
  /*
    scanf membaca input dari keyboard
    %s adalah format input untuk string
    - nama - adalah variabel yang akan menyimpan input
  */

  // perintah output
  printf("Nama anda adalah: %s\n", nama); // menampilkan output ke layar

// ------------------------------------------------------------
  // contoh output tanpa input (ditulis langsung di dalam kode)
  printf("halo dunia\n");
  return 0;
}