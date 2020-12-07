#include <stdio.h>

int main() {
    int numero1, numero2;

    scanf("%d %d", &numero1, &numero2);

    if( numero1 >= numero2 ) {
        for( int i = numero2 + 1; i < numero1; i++ ) {
            if( i % 5 == 2 || i % 5 == 3 )
                printf("%d\n", i);
        }
    }

    else {
        for( int i = numero1 + 1; i < numero2; i++ ) {
            if( i % 5 == 2 || i % 5 == 3 )
                printf("%d\n", i);
        }
    }

    return 0;
}