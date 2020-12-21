#include<stdio.h>
#include<stdlib.h>

/* Restituisce la dimensione del lato del cristallo all'istante t. */
int latoCristallo( int t ){
    if(t==0) return 1;
    return latoCristallo(t-1)*2+1;
}

/* Restituisce una matrice quadrata di lato n allocata dinamicamente.
    Ed inizializzata a NULL
*/
char **creaMatrice( int n ){
    printf("crea\n");
    char **matrice = malloc(sizeof(char*)*n);
    for(int i=0; i<n;i++) matrice[i]=malloc(sizeof(char)*n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n;j++)
            matrice[i][j]='.';
    return matrice;
}

/* Stampa la matrice quadrata m che ha lato n. */
void stampaMatrice( char **m, int n ){
    printf("stampa\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++)
            printf("%c ",m[i][j]);
        printf("\n");
    }

}

/*  Costruisce nella sottomatrice un cristallo di lato l
    nella sottomatrice r0, c0 della matrice quadrata m
    composta dagli elementi M[r][c] tc:
    r0 ≤ r < r0 +l  e  c0 ≤ c < c0 +l
*///METTERE A POSTO
void crist( char **m, int r0, int c0, int l ){
    if(l>1){
        m[r0/2][c0/2] = '*';
        crist(m,r0/2+1,c0/2+1, l-1);
        crist(m,r0/2-1, c0/2-1, l-1);
        crist(m,r0/2-1, c0/2+1, l-1);
        crist(m,r0/2+1, c0/2-1, l-1);
    }
}

void cristallo(char **m, int l){
    crist(m, l, l, l);
}

int main(){
    char **matrix;
    int t, lato;
    scanf( "%d", &t );
    
    if( t >= 0 ){
        lato = latoCristallo( t ); // dimensione della matrice
        matrix = creaMatrice( lato ); // crea matrice per rappresentare il cristallo
        cristallo( matrix, lato ); // costruisce il cristallo avente lato assegnato  
        stampaMatrice( matrix, lato ); // stampa la matrice
    }

    printf("%d\n", latoCristallo(1));
    printf("%d\n", latoCristallo(2));
    printf("%d\n", latoCristallo(3));
    printf("%d\n", latoCristallo(5));
    
    char** matrice = creaMatrice(5);
    stampaMatrice(matrice, 5);

    return 0;
}