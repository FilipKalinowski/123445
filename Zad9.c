#include <stdio.h>
#include <math.h>

int main() {
    double c, epsilon;
    double x0 = 1.0; // Wstępne przybliżenie
    double x;

    printf("Podaj liczbe c (c > 0): ");
    scanf("%lf", &c);

    if (c <= 0) {
        printf("Liczba musi byc dodatnia!\n");
        return 1;
    }

    printf("Podaj dokladnosc epsilon (np. 0.00001): ");
    scanf("%lf", &epsilon);

    do {
        x = 0.5 * (x0 + c / x0);
        if (fabs(x - x0) < epsilon) break; // Sprawdzenie dokładności
        x0 = x;
    } while (1);

    printf("Pierwiastek kwadratowy z %.5f to %.10f\n", c, x);

    return 0;
}
