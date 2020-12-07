#include <stdio.h>

int main() {
    int casos, pA, pB, anos;
    double cA, cB;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        anos = 0;

        scanf("%d %d %lf %lf", &pA, &pB, &cA, &cB);

        while( pA <= pB ) {
            pA += (pA / 100.00) * cA;
            pB += (pB / 100.00) * cB;

            anos++;

            if( anos > 100 )
                break;
        }

        if( anos > 100 )
            printf("Mais de 1 seculo.\n");

        else 
            printf("%d anos.\n", anos);
    }

    return 0;
}