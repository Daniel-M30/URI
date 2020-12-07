#include <stdio.h>

int main() {
    int qtd, somaDivisores, numero;

    scanf("%d", &qtd);

    for( int i = 0; i < qtd; i++ ) {
        somaDivisores = 0;
        scanf("%d", &numero);
        
        for( int j = 1; j < numero; j++ ) {
            if( numero % j == 0 )
                somaDivisores += j;
        }

        if( somaDivisores == numero )
            printf("%d eh perfeito\n", numero);

        else
            printf("%d nao eh perfeito\n", numero);
    }

    return 0;
}