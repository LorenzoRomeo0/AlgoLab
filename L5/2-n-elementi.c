#include <stdlib.h>
#include <stdio.h>

void *my_malloc( size_t n ) {
  void *p;
  p = malloc( n );
  if ( p == NULL ) {
      printf( "Si è verificato un errore durante l'allocazione della memoria.\n" );
      exit( EXIT_FAILURE );
  } 
  
  return p;
}


char *read_n( int *num ) {
  char* a;
  int i;
  scanf( "%d", num );
  
  a = my_malloc( *num * sizeof(char) );
  for ( i = 0; i < *num; i++ ) {
    //scanf( "%d", &a[i] );
    scanf( "%c", (a+i*sizeof(char)) );
  }

  return a;
}


int main(){
    int dimensione = 0;
    char *a = read_n(&dimensione); 
    for(int i=0; i<dimensione; i++){
        printf("%c", a[i]);
    }
}
/*
1)  Legge da tastiera *num interi
3)  Sull'heap
4)  Nell'heap, perché lì è dove vive la nostra area di memoria allocata dinamicamente
5)  Per tenere traccia del valore inserito anche dopo il termine dell'esecuzione della funzione.
6)  Il puntatore all'area di memoria che è stata allocata dinamicamente
7)  Sì. Modifica il contenuto della variabile num e alloca nuova memoria nell'heap



*/