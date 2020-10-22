#include<stdio.h>
#include<ctype.h>
void main(){
    char frase[20], c;
    short i, k = 0;
    while((c = getchar())!='.') frase[i++] = c;
    scanf("%hu", &k);
    for(short j = 0; j<i; j++) frase[j] = (isalpha(frase[j])) ? (isupper(frase[j]))? ('A' + ( frase[j] - 'A' + k ) % 26) : ('a' + ( frase[j] - 'a' + k ) % 26): frase[j];
    for(short j = 0; j<i; j++) printf("%c", frase[j]);
}