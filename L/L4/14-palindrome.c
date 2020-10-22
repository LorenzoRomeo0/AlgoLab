#include<stdio.h>

int palindroma(char string[]){
    int len = 0;
    while(string[len] != '\0') len++;
    char *p = string, *q = p + len-1;
    while(p<q){
        if(*p != *q) return 0;
        p++;
        q--;
    }
    return 1;
}

int main(int argc, char *argv[]){
    char *string = argv[1];
    printf("%s\n", palindroma(string)?"palindroma":"non palindroma");

    return 0;
}