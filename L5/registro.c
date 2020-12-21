#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char* string;


int size = 0;

/*  Restituisce una nuova lista di dimensione N.
    Inizializza le posizioni NULL.
    Stampa un errore se l'allocazione non ha successo.
    EFFETTI-COLL:   Imposta size = n.
*/
string* newBook(int n){
    string* book = malloc(sizeof(string)*n);
    if(book == NULL){
        printf("Errore drante la creazione della struttura.");
        return NULL;
    }
    size = n;
    for(int i=0; i<n;i++) book[i] = NULL;
    return book;
}

/*  Clona la stringa "name" nella posizione k della lista book.
    Stampa un errore se la posizione e' occupata oppure se non e' valida.
*/
void book(string* book, int k, string name){
    if(k<0 || k>=size){
        printf("Posizione non valida.\n");
        return;
    }
    if(book[k]!=NULL){
        printf("Posizione gia' occupata.\n");
        return;
    }
    int i = 0;
    for(; name[i]!='\0';i++){}
    book[k]=malloc(sizeof(char)*i);
    strcpy(book[k], name);
}

/*  Cancella la prenotazione in posizione k impostandola a NULL.
    Stampa un errore se la posizione non e' valida.
*/
void cancel(string* book, int k){
    if(k<0 || k>=size){
        printf("Posizione non valida.\n");
        return;
    }
    book[k]=NULL;
}

/*Sposta il valore in posizione from in to.
Stampa un errore se from e' vuota o to e' occupata. */
void move(string* book, int from, int to){
    if(from<0 || from>=size || to<0 || to>=size){
        printf("Posizione non valida.\n");
        return;
    }
    if(book[from]==NULL || book[to]!=NULL){
        printf("Posizione occupata / nulla da spostare.\n");
        return;
    }
    book[to]=book[from];
    book[from]=NULL;
}

/*Stampa il book. I posti con valore NULL vengono stampati come '.' */
void printBook(string* book){
    for(int i=0; i<size; i++){
        if(book[i]==NULL)
            printf("book[%d] = .\n", i);
        else
            printf("book[%d] = %s\n", i, book[i]);
    }
}

/*Inutilizzata */
void split(string* ris, string s){
    int spazi = 0;
    string comodo;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]==' ')   spazi++;
    }
    ris = malloc(spazi*sizeof(string));
    
    for(int i=0; i<spazi; i++){
        while(s[i]!=' '){
            spazi++;
            
        }
    }
}

int main(){
    string *prenotazioni;
    int dim;
    char arg1;
    int arg2, arg4;
    string arg3;

    while((arg1 = getchar()) != 'f'){
        switch(arg1){
            case 'b': // b n --> newBook(n)
                scanf("%d", &arg2);
                dim = arg2;
                prenotazioni = newBook(arg2);
                printf("\n");
                break;

            case '+': // + k name --> book(k, name)
                scanf("%d %s", &arg2, arg3);
                book(prenotazioni, arg2, arg3);
                printf("\n");
                break;

            case '-': // - k --> cancel(k)
                scanf("%d", &arg2);
                cancel(prenotazioni, arg2);
                 printf("\n");
                break;  

            case 'm': // m from to ---> move from to
                scanf("%d %d", &arg2, &arg4);
                move(prenotazioni, arg2, arg4);
                printf("\n");
                break;

            case 'p': // p ---> printBook()
                printBook(prenotazioni);
                printf("\n");
                break;

        }
    }
    return 0;
}