#include <stdio.h>
#include <math.h>

int main() {
    double c, epsilon;
    int n;
    double x0 = 1.0; // Wstępne przybliżenie
    double x;

    printf("Podaj liczbe c (c > 0): ");
    scanf("%lf", &c);

    if (c <= 0) {
        printf("Liczba musi byc dodatnia!\n");
        return 1;
    }

    printf("Podaj stopien pierwiastka n (n > 1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Stopien pierwiastka musi byc wiekszy od 1!\n");
        return 1;
    }

    printf("Podaj dokladnosc epsilon (np. 0.00001): ");
    scanf("%lf", &epsilon);

    do {
        x = (1.0 / n) * ((n - 1) * x0 + c / pow(x0, n - 1));
        if (fabs(x - x0) < epsilon) break; // Sprawdzenie dokładności
        x0 = x;
    } while (1);

    printf("Pierwiastek %d-tego stopnia z %.5f to %.10f\n", n, c, x);

    return 0;
}
