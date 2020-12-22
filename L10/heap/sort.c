#include<stdio.h>
#include "stack.h"

void print(Pqueue p){
    printf("[ ");
    for(int i = 1; i<pqueue_length(p); i++)
        printf("%d ", p->h[i]);
    printf("]");
}

void print_sorted(int* a, int n){
    Pqueue p = pqueue_new(n);
    for(int i=0; i<n; i++)
        pqueue_insert(p, a[i]);
    print(p);
}

int main(){
    int a[] = {1,5, 4, 7, 8, 3, 2, 4, 66, -1};
    print_sorted(a, 10);

    return 0;
}