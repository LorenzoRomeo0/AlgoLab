#include<stdio.h>
#define LEN  20

int main(){
    char stringa[LEN], carattere;
    int i, check = 1;
    while((carattere = getchar()) != '.'){
        stringa[i]=carattere;
        i++;
    }
    i--;
    for(int j = 0; j<i; j++){
        if(stringa[j]!=stringa[i-j]){
            check = 0;
            break;
        }
    }
    printf("%s\n", (check == 1)?"palindroma":"non palindroma");
    return 0;
}