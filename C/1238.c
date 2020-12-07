#include <stdio.h>
#include <string.h>

int main() {
    int casos, j, k, l;
    char cadeia1[51], cadeia2[51], cadeia3[101];

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        scanf("%s %s", cadeia1, cadeia2);
        j = 0, k = 0, l = 0;

        while( j != strlen(cadeia1) || k != strlen(cadeia2) ) {
            if( j < strlen(cadeia1) ) {
                cadeia3[l] = cadeia1[j];
                j++;
                l++;
            }

            if( k < strlen(cadeia2) ) {
                cadeia3[l] = cadeia2[k];
                k++;
                l++;
            }
        }
        cadeia3[l] = '\0';
        printf("%s\n", cadeia3);
    }

    return 0;
}