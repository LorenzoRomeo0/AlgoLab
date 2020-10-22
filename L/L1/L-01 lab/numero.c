#include <stdio.h>
#define MAX 1000



//RICERCA DICOTOMICA
int main( void ) {
  int min = 0, max = MAX, n;
  char risposta;

  for ( ; ; ) {
    n = min + ( max - min ) / 2;
    printf( "Il numero e` %d? ", n );
    scanf( "%c ", &risposta );
    switch ( risposta ) {
      case '<': max = n - 1; break;
      case '>': min = n + 1; break;
      case '=': return 0;
    }
    /* printf( "max = %d, min = %d\n", max, min ); */
  }

  return 0;
}

/*
1) L'algoritmo prende in considerazione la metà dei numeri possibili. Se la risposta è > analizza la metà superiore,
e così via finché non trova il numero.
2) Il programma prendeerebbe in input lo spazio lasciato dal printf della riga precedente.
3) Si aspetterebbe uno spazio dopo il carattere da leggere. Legge caratteri finché non si inserisce
lo spazio.
4) Lo scanf serve per filtrare il contenuto del buffer.



*/