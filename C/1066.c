#include <stdio.h>

int main() {
    int numero, numPar = 0, numImpar = 0, numPos = 0, numNeg = 0;

    for( int i = 0; i < 5; i++ ) {
        scanf("%d", &numero);

        if( numero > 0 )
            numPos++;

        if( numero < 0 )
            numNeg++;

        if( numero % 2 == 0 )
            numPar++;

        else
            numImpar++;
    }

    printf("%d valor(es) par(es)\n", numPar);
    printf("%d valor(es) impar(es)\n", numImpar);
    printf("%d valor(es) positivo(s)\n", numPos);
    printf("%d valor(es) negativo(s)\n", numNeg);
    
    return 0;
}