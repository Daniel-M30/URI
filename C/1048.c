#include <stdio.h>

int main() {
    double salario, newSalario, reajuste;
    int percentual;

    scanf("%lf", &salario);

    if( salario >= 0 && salario <= 400 ) {
        reajuste = salario * 0.15;
        newSalario = salario + reajuste;
        percentual = 15;
    }

    else if( salario > 400 && salario <= 800 ) {
        reajuste = salario * 0.12;
        newSalario = salario + reajuste;
        percentual = 12;
    }

    else if( salario > 800 && salario <= 1200 ) {
        reajuste = salario * 0.10;
        newSalario = salario + reajuste;
        percentual = 10;
    }

    else if( salario > 1200 && salario <= 2000 ) {
        reajuste = salario * 0.07;
        newSalario = salario + reajuste;
        percentual = 7;
    }

    else {
        reajuste = salario * 0.04;
        newSalario = salario + reajuste;
        percentual = 4;
    }
    char porcento = '%';

    printf("Novo salario: %.2lf\n", newSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %c\n", percentual, porcento);

    return 0;
}