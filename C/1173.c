#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);

    int vetor[10];
    vetor[0] = numero;

    printf("N[0] = %d\n", vetor[0]);

    for( int i = 1; i < 10; i++ ) {
        vetor[i] = vetor[i - 1] * 2;

        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}