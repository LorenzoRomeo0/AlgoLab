#include<stdlib.h>

struct node {   
  int info;   
  struct node *next;
};

typedef struct node *Node;

/*Node list_insert( int n, Node l ){
  Node new = malloc(sizeof(Node));
  new -> info = n;
  new -> next = l;
  return new; 
}*/

void list_insert( int n, Node l){
  Node new = malloc(sizeof(Node));
  new -> info = n;
  new -> next = l;
  l = new; 
}

Node list_search( int n, Node l ){
  /*while ( l != NULL && l -> info != n )
    l = l -> next;*/
  for(;l != NULL && l -> info != n ;l = l -> next){}
  return l;
}

Node list_search_rec(int n, Node l){
    if(l != NULL && l -> info != n)
        return list_search_rec(n, l -> next);
    return l;
}

int main(){
    list_insert(3, NULL);

    return 0;
}

/*
3) Produce un nodo senza un successore.
4) Restituisce l'indirizzo del nodo della lista che ha valore 7.
6) Restituisce la posizione del primo nodo contenente quel valore.

*/
