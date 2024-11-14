#include <stdio.h>

int main() {
    int n, i, liczba_podzielnikow = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &n);

    printf("Podzielniki liczby %d: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            liczba_podzielnikow++;
        }
    }

    if (liczba_podzielnikow == 2) {
        printf("\nLiczba %d jest liczba pierwsza.\n", n);
    } else {
        printf("\nLiczba %d nie jest liczba pierwsza.\n", n);
    }

    return 0;
}