#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;

    printf("Ciag Fibonacciego: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}

int main() {
    int n;
    printf("Podaj liczbe elementow ciagu Fibonacciego do wygenerowania: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Liczba elementow musi byc wieksza od 0.\n");
        return 1;
    } else {
        fibonacci(n);
    }

    return 0;
}