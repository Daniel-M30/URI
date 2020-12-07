#include <stdio.h>

int main() {
    int numero1, numero2, soma = 0;

    do {
        scanf("%d", &numero1);
    } while( numero1 < 1 );

    do {
        scanf("%d", &numero2);
    } while( numero2 < 1 );

    for( int i = 0; i <= numero2 - 1; i++ )
        soma += numero1 + i;

    printf("%d\n", soma);

    return 0;
}