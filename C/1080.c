#include <stdio.h>

int main() {
    int numero, maior = -1, indice;

    for( int i = 1; i <= 100; i++ ) {
        scanf("%d", &numero);

        if( numero > maior ) {
            maior = numero;
            indice = i;
        }
    }

    printf("%d\n%d\n", maior, indice);

    return 0;
}