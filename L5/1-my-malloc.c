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
/*
1) Serve a controllare se il sistema operatiho ha allocato con successo la memoria richiesta.
2) Indica che il programma è terminato per un errore
3) Termina il programma


*/
