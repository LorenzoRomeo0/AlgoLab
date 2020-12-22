#include "stack.h"
#include<stdlib.h>
#include<stdio.h>


Pqueue pqueue_new( int n ){
    Pqueue new = malloc(sizeof(struct pqueue));
    new->count = 1;
    new->size = n+1; //Per avere la possibilita' di ingorare la prima posizione, seguendo le dispense.
    new->h = malloc(sizeof(Item)*(n+1));
    for(int i=0; i<new->size; i++)
        new->h[i] = 0;
    return new;
}

void pqueue_destroy( Pqueue p){
    free(p->h);
    free(p);
}

int pqueue_length( Pqueue p){
    return p->count;
}

int father(int index){
    return index/2;
}

void heapify_up(Heap h, int index){
    if(index>1){
        int j = father(index);
        if(h[index]<h[j] && j>0){
            int comodo = h[index];
            h[index] = h[j];
            h[j] = comodo;
            heapify_up(h, j);
        }
    }
}

void pqueue_insert( Pqueue p, Item i){
    if(p){
        if(p->count<p->size){
            p->h[p->count++]=i;
            heapify_up(p->h, p->count-1);
        }


    }
}

void heapify_down(Heap h, int i, int n){
    if(2*i <= n){
        int j;
        if(2*i==n) j=2*i;                           //n ha un solo figlio
        else j = (h[2*i]<h[2*i+1])? 2*i : 2*i+1;    //j = il figlio minore di n

        if(h[j]<h[i]){
            Item comodo = h[i];
            h[i]=h[j];
            h[j]=comodo;
            heapify_down(h, j, n);
        }
    }

}

Item pqueue_extractmin( Pqueue p){
    Item item = 0;
    if(p){
        if(p->count > 0) item = p->h[1];
        else return -1;
        //Scambio l'elemento di chiave minima 
        //con quello di chiave massima, riduco
        //la dimensione della lista e la metto a posto.
        Item comodo = p->h[1];
        p->h[1] = p->h[p->count-1];
        p->h[p->count-1] = comodo;
        p->h[p->count] = 0;
        p->count--;
        heapify_down(p->h, 1, pqueue_length(p));
    }
    return item;
}

Item pqueue_min( Pqueue p){
    Item item = 0;
    if(p){
        if(p->count > 0) item = p->h[1];
        else return -1;
    }
    return item;
}

void print(Pqueue p){
    printf("[ ");
    for(int i = 1; i<pqueue_length(p); i++)
        printf("%d ", p->h[i]);
    printf("]");
}

/*Stampa in modo ordinato gli elementi dell'array a */
//METTERE A POSTO!
void pqueue_sort(int* a, int n){
    Pqueue p = pqueue_new(n);
    for(int i=0; i<n; i++)
        pqueue_insert(p, a[i]);
    print(p);
    printf("\nSorted: [ ");
    while(pqueue_length(p)>0)
        printf("%d ", pqueue_extractmin(p));
    printf(" ]");
}


int main(){
    /*Pqueue p = pqueue_new(14);
    pqueue_insert(p, 1);
    pqueue_insert(p, 2);
    pqueue_insert(p, 5);
    pqueue_insert(p, 10);
    pqueue_insert(p, 3);
    pqueue_insert(p, 7);
    pqueue_insert(p, 11);
    pqueue_insert(p, 15);
    pqueue_insert(p, 17);
    pqueue_insert(p, 20);
    pqueue_insert(p, 9);
    pqueue_insert(p, 15);
    pqueue_insert(p, 8);
    pqueue_insert(p, 16);
    print(p);
    
    
    printf("\nItem: %d\n", pqueue_extractmin(p));
    print(p);

    pqueue_destroy(p);*/

    int a[] = {8,5,9,7,3,1,2,4,6,10};
    pqueue_sort(a, 10);
    return 0;
}