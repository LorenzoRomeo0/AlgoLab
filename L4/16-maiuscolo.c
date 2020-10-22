#include<stdio.h>
#include<ctype.h>

char *maiuscolo(char *stringa){
    for(int i = 0; stringa[i]!='\0'; i++){
        stringa[i] = toupper(stringa[i]);
    }
    return stringa;
}

int main(){
    char* stringa;
    scanf("%s", stringa);
    char *p = maiuscolo(stringa);
    for(int i = 0; p[i]!='\0'; i++) printf("%c", p[i]);
    printf("\n");
}