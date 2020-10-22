#include <stdio.h>

int main( void ) {
  int n, x = 0;
  printf( "Inserisci una serie di numeri: " );
  
  do {
    scanf( "%d", &n );
    x = x + n;
  } while ( n != 0 );

  printf( "%d\n", x );
  return 0;

}

/*
1) Si aspetta una serie  di numeri, inseriti tra un'acapo e l'altro
2) Deve essere inserito uno zero
3) Rappresenta la variabile che contiene il risultato della somma
4) //////
5) Il programma si aspetta una serie di numeri inseriti tramite standard input. Di questi calcola la
somma, e quando viene inserito uno zero termina il calcolo e stampa il risultato. 
*/