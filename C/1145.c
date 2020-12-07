#include <stdio.h>

int main() {
    int numero, quebra, count = 1;

    scanf("%d %d", &quebra, &numero);

    for( int i = 1; i <= numero; i++ ) {
        if( count == quebra ) {
            printf("%d\n", i);
            count = 1;
        }

        else {
            printf("%d ", i);
            count++;
        }
    }

    return 0;
}