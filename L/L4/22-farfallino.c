#include<stdio.h>
#include<ctype.h>

int main(int argc, char **argv){
    char* parola = argv[1];
    for(int i=0; parola[i]!='\0'; i++){
        if(tolower(parola[i]) == 'a' || tolower(parola[i]) == 'e' || tolower(parola[i]) == 'i' || tolower(parola[i]) == 'o' || tolower(parola[i]) == 'u') 
            printf("%cf%c",parola[i], parola[i] );
        else printf("%c", parola[i]);
    }
    printf("\n");
    return 0;
}