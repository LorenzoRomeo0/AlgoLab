#include<stdio.h>
#include<ctype.h>

#define N 100

int main(){
    char matrice[N][N], car;
    int r = 0,c = 0, j = 0;
    short check = 1;
    scanf("%d %d", &r, &c);

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            car = getchar();
            if(isalpha(car) || car == '*') matrice[i][j]=car;
            else j--;
        }
    }
    printf("\n");

    while(check){
        check=0;
        for(int i=0; i<r-1;i++){
            for(int j=0; j<c;j++){
                if(isalpha(matrice[i][j]) && matrice[i+1][j]=='*'){
                    check=1;
                    matrice[i+1][j] = matrice[i][j];
                    matrice[i][j] = '*';
                }
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++)
            printf("%c ",matrice[i][j]);
        printf("\n");
    }

    return 0;
}