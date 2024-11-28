#include <stdio.h>

int main() {
    int p, q, r;

    
    for (r = 1; r <= 1000; r++) {
        for (q = 1; q < r; q++) { 
            for (p = 1; p < q; p++) {
                
                if (p * p + q * q == r * r) {
                    printf("(%d, %d, %d)\n", p, q, r);
                }
            }
        }
    }

    return 0;
}