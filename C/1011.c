#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double n1;
    scanf("%lf", &n1);

    double resultado = (4.0/3.0) * PI * pow( n1, 3 );

    printf("VOLUME = %.3lf\n", resultado);

    return 0;
}