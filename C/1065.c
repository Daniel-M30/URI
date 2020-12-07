#include <stdio.h>

int main() {
    int numero, contador = 0;

    for( int i = 0; i < 5; i++ ) {
        scanf("%d", &numero);
        if( numero % 2 == 0 )
            contador++;
    }

    printf("%d valores pares\n", contador);

    return 0;
}