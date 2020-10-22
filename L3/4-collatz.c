#include<stdio.h>

int collatz(int n){
    if(n%2==0) return n/2;
    return n*3+1;
}

int main(){
    int num = 0, cont = 1;
    scanf("%d", &num);
    while(num!=1){
        printf("%d ", num);
        num = collatz(num);
        cont++;
    }
    printf("1\nN° numeri: %d\n",cont);
    return 0;
}