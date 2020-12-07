#include <stdio.h>
#include <string.h>

int main() {
    int nLesmas, velocidade, maior;

    while( scanf("%d", &nLesmas) != EOF ) {
        maior = 0;
        for( int i = 0; i < nLesmas; i++ ) {
            scanf("%d", &velocidade);

            if( velocidade > maior )
                maior = velocidade;
        }

        if( maior < 10 )
            printf("1\n");

        else if( maior >= 10 && maior < 20 )
            printf("2\n");

        else
            printf("3\n");
    }
     
    return 0;
}