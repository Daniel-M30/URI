#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor = malloc( 3 * sizeof(int) );
    int* vAux = malloc( 3 * sizeof(int) );

    for( int i = 0; i < 3; i++)
        scanf("%d", &vetor[i]);

    for( int i = 0; i < 3; i++ )
        vAux[i] = vetor[i];
    
    int menor, aux;
    for( int i = 0; i < 2; i++ ) {
        menor = vetor[i];
        for( int j = 1; j < 3; j++ ) {
            if( vetor[j] < vetor[i] ) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for( int i = 0; i < 3; i++ )
        printf("%d\n", vetor[i]);
    printf("\n");

    for( int i = 0; i < 3; i++ )
        printf("%d\n", vAux[i]);

    free(vAux);
    free(vetor);
    return 0;
}