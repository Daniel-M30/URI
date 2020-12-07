#include <stdio.h>

int main() {
    int numero1, numero2, soma = 0;

    scanf("%d", &numero1);
    scanf("%d", &numero2);

    if( numero1 > numero2 ) {
        for( int i = numero2 + 1; i < numero1; i++ ) {
            if( i % 2 != 0 )
                soma += i;
        }
    }

    else {
        for( int i = numero1 + 1; i < numero2; i++ ) {
            if( i % 2 != 0 )
                soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}