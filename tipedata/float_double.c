#include <stdio.h>

int main() {
    float pi = 3.14;
    double presisiTinggi = 3.1415926535;
    long double presisiSangatTinggi = 3.14159265358979323846;
    printf("Nilai pi: %.2f\n", pi); // Menampilkan 2 angka desimal
    printf("Nilai presisi tinggi: %.10f\n", presisiTinggi); // Menampilkan 10 angka desimal

    // intinya float itu 4 byte, double itu 8 byte, dan long double itu 10 byte dalam penggunaan memori.
    // mereka memiliki kesamaan dalam hal penyimpanan data, tetapi berbeda dalam hal presisi(kapasitasnya).
    return 0;
}