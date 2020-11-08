#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char* string;

int size = 0;

string* newBook(int n){
    string* book = malloc(sizeof(string*)*n);
    if(book == NULL){
        printf("Errore drante la creazione della struttura.");
        return NULL;
    }
    size = n;
    for(int i=0; i<n;i++) book[i] = malloc(sizeof(string*)*n);
    for(int i=0; i<n;i++) book[i] = NULL;
    return book;
}

void book(string* book, int k, string name){
    if(k<0 || k>=size){
        printf("Posizione non valida.\n");
        return;
    }
    if(book[k]!=NULL){
        printf("Posizione gia' occupata.\n");
        return;
    }
    book[k] = name;
}

void cancel(string* book, int k){
    if(k<0 || k>=size){
        printf("Posizione non valida.\n");
        return;
    }
    if(book[k]!=NULL){
        printf("Posizione gia' occupata.\n");
        return;
    }
    book[k]=NULL;
}

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

void printBook(string* book){
    for(int i=0; i<size; i++){
        if(book[i]==NULL)
            printf("book[%d] = .\n", i);
        else
            printf("book[%d] = %s\n", i, book[i]);
    }
}

/*void commandParser(string* command){
    printf("parser\n");
    static string atom = " ";
    int cont = 0;
    do{
        printf("----%s----%d\n", atom, cont);
        if(strcmp(atom, " ") > 0){
            printf("dsd\n");
            command[cont] = malloc(sizeof(string)*3);
            command[cont] = atom;
            cont++;
            printf("%s", command[cont]);
        }
        scanf("%s", atom);
    }while(atom[0]!='\n' || cont<3);
}*/
void commandParser(){
    string command;
    string parsed;
    for(int i=0; command[i]!='\0'; i++){

    }
}

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