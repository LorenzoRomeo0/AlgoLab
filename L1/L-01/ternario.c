#include <stdio.h>

int main( void ) {
  int a, b;

  printf( "Inserisci due numeri interi: " );
  scanf( "%d%d", &a, &b );
  printf( "Il maggiore tra %d e %d e` %d.\n", a, b, a > b ? a : b );

  return 0;
}

/*
 Il programma chiede di inserire due numeri e ne stampa il maggiore.
*/