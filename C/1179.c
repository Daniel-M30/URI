#include <stdio.h>

int main() {
    int numero, vPar[5], vImpar[5], par = 0, impar = 0;

    for( int i = 0; i < 15; i++ ) {
        scanf("%d", &numero);

        if( numero % 2 == 0 ) {
            vPar[par] = numero;
            par++;
        }

        else {
            vImpar[impar] = numero;
            impar++;
        }

        if( par == 5 ) {
            for( int j = 0; j < 5; j++ )
                printf("par[%d] = %d\n", j, vPar[j]);
            par = 0;
        }

        if( impar == 5 ) {
            for( int j = 0; j < 5; j++ )
                printf("impar[%d] = %d\n", j, vImpar[j]);
            impar = 0;
        }
    }

    if( impar != 0 ) {
        for( int j = 0; j < impar; j++ )
            printf("impar[%d] = %d\n", j, vImpar[j]);
    }

    if( par != 0 ) {
        for( int j = 0; j < par; j++ )
            printf("par[%d] = %d\n", j, vPar[j]);
    }

    return 0;
}