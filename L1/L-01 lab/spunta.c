#include<stdio.h>

int main(){
    int size = 0;
    char simbolo = '+';
    int soglia = 3;
    scanf("%d", &size);

    for(int i=0; i<size; i++){

        for(int j=0; j<size+2; j++){
            if(j+i==size+1 || (j-i==3-size)) simbolo = '*';
            else simbolo = '.';
            printf("%c ", simbolo);
        }
        printf("\n");
    }
}