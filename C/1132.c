#include <stdio.h>

int main() {
    int numero1, numero2, total = 0;

    scanf("%d %d", &numero1, &numero2);

    if( numero1 >= numero2 ) {
        for( int i = numero2; i <= numero1; i++ ) {
            if( i % 13 != 0 )
                total += i;
        }
    }

    else {
        for( int i = numero1; i <= numero2; i++ ) {
            if( i % 13 != 0 )
                total += i;
        }
    }

    printf("%d\n", total);

    return 0;
}