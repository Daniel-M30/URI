#include <stdio.h>

int main() {
    double numero, vetor[100];

    scanf("%lf", &numero);

    vetor[0] = numero;
    printf("N[0] = %.4lf\n", numero);

    for( int i = 1; i < 100; i++ ) {
        vetor[i] = vetor[i - 1] / 2.00;
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }

    return 0;
}