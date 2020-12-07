#include <stdio.h>

int main() {
    int qtd;

    scanf("%d", &qtd);

    for( int i = 1; i <= qtd; i++ ) {
        for( int j = ((i - 1) * 4) + 1; j <= i * 4; j++ ) {
            if( j % 4 == 0 )
                printf("PUM\n");

            else
                printf("%d ", j);
        } 
    }

    return 0;
}