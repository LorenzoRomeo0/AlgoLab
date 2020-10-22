#include<stdio.h>

int main(){
    char a, b;

    scanf("%c %c", &a, &b);
    
    if(a>b){
        printf("%d", a-b);
    }else{
        printf("%d", b-a);
    }

    return 0;
}