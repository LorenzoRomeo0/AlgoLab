#include <stdio.h>
#include <ctype.h>

int main( void ) {
  char c;

  while ( ( c = getchar() ) != '.' ) {
    if ( isalpha( c ) )
      putchar( toupper( c ) );
    else
      putchar( c );
  }

  printf ( "\n" );
  return 0;
}


/*
1) Il programma si aspetta un insieme di caratteri seguiti da un punto.
2) Inserire un punto.
3) Dopo ogni acapo vengono stampati i caratteri inseriti in maiuscolo.
4) Serve per controllare se il carattere inserito è una lettera dell'alfabeto.
5) ???
6) No. Finché non sforiamo la memoria dedicata al processo.
7) Il programma legge da standard input una frase conclusa da un punto. Stampa la frase in maiuscolo.

*/