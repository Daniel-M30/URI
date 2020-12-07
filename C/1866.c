#include <stdio.h>

int main() {
    int casos, somatorio, resultado;

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        scanf("%d", &somatorio);

        if( somatorio % 2 == 0 )
            resultado = 0;

        else
            resultado = 1;

        printf("%d\n", resultado);
    }
  
    return 0;
}