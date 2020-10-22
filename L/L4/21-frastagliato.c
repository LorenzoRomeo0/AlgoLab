#include <stdio.h>
#include <string.h>

typedef char* String;

void f( String a[], int n, int i ) {
  if ( i < 0 || i > n-1 )
    return;

    /*String p = a[i]; // 
    a[i] = a[n-1];
    a[n-1] = p;*/
  String p;
  strcpy( p, a[i] );
  strcpy( a[i], a[n-1] );
  strcpy( a[n-1], p );
  return;
}

int main( int argc, String *argv ) {
  String *q;
  int i;

  scanf( "%d", &i ); 
  f( argv + 1, argc - 1, i );

  for ( q = argv + 1; q < argv + argc; q++  )  
    printf( "%s ", *q );
  printf( "\n" );
  return 0;
}

/*
1) è un'array di caratteri.
2) p vien usata come variabile per mantenere il valore mentre si scambiano le due variabili
3) perché argv[0] è il nome del programma
4) perché argv è un puntatore a un'array di stringhe.
5) zero uno due ultimo quattro tre
6) ScambiaConUltimo
7) si
8) scambia un elemento dei parametri inseriti da linea di comando con l'ultimo.
*/
