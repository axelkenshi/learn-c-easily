#include <stdio.h>

int main() {
    char huruf = 'A';
    printf("Huruf yang disimpan: %c\n", huruf); // %c Menampilkan huruf yang disimpan

    // jika ingin merangkai kalimat dari beberapa huruf
    char *kalimat = "Halo, dunia!";
    printf("Kalimat yang disimpan: %s\n", kalimat);
    return 0;
}