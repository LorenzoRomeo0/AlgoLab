#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef char *string;

typedef struct node{
    string word;
	int count;
	struct node *next;
} *Node;

//typedef struct node *Node;

typedef struct list{
	Node head;
	Node tail;	
} *List;

void list_print(struct node *l){
    for(;l != NULL; l = l->next)
        printf("%s %d ", l ->word, l -> count);
}

string strcln(string s){
    int size = 0;
    string new = NULL;
    for(; s[size]!='\0'; size++);
    new = malloc(sizeof(char)*size);
    for(int i=0; i<=size; i++) new[i]=s[i];
    return new;
}

struct node *olist_insert( string s, struct node *l ){
    Node first = l;
    int inserito = 0;
    if(l ->word == NULL){
        //printf("-STRINGA NUOVA\n");
        Node new = malloc(sizeof(Node));
        new -> word = strcln(s);
        new -> count = 1;
        new -> next = NULL;
        return new;
    }else{
        //printf("-STRINGA AGGIORNA\n");
        for(;l != NULL && l -> next != NULL; l = l->next){
            if(strcmp(l->word, s)==0){
                    l->count++;
                    inserito = 1;
                    break;
            }
            if(strcmp(l->next->word, s)>0){
                    Node new = malloc(sizeof(Node));
                    new -> word = strcln(s);
                    new -> count = 1;
                    new -> next = l -> next;
                    l -> next = new;
                    inserito = 1;
                    break;
            }
        }
        if(!inserito){
            //printf("-STRINGA FINALE\n");
            if(strcmp(l->word, s)==0){
                    l->count++;
                    return l;
            }
            Node new = malloc(sizeof(Node));
            new -> word = strcln(s);
            new -> count = 1;
            new -> next = NULL;
            l -> next = new;
        }
    }
    return first;
}

struct node *olist_search( string s, struct node *l ){
    for(;l != NULL; l = l->next){
        if(strcmp(l->word, s) == 0)  return l;
        if(strcmp(l->word, s) > 0)   return NULL;
    }
    return NULL;
}

int main(){
    Node l = malloc(sizeof(struct node));
    l ->word = NULL;

    string word = malloc(sizeof(char)*20);
    while(1){
        scanf("%s", word);
        if(strcmp(word, "STOP")==0) break;
        l = olist_insert(word, l);
        word = malloc(sizeof(string)*100);
    }
    list_print(l);

    return 0;
}
