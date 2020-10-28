#include<stdio.h>
#include<stdlib.h>
char **creaMatrice( int n ){
  char **m;
  int r, c;

  m = malloc( n * sizeof( char * ) );
  for ( r = 0; r < n; r++ ) {
    m[r] = malloc( n * sizeof( char ) );
    //*(m+r) = malloc( n * sizeof( char ) );
  }

  for ( r = 0; r < n; r++ )
    for ( c = 0; c < n; c++ )
      *(*(m+r)+c) = '.';
      //m[r][c] = '.';
  return m;
}

int main(){
    int dim = 5;
    char **matrice = creaMatrice(dim);

    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            printf("%c", matrice[i][j]);
        }
        printf("\n");
    }


}
/*
1) Alloca l'area della matrice di caratteri 
2) Alloca l'area di memoria per ogni riga dell'array.
5) Restituisce il base address della matrice.

*/