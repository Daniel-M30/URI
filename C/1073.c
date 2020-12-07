#include <stdio.h>

int main() {
    int numero;
    unsigned long int valor;

    scanf("%d", &numero);

    for( int i = 2; i <= numero; i+=2 ) {
        valor = i * i;
        printf("%d^2 = %li\n", i, valor);
    }

    return 0; 
}