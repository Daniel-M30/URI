#include <stdio.h>

int main() {
    int numero1, numero2, aux = 0, count = 0;

    scanf("%d", &numero1);

    do {
        scanf("%d", &numero2);
    } while( numero1 >= numero2 );

    while( aux <= numero2 ) {
        aux += numero1 + count;
        count++;
    }

    printf("%d\n", count);

    return 0;
}