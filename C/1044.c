#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if( num1 > num2 ) {
        int aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if( num2 % num1 == 0 )
        printf("Sao Multiplos\n");

    else
        printf("Nao sao Multiplos\n");

    return 0;
}