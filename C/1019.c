#include <stdio.h>

int main() {
    int segs;

    scanf("%d", &segs);

    int h = 0, m = 0, s = 0;

    while( segs >= 3600 ) {
        h++;
        segs -= 3600;
    }

    while( segs >= 60 ) {
        m++;
        segs -= 60;
    }

    while( segs >= 1 ) {
        s++;
        segs--;
    }

    printf("%d:%d:%d\n", h, m ,s);

    return 0;
}   