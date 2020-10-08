#include<stdio.h>


int numgiorni(int mese){
    switch(mese){
        case 2: return 28;
        case 11: case 3: case 5: case 9: return 30;
        default: return 31;
    }
}

void printmonth(int mese, int num){
    printf(" L\t M\t M\t G\t V\t S\t D\n");
    int giorni = numgiorni(mese);
    int giornosettimana = 1;
    for(int i = 1; i<num; i++){
        printf(" \t");
    }
    for(int i=1; i<=giorni; i++){
        if(num<=7){
            if(i<10) printf(" %d\t", i);
            else printf("%d\t", i);
            num++;
        }else{
            printf("\n");
            i--;
            num = 1;
        }
    }
    printf("\n");
}

int main(){
    printmonth(2,4);
    return 0;
}