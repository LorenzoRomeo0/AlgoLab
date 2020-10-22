#include<stdio.h>
#define N 10


int main(){
    int cont[N], num = {0};
    for(int i = 0; i<N ; i++) cont[i]=0;
    scanf("%d", &num);
    for(; num > 0 ; num/=10){
        cont[num%10]++;
    }
    printf("Cifre ripetute:");
    for(int i = 0; i<N; i++){
        if(cont[i]>1) printf(" %d ", i);
    }
    return 0;
}