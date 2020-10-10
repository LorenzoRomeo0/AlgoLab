#include<stdio.h>

#define N 100

int main(){
    int array[N], comodo, dim;
    short check = 1;
    scanf("%d", &dim);
    for(int i=0; i<dim; i++){
        scanf("%d", &array[i]);
    }

    while(check){
        check = 0;
        for(int i = 0; i<dim-1; i++){
            if(array[i]>array[i+1]){
                array[i]=0;
                array[i+1]=1;
                check=1;
            }
        }
    }
    for(int i=0; i<dim; i++) printf("%d ", array[i]);
    printf("\n");
    return 0;
}