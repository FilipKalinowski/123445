#include <stdio.h>
#include <math.h>

double oblicz_pi_bbp(int liczba_iteracji) {
    double pi = 0.0;

    for (int k = 0; k < liczba_iteracji; k++) {
        double wyraz = (1.0 / pow(16.0, k)) * (
            4.0 / (8.0 * k + 1.0) -
            2.0 / (8.0 * k + 4.0) -
            1.0 / (8.0 * k + 5.0) -
            1.0 / (8.0 * k + 6.0)
        );
        pi += wyraz;
    }

    return pi;
}

int main() {
    int liczba_iteracji;
    printf("Podaj liczbe iteracji: ");
    scanf("%d", &liczba_iteracji);

    if (liczba_iteracji <= 0) {
        printf("Liczba iteracji musi byc wieksza niz 0.\n");
        return 1;
    }

    double pi_przyblizenie = oblicz_pi_bbp(liczba_iteracji);
    printf("Przyblieznie liczby pi dla %d iteracji wynosi: %.15f\n", liczba_iteracji, pi_przyblizenie);

    return 0;
}