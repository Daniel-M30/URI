#include <stdio.h>

int main() {
    int opcao, alcool = 0,  gasolina = 0, diesel = 0;

    do {
        scanf("%d", &opcao);

        if( opcao != 4 ) {
            switch (opcao) {
            case 1:
                alcool++;
                break;

            case 2:
                gasolina++;
                break;

            case 3:
                diesel++;
                break;

            default:
                continue;
            }
        }
    } while( opcao != 4 );

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}