/* Programma che riceve in input una chiave numerica k (compresa tra 0 e 26), 
seguita da un messaggio, e stampa quest'ultimo in codice usando 
il cifrario di Cesare con chiave k.  */

#include <stdio.h>
#include <ctype.h>

int main( void ) {

  int k;
  char c;

  scanf( "%d ", &k );

  while ( ( c = getchar() ) != '.' ) {

    if ( isalpha( c ) )
      //if (isupper( c ) )
      if (c>='A' && c<='Z')
        putchar( 'A' + ( c - 'A' + k ) % 26 );
      else
        putchar( 'a' + ( c - 'a' + k ) % 26 );

    else
      putchar( c );
  }

  printf ( "\n" );
  return 0;

}
/*
1)????
2) Vengono stampati così come sono. Perché il carattere prima di esser cifrato viene filtrato dall' isalpha
3) La porzione tra le righe 18 - 21
5) ??
6) Serve a far "ricominciare" l'alfabeto una volta superata la z
8) I caratteri del messaggio vengono salvati nalle variabile char c. Man mano vengono salvati nel buffer di stin e poi rilasciati nel buffer di stdout

*/
