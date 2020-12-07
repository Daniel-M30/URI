#include <stdio.h>

int main() {
    int dI, hI, mI, sI, dF, hF, mF, sF;
    char diaI[4], diaF[4], doisP1, doisP2;

    scanf("%s %d", diaI, &dI);
    scanf("%d %c %d %c %d", &hI, &doisP1, &mI, &doisP2, &sI);

    scanf("%s %d", diaF, &dF);
    scanf("%d %c %d %c %d", &hF, &doisP1, &mF, &doisP2, &sF);

    if( sF < sI ) {
        sF += 60;
        mF--;
    }

    if( mF < mI ) {
        mF += 60;
        hF--;
    }

    if( hF < hI ) {
        hF += 24;
        dF--;
    }

    printf("%d dia(s)\n", dF - dI);
    printf("%d hora(s)\n", hF - hI);
    printf("%d minuto(s)\n", mF - mI);
    printf("%d segundo(s)\n", sF - sI);
 
    return 0;
}