#include <stdio.h>

int main() {
    int numero1, numero2, soma;

    scanf("%d %d", &numero1, &numero2);

    while( numero1 > 0 && numero2 > 0 ) {
        soma = 0;
        if( numero1 > numero2 ) {
            for( int i = numero2; i <= numero1; i++ ) {
                soma += i;
                printf("%d ", i);
            }
        }

        else {
            for( int i = numero1; i <= numero2; i++ ) {
                soma += i;
                printf("%d ", i);
            }
        }

        printf("Sum=%d\n", soma);

        scanf("%d %d", &numero1, &numero2);
    }

    return 0;
}