#include <stdio.h>

int main() {
    int i, n;

    // Meminta input batas bilangan dari pengguna
    printf("Masukkan batas bilangan: ");
    scanf("%d", &n);

    printf("Bilangan Ganjil: \n");
    // Loop untuk menampilkan bilangan ganjil
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nBilangan Genap: \n");
    // Loop untuk menampilkan bilangan genap
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}


