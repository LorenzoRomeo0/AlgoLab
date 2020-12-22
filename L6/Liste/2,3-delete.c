#include <stdio.h>
#include <stdlib.h>

struct node {   
  int info;   
  struct node *next;
};

typedef struct node *Node;

void list_delete( int n, struct node *l){
  struct node *curr, *prev;
  for ( curr = l, prev = NULL; curr != NULL; prev = curr, curr = curr -> next ) {
    if(curr -> next -> info == n){
      curr -> next = NULL;
      return;
    }
    if (curr -> info == n ) break;
  }
  if (curr == NULL) //l'elemento non appartiene alla lista
    return;
  if (prev == NULL) // l'elemento e' il primo nella lista
    l = l -> next;
  else              // l'elemento appartiene alla lista e non e' il primo elemento.
    prev -> next = curr -> next;
  free(curr);
}

void list_insert( int n, Node l){
  Node new = malloc(sizeof(Node));
  new -> info = n;
  new -> next = l;
  *l = *new; 
}

Node list_insert1( int n, Node l ){
  Node new = malloc(sizeof(Node));
  new -> info = n;
  new -> next = l;
  return new; 
}

void list_print(struct node *l){
    for(;l != NULL; l = l->next)
        printf("%d ", l ->info);
}

void list_printInv(struct node *l){
    if(l -> next != NULL)
        list_printInv(l -> next);
    printf("%d ", l -> info);
}

int* toArray(struct node *l, int *size){
    int cont=0, *a;
    int i = 0;
    for(struct node *e = l;e != NULL; e = e->next)
        cont++;
    a = malloc(sizeof(int)*cont);
    *size = cont;

    for(struct node *e = l;e != NULL; e = e->next){
        a[i]=e ->info;
        i++;
    }
    return a;
}

void list_destroy1 (Node l){
    Node curr = l;
    int elim = 1;
    while(l != NULL){
        
        printf("\n");
        while(curr != NULL){
            if(curr -> next == NULL){
                free(curr);
                break;
            }else
                curr = curr -> next;
            //printf("%d ", curr ->info);
        }
        curr = l;
    }
}

void list_destroy(Node l){
    
    if(l != NULL){
        printf("destroy %d \n", l->info);
        list_destroy(l->next);
        if(l->next!=NULL) l->next=NULL;
        free(l);
        l = NULL;
        printf("destroy %p \n", l);
    }
        
}

void print_arr(int* arr, int size){
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);

}

int main() {
    //struct node *first = malloc(sizeof(struct node));
    struct node *first = list_insert1(1, NULL);
    first = list_insert1(2, first);
    /* int n; 
    int *arr = toArray(first, &n);
    print_arr(arr, n);
    printf("\n");
    list_delete( 2 , first );
    list_print( first );
    printf("\n");
    list_printInv(first);*/
    first = list_insert1(3, first);
    first = list_insert1(4, first);
    first = list_insert1(5, first);
    first = list_insert1(6, first);
    list_print( first );
    printf("\nD");
    list_destroy(first);
    printf("\n\n--\n");
    list_print( first );
    return 0;
}
/*
2-
    1) Quando l'elemento da eliminare non e' presente nella lista.
    2) Quando l'elemento da eliminare e' il primo elemento della lista.
    3) Quando l'elemento da eliminare appartiene alla lista e non e' il primo.
    5) Quando l'elemento da eliminare e' l'ultimo nella lista.
*/
