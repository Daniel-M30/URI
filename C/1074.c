#include <stdio.h>

int main() {
    int numeroCasos, numero;

    scanf("%d", &numeroCasos);

    for( int i = 0; i < numeroCasos; i++ ) {
        scanf("%d", &numero);

        if( numero == 0 )
            printf("NULL\n");

        else if( numero % 2 != 0 ) {
            if( numero > 0 )
                printf("ODD POSITIVE\n");

            else
                printf("ODD NEGATIVE\n");
        }

        else {
            if( numero > 0 )
                printf("EVEN POSITIVE\n");

            else
                printf("EVEN NEGATIVE\n");
        }
    }

    return 0; 
}