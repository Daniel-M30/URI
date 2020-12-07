#include <stdio.h>

int main() {
    int numero, soma;

    scanf("%d", &numero);

    while( numero != 0 ) {
        if( numero % 2 != 0 )
            numero++;

        soma = 0;
        for( int i = numero; i < numero + 10; i += 2 )
            soma += i;

        printf("%d\n", soma);

        scanf("%d", &numero);
    }

    return 0;
}