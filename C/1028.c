#include <stdio.h>

int main() {
    int casos, cartas1, cartas2, maximoDivisor;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        scanf("%d %d", &cartas1, &cartas2);

        while( cartas2 != 0 ) {
            maximoDivisor = cartas1 % cartas2;
            cartas1 = cartas2;
            cartas2 = maximoDivisor;
        }

        printf("%d\n", cartas1);
    }
  
    return 0;
}