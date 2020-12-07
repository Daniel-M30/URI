#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);
    if( numero % 2 == 0 )
        numero++;

    for( int i = 0; i <= 10; i+=2 )
        printf("%d\n", numero + i);

    return 0; 
}