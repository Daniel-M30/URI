#include <stdio.h>
#include <stdlib.h>

int main() {
    double* vetor = malloc( 6 * sizeof(double) );
    int contador = 0;

    for( int i = 0; i < 6; i++ ) {
        scanf("%lf", &vetor[i]);

        if( vetor[i] > 0 )
            contador++;
    }

    printf("%d valores positivos\n", contador);

    free(vetor);
    return 0;
}