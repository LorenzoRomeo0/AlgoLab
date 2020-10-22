#include <stdio.h>
#define N 5

void split_time( long int tot_sec, int *h, int *m, int *s ) {
  *h = tot_sec / 3600;
  tot_sec %= 3600;
  *m = tot_sec / 60;
  *s = tot_sec % 60;
}

int main( void ) {
  int time = 3800, h=0, m=0, s=0;
  
  split_time( time, &h , &m , &s );
  printf( "h = %d, m = %d, s = %d\n", h, m, s );
  
  return 0;
}
/*
1) Sono variabili di tipo puntatore. Servono a contenere l'indirizzo dove viene memorizzato il contenuto della variabile.
    Ci servono per poter modificare direttamente i valori delle variabili, senza doverne restituirne di nuovi.
2) Sono due variabili differenti, che puntano alla stessa area di memoria. 4, 12




*/

