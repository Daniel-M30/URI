#include <stdio.h>
#define N 12

int tamanhoMatriz( int indice ) {
    int tamanho = 0;
    for( int i = 0; i < indice; i++ ) {
        for( int j = 0; j < indice; j++ ) {
            if( i == j )
                break;

            else
                tamanho++;
        }
    }

    return tamanho;
}

int main() {
    char operacao;
    double matriz[N][N], somaOrMedia = 0;
    int tamanho;

    scanf("%c", &operacao);

    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ )
            scanf("%lf", &matriz[i][j]);
    }

    switch (operacao) {
    case 'S':
        for( int i = 0; i < N; i++ ) {
            for( int j = 0; j < N; j++ ) {
                if( i == j )
                    break;

                else
                    somaOrMedia += matriz[i][j];
            }
        }
        break;
    
    default:
        tamanho = tamanhoMatriz(N);
        for( int i = 0; i < N; i++ ) {
            for( int j = 0; j < N; j++ ) {
                if( i == j )
                    break;

                else
                    somaOrMedia += matriz[i][j] / tamanho;
            }
        }
        break;
    }

    printf("%.1lf\n", somaOrMedia);

    return 0;
}