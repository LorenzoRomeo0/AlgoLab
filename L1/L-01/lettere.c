#include <stdio.h>
#include <ctype.h>

int main (void) {

    char c;

    printf ("Inserisci un carattere:");
    scanf ("%c",&c);

    if(!isalpha(c))
        printf ("%c non e' una lettera dell' alfabeto italiano \n" ,c );
    else{
        switch (tolower(c)){
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf ( "%c e' una vocale dell' alfabeto italiano \n" , c );
                break;

            case 'x': case 'y': case 'w': case 'j': case 'k':
                printf ( "%c non e' una lettera dell' alfabeto italiano \n" , c );
                break;

            default:
                printf ( "%c e' una consonante dell' alfabeto italiano \n" , c );
                break;
        }
    }
    return 0;
}

/*
1) Un carattere char
2) Serve per indicare al compilatore che deve essere usata la libreria "ctype.h"
3)  a- "a e ‘ una vocale dell ’ alfabeto italiano"
    b- "b e ‘ una consonante dell ’ alfabeto italiano"
    y- "y non e ‘ una lettera dell ’ alfabeto italiano"
4) "n non è una lettera dell'alfabeto italiano"
5) ". non è una lettera dell'alfabeto italiano"
6) Funzione che restituisce true se l'input è una lettera dell'alfabeto
7) Il programma legge da standard input una lettera. A questo punto decide e comunica, se è una lettera dell'alfabeto italiano,
    se è una vocale o una consonante.

*/