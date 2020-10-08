#include <stdio.h>

int main( void ) {
  int n, i, j;
  char simbolo;
  int pos = 0;
  scanf( "%d", &n );

  for ( i = 0; i < n; i++ ) {
    for ( j = 0; j < n; j++ ){
        simbolo = ( pos % 2 == 0 ) ? 'o' : '+';
        printf( "%c ", simbolo );
        pos++;
    }
    pos = (i % 2 == 0)?1:0;
    printf( "\n" );
  }

  return 0;
}