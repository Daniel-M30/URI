#include <stdio.h>
#define N 12

int main() {
    double matriz[N][N], somaOrMedia = 0;
    int coluna;
    char operacao;

    scanf("%d", &coluna);
    getchar();
    scanf("%c", &operacao);

    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ )
            scanf("%lf", &matriz[i][j]);
    }

    switch (operacao)
    {
    case 'S':
        for( int i = 0; i < N; i++ ) 
            somaOrMedia += matriz[i][coluna];
        break;
    
    default:
        for( int i = 0; i < N; i++ )
            somaOrMedia += matriz[i][coluna] / N;
        break;
    }

    printf("%.1lf\n", somaOrMedia);

    return 0;
}