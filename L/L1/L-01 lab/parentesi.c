#include<stdio.h>

int main(){
    char carattere;
    int aperte = 0;
    int chiuse = 0;
    int controllo = 0;

    while((carattere = getchar()) != '.'){
        if(carattere == '(') aperte++;
        else if(carattere == ')') chiuse++;
        printf("%d %d\n", aperte, chiuse);
    }
    if(aperte != chiuse) controllo = 1;

    switch(controllo){
        case 1: printf("Errore %d %d\n", aperte, chiuse);
    }

    return 0;
}