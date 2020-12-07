#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoMatriz, i, j;
    int** matriz;
    
    scanf("%d", &tamanhoMatriz);

    while( tamanhoMatriz != 0 ) {
        int p = 1, c = 0, k = 0, f = tamanhoMatriz;
        matriz = malloc( tamanhoMatriz * sizeof(int*) );
        for( i = 0; i < tamanhoMatriz; i++ )
            matriz[i] = malloc( tamanhoMatriz * sizeof(int) );

        while( k < tamanhoMatriz ){
            i = c; 
            while( i < f ){
                j = c; 
                while( j < f ){
                    matriz[i][j]=p;
                    j++;
                }
                i++;
            }
            p++;
            c++;
            f--;
            k++;
        }

        for( i = 0; i < tamanhoMatriz; i++ ) {
            for( j = 0; j < tamanhoMatriz; j++ ) {
                if( j == tamanhoMatriz - 1 )
                    printf("%3d\n", matriz[i][j]);

                else
                    printf("%3d ", matriz[i][j]);
            }
        }
        printf("\n");

        for( i = 0; i < tamanhoMatriz; i++ )
            free(matriz[i]);
        free(matriz);
        scanf("%d", &tamanhoMatriz);
    }

    return 0;
}