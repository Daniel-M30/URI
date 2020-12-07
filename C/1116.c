#include <stdio.h>

int main() {
    int casos, numero1, numero2;
    double resultado;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        scanf("%d %d", &numero1, &numero2);

        if( numero2 == 0 )
            printf("divisao impossivel\n");

        else {
            resultado = (double)numero1 / numero2;
            printf("%.1lf\n", resultado);
        }
    }

    return 0;
}