#include <stdio.h>

int main() {
    double nota, media = 0;
    int count = 0;

    while( count != 2 ) {
        scanf("%lf", &nota);

        if( nota >= 0 && nota <= 10 ) {
            media += nota / 2;
            count++;
        }

        else
            printf("nota invalida\n");
    }

    printf("media = %.2lf\n", media);

    return 0;
}