#include<stdio.h>

void max_secondmax(int a[], int n, int* max, int* second_max){
    for(int i=0; i<n; i++){
        if(a[i]>*max){
            printf("%p %d\n",&a[i], a[i]);
            *second_max = *max;
            *max = a[i];
        }
    }
}


int main(){
    int max = 0, second_max = 0;
    int arr[] = {4,6,3,1,8,6,5,6,9,4};

    max_secondmax(arr, 10, &max, &second_max);

    printf("%d %d", max,second_max);

    return 0;

}