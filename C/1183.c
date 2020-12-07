#include <stdio.h>
#define N 12

int quantidadeNumeros( int indice ) {
    int soma = 0;
    for( int i = 1; i < indice; i++ )
        soma += i;

    return soma;
}

int main() {
    int qtd;
    char operacao;
    double matriz[N][N], somaOrMedia = 0;
 
    scanf("%c", &operacao);

    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ )
            scanf("%lf", &matriz[i][j]);
    }

    switch (operacao) {
    case 'S':
        for( int i = 0; i < N; i++ ) {
            for( int j = 0; j < N; j++ ) {
                if( i >= j )
                    continue;

                else
                    somaOrMedia += matriz[i][j];
            }
        }
        break;
    
    default:
        qtd = quantidadeNumeros( N );
        for( int i = 0; i < N; i++ ) {
            for( int j = 0; j < N; j++ ) {
                if( i >= j )
                    continue;

                else
                    somaOrMedia += matriz[i][j] / qtd;
            }
        }
        break;
    }

    printf("%.1lf\n", somaOrMedia);

    return 0;
}