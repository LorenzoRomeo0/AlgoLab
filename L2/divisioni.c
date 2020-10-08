#include <stdio.h>
#define N 10

int main(void) {
    int b, n, i = 0;
    int c[N] = {0}; 
    printf("Inserisci il numero e la base:\n");
    scanf( "%d %d", &n, &b );
    
    do c[i++] = n % b;
        while ( ( n /= b ) > 0 );

    printf("Conversione:\n");
    while ( i > 0 )
        printf( "%d", c[--i] ); 
     
    printf( "\n" ); 
    
    return 0;
}

/*
1) b = base, n = numero
2) c = conversione
3) conversioneinbasex
5) Esegue la conversione di un numero in una base
6) Sono le centinaia del numero

*/

