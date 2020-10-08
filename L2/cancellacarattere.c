#include<stdio.h>
#include<ctype.h>
int main(){
    char sequenza[100],sequenza1[100], c = {0};
    int i, k = 0;
    while((c = getchar())!='\n') sequenza[i++] = c;
    for(int j = 0; j<i; j++) sequenza1[k++] = (sequenza[j]!=sequenza[i-1])?sequenza[j]:sequenza1[--k];
    for(int j = 0; j<k; j++) printf("%c", sequenza1[j]);
}