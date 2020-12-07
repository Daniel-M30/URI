#include <stdio.h>
#include <stdlib.h>

int main() {
    int casos, integrantes, menor, maior;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        menor = 0;
        maior = 0;
        scanf("%d", &integrantes);

        int* vetor = malloc( integrantes * sizeof(int) );

        for( int j = 0; j < integrantes; j++ )
            scanf("%d", &vetor[j]);

        for( int j = 0; j < integrantes; j++ ) {
            for( int k = 0; k < integrantes; k++ ) {
                if( vetor[j] > vetor[k] )
                    maior++;

                else if( j == k )
                    continue;

                else
                    menor++;
            }

            if( maior == menor ) {
                printf("Case %d: %d\n", i + 1, vetor[j]);
                free(vetor);
                break;
            }
            menor = 0;
            maior = 0;
        }
    }

    return 0;
}