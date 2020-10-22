#include<stdio.h>

int main(){
    int mancante = 0, finale = 0, precedente = -1, num, max;
    scanf("%d", &finale);
    max=finale;
    while(finale--){
        scanf("%d", &num);
        if(num != precedente+1){
            mancante = precedente + 1;
        }
        precedente = num;
    }
    if(num!=max)
        mancante = max;
    printf("%d\n",mancante);
}