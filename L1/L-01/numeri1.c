#include <stdio.h>

int main( void ) {
  int n, x, cont = 0;
  printf( "Inserisci una serie di numeri: " );
  
  do {
    scanf( "%d", &n );
    x = x + n;
    cont ++;
  } while ( n != 0 );

  printf( "%d\n", x/(cont-1) );
  return 0;

}