#include <stdio.h>

int main() {
    int h1, m1, h2, m2, minutos;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    while( h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0 ) {
        minutos = 0;

        if( h2 <= h1 && m1 >= m2 )
            h2 += 24;

        minutos = (h2 * 60 + m2) - (h1 * 60 + m1);

        printf("%d\n", minutos);

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }

    return 0;
}