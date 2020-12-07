#include <stdio.h>

int main() {
    int casos, qtd, qRato = 0, qCoelho = 0, qSapo = 0, total = 0;
    char animal, porcento = '%';
    double pRato, pCoelho, pSapo;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        scanf("%d %c", &qtd, &animal);

        switch(animal) {
            case 'R':
                qRato += qtd;
                total += qtd;
                break;

            case 'C':
                qCoelho += qtd;
                total += qtd;
                break;

            default:
                qSapo += qtd;
                total += qtd;
        }
    }

    pRato = ((double)qRato / total) * 100;
    pCoelho = ((double)qCoelho / total) * 100;
    pSapo = ((double)qSapo / total) * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", qCoelho);
    printf("Total de ratos: %d\n", qRato);
    printf("Total de sapos: %d\n", qSapo);
    printf("Percentual de coelhos: %.2lf %c\n", pCoelho, porcento);
    printf("Percentual de ratos: %.2lf %c\n", pRato, porcento);
    printf("Percentual de sapos: %.2lf %c\n", pSapo, porcento);

    return 0;
}