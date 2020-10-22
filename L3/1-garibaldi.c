#include <stdio.h>

char garibaldi( char a, char b ){
    if ( b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' )
        return a;
    else return b;
}

int main() {
    char c, vocale;

    vocale = getchar();
    getchar();

    while ( ( c = getchar() ) != '.' )
        printf( "%c", garibaldi( vocale, c ) );

    printf( "\n" );
    return 0;
}

/*
1) gurubuldi fu furutu, fu furutu un unu gumbu
2) perende due caratteri. se il secondo parametro è una vocale stampa il primo parametro, altrimenti l'inverso.
3) modifica tutte le vocali di una stringa con una vocale scelta dall'utente

*/