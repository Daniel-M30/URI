#include <stdio.h>

int main() {
    double nota1, nota2;
    int opcao = 1;

    do {
        do {
            scanf("%lf", &nota1);

            if( nota1 < 0 || nota1 > 10 )
                printf("nota invalida\n");
        } while( nota1 < 0 || nota1 > 10 );

        do {
            scanf("%lf", &nota2);

            if( nota2 < 0 || nota2 > 10 )
                printf("nota invalida\n");
        } while( nota2 < 0 || nota2 > 10 );

        printf("media = %.2lf\n", (nota1 + nota2) / 2);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while( opcao != 1 && opcao != 2 );
    } while( opcao != 2 );

    return 0;
}