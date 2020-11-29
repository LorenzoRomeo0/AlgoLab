#include<stdio.h>
#include<stdlib.h>
#define N 100

void stampa ( int a[] , int lung ){
    printf("[ ");
    for(int i=0; i<lung;i++)
        printf("%d ",a[i]);
    printf("]");
}

void scambia ( int a[] , int i , int j ){
    int comodo = a[i];
    a[i]=a[j];
    a[j]=comodo;
}

void selectionsort ( int a[] , int n ){
    if(n == 0 || n ==1){
        return;
    }
    int max = a[0];
    int indexMax = 0;
    for(int i=1; i< n; i++){
        if(a[i]>max){
            max=a[i];
            indexMax=i;
        }
    }
    scambia(a, indexMax, n-1);
    selectionsort(a, n-1);
}

/*int* merge(int b[], int c[], int dimb, int dimc, int x[]){
    //int dimb = sizeof(b)/sizeof(int);
    //int dimc = sizeof(c)/sizeof(int);
    printf("[MERGE b:%d c:%d]\n", dimb, dimc);
    stampa(b, dimb);
    printf("\n");
    stampa(c, dimc);
    printf("\n");

    //int *x = malloc(sizeof(int)*(dimb+dimc));
    //int dimx = dimb+dimc;
    int i1=0, i2=0,k=0;
    while(i1<dimb && i2<dimc){
        if(b[i1]<=c[i2])
            x[k]=b[i1++];
        else x[k]=c[i2++];
        k++;
    }
    if(i1<dimb){
        while(i1<dimb)
            x[k++]=b[i1++];
    }
    if(i2<dimc){
        while(i2<dimc)
            x[k++]=c[i2++];
    }
    return x;
}*/

/*void merge (int a[], int i, int m, int f){
    int i1 = i;
    int i2 = m;
    int k = 0;
    int *x = malloc(sizeof(int)*(f-i));
    while(i1<m && i<f){
        if(a[i1]<=a[i2])
            x[k] = a[i1++];
        else 
            x[k] = a[i2++];
        k++;
    }
    if(i1<m)
        while(i1<m)
            x[k++]=a[i1++];
    else
        while(i2<f)
            x[k++]=a[i2++];
    for(int k=0; k<f-i-1; k++){
        a[i+k]=x[k];
    }
}

int* innerMergesort(int a[] , int sx , int dx, int b[], int c[]){
    printf("{{INNERMERGE b:%d c:%d ---- %d}}\n", sx, dx, dx-sx);
    if(dx-sx > 1){
        b=innerMergesort(a, sx, dx/2-1, b,c);
        c=innerMergesort(a, dx/2, dx-1, b,c);
        merge(a, sx,dx/2,dx);
    }
}

void mergesort ( int a[] , int sx , int dx ){
    int *b = malloc(sizeof(int)*dx/2);
    int *c = malloc(sizeof(int)*dx/2);
    innerMergesort(a,sx, dx, b, c);
}
*/

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    i = 0;
    j = 0;
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main(){

    int a[N];
    int len = 0;
    while(scanf("%d",&a[len]) != EOF) len++;
    //scambia(a,2,len-1);
    //selectionsort( a, len);
    mergesort( a, 0, len);

    stampa(a, len);
    return 0;
}