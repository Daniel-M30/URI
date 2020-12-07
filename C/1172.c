#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
    int* vetor = malloc( N * sizeof(int) );

    for( int i = 0; i < N; i++ )
        scanf("%d", &vetor[i]);

    for( int i = 0; i < N; i++ ) {
        if( vetor[i] < 1 )
            printf("X[%d] = 1\n", i);

        else
            printf("X[%d] = %d\n", i, vetor[i]);
    }

    free(vetor);
    return 0; 
}