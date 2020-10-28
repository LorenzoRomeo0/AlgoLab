#include <stdlib.h>
#include <stdio.h>

#define L 2
#define L0 3

int *read_lin( int *num ) {
  int *a, size = L0, i = 0, n;
  
  a = malloc( size * sizeof(int) );
  while ( 1 ) {
    scanf( "%d", &n );
    
    if ( n == 0 )
      break;

    if ( i >= size  ) {
      size *= 2;
      a = realloc( a, size * sizeof(int) );
    }
    
    a[i++] = n;
  }
  *num = i;
  return a;
}

int main( ) {
  int i;
  int *a = read_lin( &i );

  while ( i-- > 0 )
    printf( "a[%d] = %d\n", i, a[i] ); 
}
/*
1) 9 8 7 6 5 4 3 2 1
2) è grande 7 * sizeof(int)
3) 3 volte
4) Size rappresenta la dimensione totale dell'area allocata, mentre i contiene il numero di elementi inseriti nella memoria.
5) Restituisce il base address del nostro array dinamico
6) Contiene il numero di elementi inseriti nell'array.
7) Permette la creazione di un array dinamico di interi, che abbia una dimensione arbitraria.
8)

*/