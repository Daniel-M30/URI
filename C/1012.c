#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main() {
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    double quad, tri, cir, trap, ret;

    tri = (A * C) / 2;
    cir = pow(C, 2) * pi;
    trap = ((A + B) * C) / 2;
    quad = pow(B, 2);
    ret = A * B;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}