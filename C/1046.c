#include <stdio.h>

int main() {
    int horaI, horaF, duracao = 0;

    scanf("%d %d", &horaI, &horaF);

    do {
        horaI++;
        if( horaI >= 24 )
            horaI -= 24;
        duracao++;
    } while( horaI != horaF );

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}