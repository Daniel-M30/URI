#include <stdio.h>
#define N 1000

int main() {
    int numero, vetor[N], aux = 0;

    scanf("%d", &numero);

    for( int i = 0; i < N; i++ ) {
        if( numero == aux )
            aux -= numero;

        vetor[i] = aux;

        printf("N[%d] = %d\n", i, vetor[i]);
        aux++;
    }

    return 0;
}