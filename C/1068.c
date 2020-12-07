#include <stdio.h>
#include <string.h>

int main() {
    int aberto, fechado;
    char conta[1001];
    while( scanf("%s", conta) != EOF ) {
        aberto = 0, fechado = 0;

        for( int i = 0; i < strlen(conta); i++ ) {
            if( '(' == conta[i] )
                aberto++;

            if( ')' == conta[i] )
                fechado++;

            if( fechado > aberto )
                break;
        }

        if( fechado == aberto )
            printf("correct\n");

        else
            printf("incorrect\n");
    }
    
    return 0;
}