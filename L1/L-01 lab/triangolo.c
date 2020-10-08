#include <stdio.h>

int main( void ) {
  int n, i, j;
  char simbolo;
  int pos = 0;
  scanf( "%d", &n );

  for ( i = 0; i < n; i++ ) {
    for ( j = 0; j < n; j++ ){
        if(j<pos) simbolo = 'o';
        if(j==pos) simbolo = '|';
        if(j>pos) simbolo = '+';
        printf( "%c ", simbolo );
    }
    pos++;
    printf( "\n" );
  }

  return 0;
}