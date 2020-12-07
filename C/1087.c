#include <stdio.h>

int diagonalPrincipal( int dL, int dC, int pL, int pC ) {
    int diagonalC = ++dC;
    int diagonalL = ++dL;
        
    while( diagonalC != 9 && diagonalL != 9 ) {
        if( diagonalC == pC && diagonalL == pL )
            return 1;

        diagonalL++;
        diagonalC++;
    }

    diagonalC = --dC;
    diagonalL = --dL;
        
    while( diagonalC != 0 && diagonalL != 0 ) {
        if( diagonalC == pC && diagonalL == pL )
            return 1;

        diagonalL--;
        diagonalC--;
    }

    return 0;
}

int diagonalSecundaria( int dL, int dC, int pL, int pC ) {
    int diagonalL = --dL;
    int diagonalC = ++dC;

    while( diagonalL != 0 && diagonalC != 9 ) {
        if( diagonalC == pC && diagonalL == pL )
            return 1;

        diagonalL--;
        diagonalC++;
    }

    diagonalC = --dC;
    diagonalL = ++dL;

    while( diagonalL != 9 && diagonalC != 0 ) {
        if( diagonalC == pC && diagonalL == pL )
            return 1;

        diagonalL++;
        diagonalC--;
    }

    return 0;
}

int main() {
    int damaL, damaC, pecaL, pecaC, movimentos;

    scanf("%d %d %d %d", &damaL, &damaC, &pecaL, &pecaC);

    while( damaL != 0 || damaC != 0 || pecaC != 0 || pecaL != 0 ) {
        if( damaL == pecaL && damaC == pecaC )
            printf("0\n");

        else if( damaL == pecaL || damaC == pecaC )
            printf("1\n");

        else if( diagonalPrincipal(damaL, damaC, pecaL, pecaC) ) {
            printf("1\n");
        }

        else if( diagonalSecundaria(damaL, damaC, pecaL, pecaC) ) {
            printf("1\n");
        }

        else 
            printf("2\n");

        scanf("%d %d %d %d", &damaL, &damaC, &pecaL, &pecaC);
    }
  
    return 0;
}