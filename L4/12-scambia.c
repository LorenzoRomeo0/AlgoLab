#include<stdio.h>

void scambia(int *p, int *q){
    int comodo = *p;
    *p = *q;
    *q = comodo;
}

int main(){
    int p, q;
    scanf("%d %d", &p, &q);
    scambia(&p, &q);
    printf("%d %d\n",p, q);
    return 0;
}