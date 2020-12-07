#include <stdio.h>

int main() {
    double valor;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;

    scanf("%lf", &valor);

    while( valor >= 100 ) {
        valor -= 100;
        n100++;
    }

    while( valor >= 50 ) {
        valor -= 50;
        n50++;
    }

    while( valor >= 20 ) {
        valor -= 20;
        n20++;
    }

    while( valor >= 10 ) {
        valor -= 10;
        n10++;
    }

    while( valor >= 5 ) {
        valor -= 5;
        n5++;
    }

    while( valor >= 2 ) {
        valor -= 2;
        n2++;
    }

    while( valor >= 1 ) {
        valor -= 1;
        n1++;
    }

    while( valor >= 0.50 ) {
        valor -= 0.50;
        m50++;
    }

    while( valor >= 0.25 ) {
        valor -= 0.25;
        m25++;
    }

    while( valor >= 0.10 ) {
        valor -= 0.10;
        m10++;
    }

    while( valor >= 0.05 ) {
        valor -= 0.05;
        m5++;
    }

    while( valor >= 0.01 ) {
        valor -= 0.01;
        m1++;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}