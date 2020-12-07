#include <stdio.h>
#include <stdlib.h>
#define N 100

int main() {
    double numero;
    double* vetor = malloc( N * sizeof(double) );

    for( int i = 0; i < N; i++ )
        scanf("%lf", &vetor[i]);

    for( int i = 0; i < N; i++ ) {
        if( vetor[i] <= 10.0 )
            printf("A[%d] = %.1lf\n", i, vetor[i]);
    }

    free(vetor);
    return 0;
}