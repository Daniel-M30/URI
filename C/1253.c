#include <stdio.h>
#include <string.h>
#define N 51

int main() {
    int casos, posicao;
    char palavra[N];

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        getchar();

        scanf("%s", palavra);
        scanf("%d", &posicao);

        for( int j = 0; j < strlen(palavra); j++ ) {
            palavra[j] -= posicao;

            if( palavra[j] < 65 )
                palavra[j] += 26;
        }

        printf("%s\n", palavra);
    }
  
    return 0;
}