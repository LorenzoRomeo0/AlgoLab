#include "pqueue.h"
#include<stdlib.h>
#include<stdio.h>
void pqueue_print(Pqueue p){
    //printf("-PRINT\n");
    printf("[ ");
    if(p)
        for(int i=1; i<p->count;i++)
            printf("%d ", p->h[i]);
    printf("]");
}

/* crea una coda di priorità vuota che potrà contenere al massimo n Item */
Pqueue pqueue_new( int n ){
    printf("-NEW\n");
    Pqueue new = malloc(sizeof(struct pqueue));
    new -> size = n;
    new -> count = 1;
    new -> h = malloc(sizeof(Item)*n);
    
    for(int i=0; i<n; i++){
        new -> h[i]=0;
    }
    return new;
}

/* distrugge la coda di priorità */
void pqueue_destroy( Pqueue p){
    free(p->h);
    free(p);
}

/* restituisce la lunghezza della coda di priorità */
int pqueue_length( Pqueue p){
    return p->size;
}

/* restituisce il padre dell'elemento in posizione index */
int father(Pqueue p, int index){
    printf("-FATHER\n");
    return p->h[index/2];
}

void heapify_up(Pqueue p, int i){
    printf("-UP\n");
    if(i>1){
        int j = //father(p, i);
                p->h[i/2];
        printf("--UP %d father: %d\n",i, j);
        printf("1) ");pqueue_print(p);
        printf("\n");
        if(p->h[i]<p->h[j]){
            int temp = p->h[j];
            p->h[j] = p->h[i];
            p->h[i] = temp;
            printf("2) "); pqueue_print(p);
            heapify_up(p,j);
        }
    }
}

/* inserisce l’Item nella coda di priorità */
void pqueue_insert( Pqueue p, Item i){
    printf("-INSERT %d\n", i);
    pqueue_print(p);
    if(p){
        if(p->count+1<p->size){
            printf("-1\n");
            if(p->count >=1 && 2*i<p->size){
                printf("--2\n");
                p->h[2*++p->count] = i;
            }else if(p->count >=1 && 2*i+1<=p->size){
                printf("--3\n");
                p->h[2*++p->count+1] = i;
            }

        

            //p->h[p->count++]=i; //PAG 8/16 LAGOLAB-10 HEAP.PDF
            heapify_up(p,p->count-1);
        }else printf("INSERT: Piena!");
    }
}

void heapify_down(Pqueue p){
    
}

/* estrae dalla coda di priorità l’Item con chiave minima */
Item pqueue_extractmin( Pqueue );

/* restituisce l’Item con chiave minima nella coda di priorità */
Item pqueue_min( Pqueue );

void pqueue_sort( Item a[], int l, int r );



int main(){
    Pqueue p = pqueue_new(10);
    pqueue_print(p);
    pqueue_insert(p, 5);
    pqueue_insert(p, 4);
    /*pqueue_insert(p, 3);
    pqueue_insert(p, 2);
    pqueue_insert(p, 7);*/
    //pqueue_insert(p, 1);
    pqueue_print(p);

    return 0;
}