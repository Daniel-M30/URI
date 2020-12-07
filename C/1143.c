#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);

    for( int i = 1; i <= numero; i++ )
        printf("%d %u %u\n", i, i * i, i * i * i);

    return 0;
}