#include <stdio.h>

int main() {
    int x;
    double y;

    scanf("%d %lf", &x, &y);

    double media = x / y;

    printf("%.3lf km/l\n", media);

    return 0;
}