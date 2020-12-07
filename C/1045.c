#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if( a + b <= c || a + c <= b || b + c <= a )
        printf("NAO FORMA TRIANGULO\n");

    else {
        if( (pow(a, 2) == pow(c, 2) + pow(b, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2)) || (pow(b, 2) == pow(c, 2) + pow(a, 2)) )
            printf("TRIANGULO RETANGULO\n");

        else if( (pow(a, 2) > pow(c, 2) + pow(b, 2)) || (pow(c, 2) > pow(a, 2) + pow(b, 2)) || (pow(b, 2) > pow(c, 2) + pow(a, 2)) )
            printf("TRIANGULO OBTUSANGULO\n");

        else
            printf("TRIANGULO ACUTANGULO\n");

        if( a == b && b == c )
            printf("TRIANGULO EQUILATERO\n");

        if( (a == b && b != c) || (b == c && c != a) || (c == a && a != b) )
            printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}