#include <stdio.h>
#include <stdbool.h> // Untuk menggunakan true/false

int main() {
    _Bool status = 1; // 1 = true, 0 = false
    bool aktif = true; // Menggunakan header library stdbool.h

    printf("Status: %d\n", status);
    printf("Aktif: %d\n", aktif);
    return 0;
}

/*
penjelasan:
- _Bool adalah tipe data boolean yang diperkenalkan di C99. Nilai 1 berarti true, dan 0 berarti false.
- bool adalah alias untuk _Bool yang didefinisikan dalam header stdbool.h. Ini membuat kode lebih mudah dibaca.

- true dan false adalah nilai konstan yang didefinisikan dalam stdbool.h untuk merepresentasikan nilai boolean.
  dengan kata lain boolean adalah tipe data yang hanya memiliki dua nilai, yaitu true (benar) dan false (salah).
*/