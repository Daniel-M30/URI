#include <stdio.h>

int main() {
    int qtd;
    double nota1, nota2, nota3, media;

    scanf("%d", &qtd);

    for( int i = 0; i < qtd; i++ ) {
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3 );

        media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
        printf("%.1lf\n", media);
    }

    return 0;
}