#include <stdio.h>

int main() {
    int casos, numero, qtd, soma;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        soma = 0;
        scanf("%d %d", &numero, &qtd);

        if( numero % 2 == 0 )
            numero++;

        for( int j = numero; j < numero + (qtd * 2); j += 2 ) 
            soma += j;

        printf("%d\n", soma);
    }

    return 0;
}