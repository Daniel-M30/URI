#include <stdio.h>
#include <string.h>
#define N 1000

int main() {
    int casos;
    char palavra[N], aux;

    scanf("%d", &casos);
    getchar();

    for( int i = 0; i < casos; i++ ) {
        fgets( palavra, N, stdin );
        palavra[strlen(palavra) - 1] = '\0';

        for( int j = 0; j < strlen(palavra); j++ ) {
            if( (palavra[j] >= 65 && palavra[j] <= 90) || (palavra[j] >= 97 && palavra[j] <= 122) )
                palavra[j] += 3;
        }

        for( int j = 0; j < strlen(palavra) / 2; j++ ) {
            aux = palavra[j];
            palavra[j] = palavra[strlen(palavra) - 1 - j];
            palavra[strlen(palavra) - 1 - j] = aux;
        }

        for( int j = strlen(palavra) / 2; j < strlen(palavra); j++ )
            palavra[j] -= 1;

        printf("%s\n", palavra);
    }

    return 0;
}