#include<stdio.h>
#include<ctype.h>
#define N 26

int main(){
    int istogramma[N], i;
    for(i = 0; i<N; i++) istogramma[i]=0;
    char c;
    while((c = getchar())!='.'){
        if(isalpha(c)){
            if(isupper(c)) istogramma[c - 'A'] ++;
            else istogramma[c - 'a'] ++;
        }
    }
    for(i = 0; i<N; i++){
        printf("%c: ",  'A'+ i);
        for(int j = 0; j<istogramma[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
1-2) No, basta memorizzare le occorrenze dei caratteri, mappandoli in un'array di 26 elementi.
3) 29. istogramma (26), i, c e j.
4) Lo spazio è fisso 29*4 byte. Lo spazio non aumenta al crescere dell'input.
5) 28 + 3 * lettere + 2*26*lettere+1;
*/