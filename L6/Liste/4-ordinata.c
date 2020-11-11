#include<stdlib.h>
#include<stdio.h>

struct node {   
  int info;   
  struct node *next;
};

typedef struct node *Node;

Node list_insert( int n, Node l ){
  Node new = malloc(sizeof(Node));
  new -> info = n;
  new -> next = l;
  return new; 
}


void list_print(struct node *l){
    for(;l != NULL; l = l->next)
        printf("%d ", l ->info);
}

struct node *olist_insert( int n, struct node *l ){
    Node first = l;
    int inserito = 0;
    for(;l != NULL && l -> next != NULL; l = l->next){
        if(l -> next -> info > n ){
            Node new = malloc(sizeof(Node));
            new -> info = n;
            new -> next = l -> next;
            l -> next = new;
            inserito = 1;
            break; 
        }
    }
    if(!inserito){
        Node new = malloc(sizeof(Node));
        new -> info = n;
        new -> next = NULL;
        l -> next = new;
    }
    return first;
}

struct node *olist_search( int n, struct node *l ){
    for(;l != NULL; l = l->next){
        if(l -> info == n)  return l;
        if(l -> info > n)   return NULL;
    }
    return NULL;
}

int main(){
    Node lista = list_insert(7, NULL);
    lista = list_insert(4, lista);
    lista = list_insert(1, lista);

    lista = olist_insert(3, lista);
    
    lista = olist_insert(2, lista);
    lista = olist_insert(5, lista);
    
    lista = olist_insert(8, lista);
    list_print(lista);

    printf("\n%p -> %d", olist_search(3, lista), olist_search(3, lista) -> info);
    printf("\n%p", olist_search(6, lista));
    return 0;
}