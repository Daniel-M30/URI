#include <stdio.h>

int main() {
    int numero;
    unsigned long long int fatorial = 1;

    scanf("%d", &numero);

    for( int i = numero; i > 1; i-- )
        fatorial *= i;

    printf("%llu\n", fatorial);

    return 0;
}