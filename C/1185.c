#include <stdio.h>
#define N 12

int tamanhoMaximo( int indice ) {
    int tamanhoMax = 0;
    for( int i = 0; i < indice; i++ ) {
        for( int j = 0; j < indice; j++ ) {
            if( i + j == indice - 1 )
                break;

            else
                tamanhoMax++;
        }
    }

    return tamanhoMax;
}

int main() {
    char operacao;
    double matriz[N][N], somaOrMedia = 0;
    int tamanhoMax;

    scanf("%c", &operacao);

    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ )
            scanf("%lf", &matriz[i][j]);
    }

    switch(operacao) {
    case 'S':
        for( int i = 0; i < N; i++ ) {
            for( int j = 0; j < N; j++ ) {
                if( i + j == N - 1 )
                    break;

                else
                    somaOrMedia += matriz[i][j];
            }
        }
        break;
    
    default:
        tamanhoMax = tamanhoMaximo(N);
        for( int i = 0; i < N; i++ ) {
            for( int j = 0; j < N; j++ ) {
                if( i + j == N - 1 )
                    break;

                else
                    somaOrMedia += matriz[i][j] / tamanhoMax;
            }
        }
    }   

    printf("%.1lf\n", somaOrMedia);

    return 0;
}