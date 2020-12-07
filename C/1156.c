#include <stdio.h>
#include <math.h>

int main() {
    double soma = 0;

    for( double i = 1; i <= 39; i += 2 )
        soma += i / pow(2, ((i + 1) / 2) - 1);
    
    printf("%.2lf\n", soma);

    return 0;
}