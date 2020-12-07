#include <stdio.h>
#include <stdlib.h>

int main() {
    double* vetor = malloc( 6 * sizeof(double) );
    int contador = 0;
    double media = 0;

    for( int i = 0; i < 6; i++ ) {
        scanf("%lf", &vetor[i]);

        if( vetor[i] >= 0 )
            contador++;
    }

    for( int i = 0; i < 6; i++ )
        if( vetor[i] >= 0 )
            media += vetor[i] / contador;

    printf("%d valores positivos\n", contador);
    printf("%.1lf\n", media);

    free(vetor);
    return 0;
}