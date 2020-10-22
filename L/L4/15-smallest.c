#include<stdio.h>

#define LEN 100

int *smallest(int a[], int n){
    int *smallest = a;
    for(int i=0; i<n; i++){
        if(a[i]< *smallest) smallest = &a[i];
    }
    return smallest;
}

int main(){
    int array[LEN] = {0}, num = 1, cont = 0;
    while(cont<LEN){ 
        scanf("%d", &num);
        if(num == -1) break;
        array[cont++] = num;
    }
    printf("%d\n", *smallest(array, cont));
}