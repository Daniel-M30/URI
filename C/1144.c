#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);

    for( int i = 1; i <= numero; i++ ) {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }

    return 0;
}