#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i, j;
    int* vetor;

    while( scanf("%d", &tamanho) != EOF ) {
        vetor = malloc( tamanho * sizeof(int) );
        i = 0, j = tamanho - 1;

        while( i < tamanho && j >= 0 ) {
            for( int k = 0; k < tamanho; k++ ) {
                if( k == i && k != j)
                    vetor[k] = 1;

                else if( k == j && k != i )
                    vetor[k] = 2;

                else if( k == j && k == i )
                    vetor[k] = 2;

                else
                    vetor[k] = 3;

                printf("%d", vetor[k]);
            }
            printf("\n");
            i++;
            j--;
        }

        free(vetor);
    }

    return 0;
}