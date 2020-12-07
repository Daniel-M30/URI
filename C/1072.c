#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade, count = 0;

    scanf("%d", &quantidade);

    int* vetor = malloc( quantidade * sizeof(int));

    for( int i = 0; i < quantidade; i++ ) {
        scanf("%d", &vetor[i]);

        if( vetor[i] >= 10 && vetor[i] <= 20 )
            count++;
    }

    printf("%d in\n", count);
    printf("%d out\n", quantidade - count);

    return 0;
}