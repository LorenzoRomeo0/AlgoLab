#include<stdio.h>


int divisori(int n){
    int cont = 0;
    for(int i=(int)n/2; i>0; i--){
        if(n%i == 0){
            printf("%d\n", i);
            cont++;
        }
    }
    return cont;
}

int primo(int n){
    for(int i=(int)n/2; i>1; i--){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void fattoriPrimi(int n){
    int i = 2;
    while(i<=n){
        if(n%i==0 && primo(i)==1){
            printf("%d\n",i);
            n/=i;
        }
        i++;
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d\n\n",divisori(n));
    printf("%s\n\n",(primo(n)==1)?"Primo":"Non primo");
    fattoriPrimi(n);
    return 0;
}