#include <stdio.h>
#include <string.h>

int main() {
    int casos, leds, led;
    char numero[150];

    scanf("%d", &casos);

    for( int i = 0; i < casos; i++ ) {
        scanf("%s", numero);
        leds = 0;        
        
        for( int i = 0; i < strlen(numero); i++ ) {
            led = numero[i] - 48;

            if( led == 1 )
                leds += 2;

            else if( led == 7 )
                leds += 3;

            else if( led == 4 )
                leds += 4;

            else if( led == 2 || led == 3 || led == 5 )
                leds += 5;

            else if( led == 0 || led == 6 || led == 9 )
                leds += 6;

            else
                leds += 7;
        }

        printf("%d leds\n", leds);
    }

    return 0;
}