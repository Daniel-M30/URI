#include <stdio.h>
#define N 12

int main() {
    double matriz[N][N], resultado = 0;
    int linha;
    char operacao;

    scanf("%d", &linha);
    getchar();
    scanf("%c", &operacao);

    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ )
            scanf("%lf", &matriz[i][j]);
    }

    switch(operacao) {
        case 'S':
            for( int i = 0; i < N; i++ )
                resultado += matriz[linha][i];
            break;
        
        default:
            for( int i = 0; i < N; i++ )
                resultado += matriz[linha][i] / N;
    }

    printf("%.1lf\n", resultado);

    return 0;
}