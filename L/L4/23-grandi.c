#include<stdio.h>

void max_secondmax(int a[], int n, int* max, int* second_max){
    
    max = a ,second_max = a;
    printf("%p %p %p\n",a, max, second_max);
    for(int i=0; i<n; i++){
        if(a[i]>*max){
            printf("%p %d\n",&a[i], a[i]);
            second_max = max;
            max = &a[i];
        }
    }
    printf("---%p %p %p %d %d\n",a, max, second_max, *max, *second_max);
}



int main(){
    int m=0, s=0;
    int *max = &m, *second_max = &s;
    int arr[] = {4,6,3,1,8,6,5,6,9,4};

    max_secondmax(arr, 10, max, second_max);

    printf("%d %d", m,s);

    return 0;

}