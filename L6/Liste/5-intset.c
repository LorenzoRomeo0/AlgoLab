#include<stdlib.h>
#include<ctype.h>
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

Node list_search( int n, struct node *l ){
    for(;l != NULL; l = l->next){
        if(l -> info == n)  return l;
    }
    return NULL;
}

void list_delete( int n, struct node *l){
  struct node *curr, *prev;

  for ( curr = l, prev = NULL; curr != NULL; prev = curr, curr = curr -> next ) {
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

void list_print(struct node *l){
    for(;l != NULL; l = l->next)
        printf("%d ", l ->info);
}

int list_size(struct node *l){
    int size = 0;
    for(;l != NULL; l = l->next)
        size++;
    return size;
}

void list_destroy(Node l){
    Node first = l;
    Node *arr = malloc(sizeof(Node)*list_size(l));
    for(int i = 0;l != NULL; l = l->next, i++){
        arr[i] = l;
    }
    for(int i = 0; i<= list_size(first); i++){
        free(arr[i]);
    }
}
int main(){
    char comando;
    int informazione;
    Node head = NULL;

    while((comando = getchar()) != 'f'){
        switch(comando){
            
            case('+'):
                scanf("%d", &informazione);
                if(list_search(informazione, head) == NULL)
                    head = list_insert(informazione, head);
                break;

            case('-'):
                printf("\n");
                scanf("%d", &informazione);
                list_delete(informazione, head);
                break;

            case('?'):
                scanf("%d", &informazione);
                if(list_search(informazione, head) != NULL)
                    printf("L'elemento %d appartiene all'insieme.\n", informazione);
                break;

            case('c'):
                printf("Ci sono %d elementi.\n", list_size(head));
                break;

            case('p'):
                list_print(head);
                printf("\n");
                break;
            
            case('d'):
                list_destroy(head);
                break;
        }
        
    }
    list_print(head);



    return 0;
}