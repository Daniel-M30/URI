#include <stdio.h>

int main() {
    int numero;

    do {
        scanf("%d", &numero);
        
        if( numero != 0 ) {
            for( int i = 1; i < numero; i++ )
                printf("%d ", i);
            printf("%d\n", numero);
        }
    } while( numero != 0 );

    return 0;
}