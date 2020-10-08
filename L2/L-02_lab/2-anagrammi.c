#include<stdio.h>
#include<ctype.h>
#define N 26


int main(){

    int istogramma[N],istogramma1[N], i, check = {0};
    char c;
    for(i = 0; i<N; i++){istogramma[i]=0; istogramma1[i]=0;}
    while((c = getchar())!='.'){
        if(isalpha(c)){
            if(isupper(c)) istogramma[c - 'A'] ++;
            else istogramma[c - 'a'] ++;
        }
    }
    while((c = getchar())!='.'){
        if(isalpha(c)){
            if(isupper(c)) istogramma1[c - 'A'] ++;
            else istogramma1[c - 'a'] ++;
        }
    }
    for(i = 0; i<N; i++){
        if(istogramma[i] != istogramma1[i]){
            check = 1;
            break;
        }
    }
    printf("%s", (check==0)?"Anagrammi\n":"Non anagrammi\n");



    return 0;
}