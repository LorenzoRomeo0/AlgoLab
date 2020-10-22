#include<stdio.h>
#define n 5
  
int main(){
  int quadrato[n][n] = {{0}}, k = 1;
  int i, j, inew, jnew;
  
  i = 0; 
  j = (int)n/2;
  int nn = n * n;
  for(int k = 1; k <= nn; k++ ) {
    quadrato[i][j] = k;
    //inew = ( i == 0 ) ? n - 1 : i - 1;
    if( i == 0 ) inew = n - 1;
    else inew = i - 1;

    
    jnew = ( j == n - 1 ) ? 0 : j + 1;
    if ( quadrato[ inew ][ jnew ] == 0 ) {
      i = inew;
      j = jnew;
    }
    else {
      i++; 
    }
  }
  for(int h = 0; h<n; h++){
    for(int f = 0; f<n; f++){
      printf("%d ", quadrato[h][f]);
    }
    printf("\n");
  }
  return 0;
}

/*
1) n deve essere definita staticamente e inoltre deve essere un numero intero dispari.
2) Viene utilizzata per memorizzare il prossimo numero che deve essere inserito nel quadrato
3) Se sta puntando alla prima riga prende il valore dell'ultima posizione della riga, altrimenti della riga precedente.


*/