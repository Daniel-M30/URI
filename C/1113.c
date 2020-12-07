#include <stdio.h>

int main() {
    int numero1, numero2;

    do {
        scanf("%d %d", &numero1, &numero2);

        if( numero1 > numero2 )
            printf("Decrescente\n");

        if( numero2 > numero1 )
            printf("Crescente\n");
    } while( numero1 != numero2 );

    return 0;
}