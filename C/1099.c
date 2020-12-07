#include <stdio.h>

int main() {
    int casos, numero1, numero2, total;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        total = 0;
        scanf("%d %d", &numero1, &numero2);

        if( numero1 >= numero2 ) {
            for( int i = numero2 + 1; i < numero1; i++ ) {
                if( i % 2 != 0 )
                    total += i;
            }
        }

        else {
            for( int i = numero1 + 1; i < numero2; i++ ) {
                if( i % 2 != 0 )
                    total += i;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}