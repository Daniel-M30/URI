#include <stdio.h>

int main() {
    int inteiro = 5;
    for( double i = 0; i <= 2; i += 0.2 ) {
        for( double j = 1; j <= 3; j++ ) {
            if( inteiro % 5 == 0 )
                printf("I=%.0lf J=%.0lf\n", i, i + j);
            
            else
                printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
        inteiro++;
    }

    return 0;
}