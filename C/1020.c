#include <stdio.h>

int main() {
    int dias;

    scanf("%d", &dias);

    int a = 0, m = 0, d = 0;

    while( dias >= 365 ) {
        a++;
        dias -= 365;
    }

    while( dias >= 30 ) {
        m++;
        dias -= 30;
    }

    while( dias >= 1 ) {
        d++;
        dias--;
    }

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}   