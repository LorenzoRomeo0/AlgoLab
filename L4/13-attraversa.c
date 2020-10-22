#include <stdio.h>

#define LENGTH 100

int main( void) {

    int a[LENGTH];
    int *p;

    for( p = a; p < a + LENGTH; p++ ) {
        scanf( "%d", p );
        if ( *p == 0 )
            break;
    }

    while ( --p >= a )
        printf( "%d ", *p );

    printf( "\n" );
    return 0;
}
/*
1) è una variabile di tipo puntatore.
2) Perché essendo la variabile già di tipo puntatore, non abbiamo bisogno di referenziare il suo valore.
3) 5 4 3 2 1
4) Serve a leggere il numero
5) Posiziona il numero il piu' infondo all'array possibile.
6) p è un'array di dimensione variabile.
*/