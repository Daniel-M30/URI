#include <stdio.h>

int main() {
    int horas, velocidade;

    scanf("%d %d", &horas, &velocidade);

    double total = ( horas * velocidade ) / 12.0;

    printf("%.3lf\n", total);

    return 0;
}   