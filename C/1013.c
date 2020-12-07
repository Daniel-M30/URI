#include <stdio.h>

int absoluto( int, int );

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int maiorAB = (a + b + absoluto(a, b)) / 2;
    int maiorC = ( maiorAB + c + absoluto(maiorAB, c)) / 2;

    printf("%d eh o maior\n", maiorC);

    return 0;
}

int absoluto( int a, int b ) {
    int x = a - b;
    if ( x >= 0 )
        return x;
    
    else
        return -x;
}