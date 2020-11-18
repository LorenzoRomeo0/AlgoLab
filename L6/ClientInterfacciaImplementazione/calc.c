#include "stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char token[10];
    
    while(scanf("%s", &token)!=EOF){
        int val1 = 0, val2 = 0;
        if(isdigit(token[0])){
            push(atoi(token));
        }else if(token[0]=='+' || token[0]=='-'){
            printf("token %c ", token[0] );
            if(!is_empty())
                val1 = pop();
            if(!is_empty())
                val2 = pop();
            if(token[0]=='+')
                push(val1 + val2);
            if(token[0]=='-')
                push(val1 - val2);
        }
    }
    print_stack();
}
/*
leggi un token (operatore o numero);
se il token è un numero
inseriscilo nella pila;
se il token è un operatore
estrai due valori dalla pila;
applica ad essi l’operatore;
inserisci il risultato nella pila;
*/