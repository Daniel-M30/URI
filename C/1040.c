#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    double media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10;

    printf("Media: %.1lf\n", media);

    if( media >= 7.0 )
        printf("Aluno aprovado.\n");

    else if( media < 5.0 )
        printf("Aluno reprovado.\n");

    else {
        printf("Aluno em exame.\n");
        double exame;
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);

        double newMedia = (media + exame) / 2;

        if( newMedia >= 5.0 )
            printf("Aluno aprovado.\n");

        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n", newMedia);
    }

    return 0;
}