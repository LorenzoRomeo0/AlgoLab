#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}*Node;
//typedef struct node *Node;


typedef struct pila{
    Node first;
    Node top;
    int size;
}*Pila;
//typedef struct pila *Pila;

Pila pila = NULL;

/* svuota la pila */
void make_empty( void ){
    
    if(pila == NULL){
        pila = malloc(sizeof(Pila));
        pila ->first = NULL;
        pila ->top = NULL;
        pila ->size = 0;
        return;
    }
    Node node = pila -> first;
    Node *arr = malloc(sizeof(Node)*pila->size);
    for(int i = 0;node != NULL; node = node->next, i++){
        arr[i] = node;
    }
    for(int i = 0; i<= pila -> size; i++){
        free(arr[i]);
    }
    pila -> size = 0;
    pila -> first = NULL;
}

/* restituisce 1 se la pila e' vuota, 0 altrimenti */
int is_empty( void ){
    if(pila == NULL)    return 1;
}

/* se la pila non e' vuota, restituisce il top de1la pila; 
altrimenti esce con messaggio di errore. */
int top( void ){
    if(pila->first != NULL)    return pila ->top ->value;
    else    perror("Stack vuoto.\n");
}

/* se la pila non e' vuota, restituisce il top della pila; 
altrimenti esce con messaggio di errore. */
int pop( void ){
    int value;
    if(pila->first != NULL){
        if(pila->first->next == NULL){
            value = pila->first->value;
            free(pila->first);
            pila->first = NULL;
            pila->top = NULL;
            pila->size--;
            return value;
        }
        for(Node nodo = pila ->first; nodo != NULL; nodo = nodo->next){
            if(nodo->next->next == NULL){
                int value = nodo->next->value;
                free(nodo->next);
                nodo->next = NULL;
                pila->top=nodo;
                pila->size--;
                return value;
            }
        }
    }else   perror("Stack vuoto.\n");
    return 0;
}

/* se c'e' spazio, aggiunge n alla pila; 
altrimenti esce con messaggio d'errore. */
void push( int n ){
    if(pila->first==NULL){
        pila->first = malloc(sizeof(Node));
        pila->first->value = n;
        pila->first->next = NULL;
        pila->top = pila->first;
        pila->size=1;
        return;
    }
    for(Node nodo = pila ->first; nodo != NULL; nodo = nodo->next){
        if(nodo->next==NULL){
            nodo ->next = malloc(sizeof(Node));
            if(nodo->next == NULL){
                perror("Not enough space.\n");
                return;
            }
            nodo->next->value= n;
            nodo->next->next=NULL;
            pila->top=nodo->next;
            pila->size++;
            break;
        }
    }
}

/* stampa il contenuto della pila, partendo dal top. */
void print_stack( void ){
    Node l = pila ->first;
    for(;l != NULL; l = l->next)
        printf("%d ", l ->value);
    printf("\n");
}