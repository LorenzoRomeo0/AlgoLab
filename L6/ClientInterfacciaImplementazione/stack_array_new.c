#include<stdio.h>
#include "item.h"

typedef int Item; //Non funziona, e non ho capito come si implementa.

#define N 100
Item array[N] = {0};
Item postop = 0;
Item empty = 1;

/* svuota la pila */
void make_empty( void ){
    postop = 0;
    empty = 1;
}

/* restituisce 1 se la pila e' vuota, 0 altrimenti */
Item is_empty( void ){
    return empty;
}

/* se la pila non e' vuota, restituisce il top de1la pila; 
altrimenti esce con messaggio di errore. */
Item top( void ){
    if(!empty) return array[postop-1];
    else perror("Pila vuota.\n");
}

/* se la pila non e' vuota, restituisce il top della pila; 
altrimenti esce con messaggio di errore. */
Item pop( void ){
    if(!empty){
        if(postop-1==0) empty = 1;
        return array[--postop];
    }else perror("Pila vuota.\n");
}

/* se c'e' spazio, aggiunge n alla pila; 
altrimenti esce con messaggio d'errore. */
void push( Item n ){
    if(postop+1 < 100){
        array[postop++] = n;
        if(empty) empty = 0;
    }
    else perror("Pila vuota.\n");
}

/* stampa il contenuto della pila, partendo dal top. */
void print_stack( void ){
    for(int i=0; i<postop; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}