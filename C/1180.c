#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd;

    scanf("%d", &qtd);
    int* vetor = malloc( qtd * sizeof(int) );

    for( int i = 0; i < qtd; i++)
        scanf("%d", &vetor[i]);

    int menor = vetor[0], posicao = 0;

    for( int i = 1; i < qtd; i++ ) {
        if( vetor[i] < menor ) {
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    free(vetor);
    return 0;
}