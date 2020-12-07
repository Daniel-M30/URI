#include <stdio.h>
#include <stdlib.h>

int main() {
    int fibo;

    scanf("%d", &fibo);

    if( fibo == 1 )
        printf("0\n");

    else if( fibo == 2 )
        printf("0 1\n");

    else {
        printf("0 1");
        unsigned long long int* fibonacci = malloc( fibo * sizeof(unsigned long long int) );
        fibonacci[0] = 0;
        fibonacci[1] = 1;

        for( int i = 2; i < fibo; i++ ) {
            fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
            printf(" %llu", fibonacci[i]);
        }

        printf("\n");
        free(fibonacci);
    }

    return 0;
}