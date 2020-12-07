#include <stdio.h>

int main() {
    int quantidade;

    scanf("%d", &quantidade);

    for( int i = 1; i < quantidade; i++ ) 
        printf("Ho ");
    printf("Ho!\n");

    return 0;
}