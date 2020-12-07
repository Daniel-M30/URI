#include <stdio.h>

int main() {
    int opcao = 0, golsG, golsI, vitoriaG = 0, vitoriaI = 0, jogos = 0;

    do {
        scanf("%d %d", &golsI, &golsG);

        if( golsG > golsI ) {
            vitoriaG++;
            jogos++;
        }

        else if( golsI > golsG ) {
            vitoriaI++;
            jogos++;
        }

        else
            jogos++;

        if( opcao != 2 ) {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        }
    } while( opcao != 2 );

    printf("%d grenais\n", jogos);
    printf("Inter:%d\n", vitoriaI);
    printf("Gremio:%d\n", vitoriaG);
    printf("Empates:%d\n", jogos - (vitoriaG + vitoriaI));

    if( vitoriaI > vitoriaG )
        printf("Inter venceu mais\n");

    else if( vitoriaG > vitoriaI )
        printf("Gremio venceu mais\n");

    else
        printf("Nao houve vencedor\n");

    return 0;
}