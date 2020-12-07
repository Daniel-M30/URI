#include <stdio.h>
#include <stdlib.h>

int main() {
    int indice, qtd;

    scanf("%d", &qtd);

    for( int k = 0; k < qtd; k++ ) {
        scanf("%d", &indice);

        if( indice == 0 )
            printf("Fib(%d) = 0\n", indice);

        else if( indice <= 2 )
            printf("Fib(%d) = 1\n", indice);

        else {
            unsigned long long int* vetor = malloc( indice * sizeof(unsigned long long int) );
            vetor[0] = 1;
            vetor[1] = 1;

            for(int i = 2; i < indice; i++ )
                vetor[i] = vetor[i - 1] + vetor[i - 2];

            printf("Fib(%d) = %llu\n", indice, vetor[indice - 1]);

            free(vetor);
        } 
    }

    return 0;
}