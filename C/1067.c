#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);

    for( int i = 1; i <= numero; i++ ) {
        if( i % 2 == 1 )
            printf("%d\n", i);
    }

    return 0;
}