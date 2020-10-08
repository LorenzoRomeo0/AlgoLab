#include<stdio.h>
#include<ctype.h>

int main(){
    int c, f[10] = {0};
    
    printf("Il programma conta quante volte è stato inserito un numero da 1 a 9\n");

    c = getchar();
    while ( c != '.' ) {
        if ( isdigit( c ) ) 
	        f[ c - '0' ]++;
	    c = getchar();
    }
    return 0;
}
/*
1) I caratteri sono numeri interi. Significa tornare indietro nella tabella ASCII di '0' volte rispetto a c.
2) Converte un numero scritto come carattere nella sua corrispondente intera. è la distanza tra 0 e il carattere digitato.
3) Il numero di volte in cui è stato inserito il numero i
4) mappaIntInt
5)

*/