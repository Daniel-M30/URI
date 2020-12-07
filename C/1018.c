#include <stdio.h>


int main() {
    int a;

    scanf("%d", &a);

    int aux = a;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    while( a >= 100 ) {
        n100++;
        a -= 100;
    }

    while( a >= 50 ) {
        n50++;
        a -= 50;
    }

    while( a >= 20 ) {
        n20++;
        a -= 20;
    }

    while( a >= 10 ) {
        n10++;
        a -= 10;
    }

    while( a >= 5 ) {
        n5++;
        a -= 5;
    }

    while( a >= 2 ) {
        n2++;
        a -= 2;
    }

    while( a >= 1 ) {
        n1++;
        a -= 1;
    }

    printf("%d\n", aux);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}