#include <stdio.h>

int main() {
    int hI, mI, hF, mF;

    scanf("%d %d %d %d", &hI, &mI, &hF, &mF);

    if( hI >= hF && mI >= mF )
        hF += 24;

    if( mI > mF ) {
        hF--;
        mF += 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hF - hI, mF - mI);

    return 0;
}